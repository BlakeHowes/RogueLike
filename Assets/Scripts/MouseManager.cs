using LlamAcademy.Spring.Runtime;
using System.Collections;
using Unity.Burst;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Tilemaps;
using static ItemStatic;
using static PartyManager;
using static UnityEngine.UI.Image;

public class MouseManager : MonoBehaviour
{
    public static MouseManager i;
    public ItemAbstract itemSelected;
    public bool disableMouse;
    public bool disableToggle = false;
    State state;
    public GameObject highlightedGameObject = null;
    public Vector3Int lastMousePosition;
    public bool isRepeatingActionsOutsideCombat = false;
    public Vector3Int clickPosition;
    private GlobalValues globalValues;
    public BagAnimation bagAnimation;
    public void Awake() {
        globalValues = Manager.GetGlobalValues();
        i = this;
    }

    public void SelectItem(ItemAbstract item) {
        itemSelected = item;
        if(item is not Skill) {
            var currentCharacter = PartyManager.i.currentCharacter;
            var origin = currentCharacter.Position();
            var currentStats = currentCharacter.GetComponent<Stats>();
            currentStats.RefreshCharacter(origin);
            GameUIManager.i.ShowRange(origin,currentCharacter.GetComponent<Stats>().throwingRangeTemp); 
        }
        if (!item) { InventoryManager.i.DeselectItems(); }
    }

    public void Update() {
        var mousePosition = MousePositionOnGrid();
        if (!CheckMouseValidity()) { return; }

        UpdateHightlight(mousePosition);


        if (Input.GetMouseButtonDown(1)) {
            if (itemSelected) {
                if (itemSelected is Skill) {
                    var skill = itemSelected as Skill;
                    skill.startPositionSet = false;
                }
            }
            SelectItem(null);
            GameUIManager.i.groundUI.ClearAllTiles();
        }

        if (Input.GetMouseButtonDown(0)) {
            PlayerActionsOrder(mousePosition);
        }
    }

    [BurstCompile]public void PlayerActionsOrder(Vector3Int mousePosition) {
        clickPosition = mousePosition;
        if (EventSystem.current.IsPointerOverGameObject()) { return; }
        if (!mousePosition.IsWalkable()) { return; }
        var gameobjectundermouse = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(mousePosition);
        var currentCharacter = PartyManager.i.currentCharacter;
        if (currentCharacter == null) { return; }
        var origin = currentCharacter.Position();
        var currentStats = currentCharacter.GetComponent<Stats>();
        var inventory = currentCharacter.GetComponent<Inventory>();
        state = currentStats.state;

        //1 Prepare character
        currentStats.RefreshCharacter(origin); //This calls all their equipment to add values to Stats

        //2 If and item is selected, use that item
        if (UseItem(mousePosition, origin, currentStats, inventory)) { return; };

        //3 Try to pick up item under current character while mouse is over them, if no item wait one tick
        if (mousePosition == origin) { WaitOrPickUpItem(mousePosition, origin, gameobjectundermouse, currentStats, currentCharacter); }

        //4 Try to attack a gameobject in range
        if (gameobjectundermouse) {
            if (!currentCharacter.CompareTag(gameobjectundermouse.tag)) {
                if (Attack(mousePosition, origin, gameobjectundermouse, currentCharacter)) { EndOfAction(); return; };
            }
        }

        

        //5 if a clicked on ally is next to current character during combat, swap with them
        if (SwapPositionWithAllyDuringCombat(mousePosition, origin, gameobjectundermouse, currentStats)) { return; }

        //6 Walk if all else fails
        PartyManager.i.characterFollowPosition = currentCharacter.Position();
        if (currentCharacter.CompareTag("Party")) { isRepeatingActionsOutsideCombat = WalkLeader(mousePosition, origin, currentStats); }
        else { isRepeatingActionsOutsideCombat = Walk(mousePosition, origin, currentStats); }
        
        var newpos = PartyManager.i.currentCharacter.Position();
        if (newpos == mousePosition || newpos == origin) { isRepeatingActionsOutsideCombat = false; }
        if (newpos != origin) { EndOfAction(); }
    }

    public bool SwapPositionWithAllyDuringCombat(Vector3Int mousePosition, Vector3Int origin,GameObject gameobjectundermouse,Stats currentStats) {
        if (gameobjectundermouse != null) {

            if (state != State.Combat) { return false; }
            if (gameobjectundermouse.CompareTag("Enemy")) { return false; }
            if (!GridManager.i.tools.InMeeleeRange(mousePosition, origin)) { return false; }

            if (currentStats.actionPoints >= currentStats.walkCostTemp) {
                if (gameobjectundermouse.CompareTag("Party")) {
                    PathingManager.i.SwapPlaces(mousePosition, origin);
                    currentStats.actionPoints -= currentStats.walkCostTemp;
                    EndOfAction();
                    return true;
                }
            }
        }
        return false;
    }

    public bool UseItem(Vector3Int position, Vector3Int origin, Stats currentStats, Inventory inventory) {
        if (itemSelected == null) { return false; }

        if (inventory.items.Contains(itemSelected)) {
            Actions.i.ThrowItem(position, origin, itemSelected, inventory);
            ChangeActionPoints(position, origin, inventory, currentStats, 1);
        }
        else {
            var skill = itemSelected as Skill;
            if(skill.type != Skill.Type.JustTheUserTile && skill.type != Skill.Type.AreaAroundUser) {
                if (!position.InRange(origin, skill.range)) { skill.startPositionSet = false; SelectItem(null); return true; }
            }
            if (skill.type == Skill.Type.SelectTwoGOUnderMouse) {
                if(skill.startPositionSet == false) {
                    if (position == origin) { SelectItem(null); return true; }
                    skill.targetedStartPosition = position;
                    skill.startPositionSet = true;
                    return true;
                }

            }
            if(ChangeActionPoints(position, origin, inventory, currentStats, skill.actionPointCost))
            itemSelected.Call(position, origin, Signal.Attack,inventory.gameObject,null);
            skill.startPositionSet = false;
        }
        currentStats.gameObject.GetComponent<SpringToTarget3D>().Nudge(PartyManager.i.currentCharacter.transform.position + new Vector3(0, globalValues.onAttackNudgeAmount/3f), 50, 800);
        PathingManager.i.FlipCharacter(currentStats.gameObject,position, origin);
        SelectItem(null);

        EndOfAction();
        return true;
    }

    public bool Attack(Vector3Int position, Vector3Int origin,GameObject target,GameObject currentCharacter) {
        if (target == null) { return false; }
        var currentStats = currentCharacter.GetComponent<Stats>();
        if (!GridManager.i.goMethods.IsInSight(origin, position)) { return false; }
        var inventory = currentCharacter.GetComponent<Inventory>();
        if(currentStats.state == State.Idle) {
            if(target.CompareTag("Interactable") || target.CompareTag("Door"))
            goto Meelee; 
        }
        inventory.CallEquipment(position, origin, Signal.Attack);
        if (GridManager.i.itemsInActionStack.Count == 0 && inventory.mainHand)  { return false; }
        PathingManager.i.FlipCharacter(currentCharacter, position, origin);
        currentStats.actionPoints--;

        currentCharacter.GetComponent<SpringToTarget3D>().Nudge(transform.position + new Vector3(0,globalValues.onAttackNudgeAmount), 24, 1000);
        if (inventory.mainHand) { return true; }
            
        Meelee:
        var range = GridManager.i.tools.MeeleeRange(origin);
        if (range.Contains(position) && currentStats.actionPoints > 0) {
            currentStats.actionPoints -= 1;
            target.GetComponent<Stats>().TakeDamage(1, origin);
            PathingManager.i.FlipCharacter(currentCharacter,position, origin);
            return true;
        }
        return false;
    }

    //More terrible hacks
    [HideInInspector] public bool blockPickup = false;
    [HideInInspector] public bool pickUpButNotAddToInventory = false;
    public void WaitOrPickUpItem(Vector3Int position, Vector3Int origin, GameObject target, Stats currentStats, GameObject currentCharacter) {

        var mech = GridManager.i.mechMethods.GetMechanism(position);
        if(mech)mech.Call(position,MechStatic.Signal.ClickOnWhileStandingOntopOf);

        //Wait
        if(target != currentCharacter) { return; }
        if (position.Item() == null) {
            currentStats.SpawnHitNumber("Wait", Color.blue, 1);
            EndOfAction();
            return;
        }

        //Pick up
        var inventory = currentCharacter.GetComponent<Inventory>();
        var item = position.Item();
        if (item) {
            item.Call(position, origin, Signal.Pickup,currentCharacter,null);
            if (blockPickup) { EndOfAction();return; }
            //Coins hack, better this concept if needed
            if (pickUpButNotAddToInventory) { GridManager.i.itemMethods.RemoveItem(position); currentStats.actionPoints -= 1; EndOfAction();return; }

            if (inventory.items.Count < globalValues.maxItems) {
                GridManager.i.itemMethods.RemoveItem(position);
                inventory.AddItem(item);
                bagAnimation.PlayAnimation(item);

            }
        }

        currentStats.actionPoints -= 1;
        EndOfAction();
    }

    public bool WalkLeader(Vector3Int position, Vector3Int origin, Stats stats) {
        var walkCost = stats.walkCostTemp;
        if (walkCost > stats.actionPoints) { return false; }
        var walked = PathingManager.i.MoveOneStepLeader(position, origin);
        if (walked) {
            stats.actionPoints -= walkCost;
            return true;
        }
        return false;
    }

    public bool Walk(Vector3Int position, Vector3Int origin, Stats stats) {
        if (!position.IsWalkable()) { return false; }
        var walkCost = stats.walkCostTemp;
        if (walkCost > stats.actionPoints) { return false; }
        var walked = PathingManager.i.MoveOneStep(position, origin);
        if (walked) {
            stats.actionPoints -= walkCost;
            return true;
        }
        return false;
    }

    public bool ChangeActionPoints(Vector3Int position,Vector3Int origin,Inventory inventory,Stats stats,int actionPoints) {
        if(stats.state == State.Idle) { return true; }   //If outside of combat dont use action points 
        if(actionPoints <= stats.actionPoints) { stats.actionPoints -= actionPoints; return true; }
        return false;
    }

    public void EndOfAction() {

        pickUpButNotAddToInventory = false;
        blockPickup = false;
        var partyManager = PartyManager.i;
        var currentCharacter = PartyManager.i.currentCharacter;
        var currentStats = currentCharacter.GetComponent<Stats>();
        if (currentStats.state == State.Idle) {
            foreach (GameObject member in partyManager.party) {
                member.GetComponent<Stats>().ResetActionPoints();
            }
            if (state == State.Combat) {
                partyManager.partyMemberTurnTaken.Clear();
                partyManager.SetCurrentCharacter(PartyManager.i.party[0]);
            }
        }
        InventoryManager.i.UpdateSkillSlotGraphics();
        GridManager.i.TickGame();
    }

    public void EndOfActionFinal() {
        
        var partyManager = PartyManager.i;
        partyManager.Follow();
        if (state == State.Combat) { isRepeatingActionsOutsideCombat = false; }
        if (partyManager.currentCharacter.GetComponent<Stats>().actionPoints <= 0) {
            partyManager.EndTurn();
            isRepeatingActionsOutsideCombat = false;
        }
        if (isRepeatingActionsOutsideCombat) { StartCoroutine(RepeatDelay());  }

        GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());
    }

    public IEnumerator RepeatDelay() {
        yield return new WaitForSeconds(globalValues.repeatSpeed);
        Repeat();
    }


    public void Repeat() {
        if (!isRepeatingActionsOutsideCombat) { EndOfAction(); return; }
        var currentCharacter = PartyManager.i.currentCharacter;
        if (currentCharacter == null) { return; }
        var origin = currentCharacter.Position();
        var currentStats = currentCharacter.GetComponent<Stats>();
        var inventory = currentCharacter.GetComponent<Inventory>();
        var target = clickPosition.GameObjectSpawn();
        currentStats.RefreshCharacter(origin);
        if (UseItem(clickPosition, origin, currentStats, inventory)) { isRepeatingActionsOutsideCombat = false; EndOfAction(); return; };

        if (target) {
            if (!currentCharacter.CompareTag(target.tag)) {
                if (Attack(clickPosition, origin, target, currentCharacter)) { isRepeatingActionsOutsideCombat = false; EndOfAction(); return; };
            }
        }

        //Walk
        PartyManager.i.characterFollowPosition = currentCharacter.Position();
        WalkLeader(clickPosition, origin, currentStats);
  
        var newpos = PartyManager.i.currentCharacter.Position();
        if (newpos == clickPosition || newpos == origin) {
            isRepeatingActionsOutsideCombat = false;
        }
        if(currentStats.state == State.Combat) { isRepeatingActionsOutsideCombat = false; }
        EndOfAction();
    }

    public Vector3Int MousePositionOnGrid() {
        var mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var mouseposInt = new Vector3Int(Mathf.FloorToInt(mousepos.x), Mathf.FloorToInt(mousepos.y), 0);
        return mouseposInt;
    }

    public bool CheckMouseValidity() {
        if (isRepeatingActionsOutsideCombat) { return false; }
        if (GridManager.i.graphics.lerping) { return false; }
        if (disableToggle && disableMouse == false) {
            GameUIManager.i.EnableUI(); disableMouse = false;
        }
        if (disableMouse) {
            GameUIManager.i.DisableUI();
            disableToggle = true;
            return false;
        }
        return true;
    }

    public void UpdateHightlight(Vector3Int mousePosition) { 
        if (mousePosition != lastMousePosition) {



            GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());
            lastMousePosition = mousePosition;
            if (EventSystem.current.IsPointerOverGameObject()) { GameUIManager.i.HideHighlight(); return; }
            if (GridManager.i.FogTile(mousePosition) || !mousePosition.IsWalkable()) {
                GameUIManager.i.HideHighlight();
            }

            if (itemSelected is Skill) {
                var skill = itemSelected as Skill;
                if (skill.type == Skill.Type.AreaUnderMouse) {
                    var currentCharacter = PartyManager.i.currentCharacter;
                    var origin = currentCharacter.Position();
                    var currentStats = currentCharacter.GetComponent<Stats>();
                    currentStats.RefreshCharacter(origin);
                    GameUIManager.i.ShowRange(origin, currentCharacter.GetComponent<Stats>().skillRangeTemp, true);
                    GameUIManager.i.ShowRange(mousePosition, skill.AOE);
                }
            }
        }
    }
}
