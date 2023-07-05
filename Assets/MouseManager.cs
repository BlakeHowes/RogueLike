using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Tilemaps;
using static ItemStatic;
using static PartyManager;

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
    public float repeatSpeed;
    public Tilemap floorTilemap;
    public void Awake() {
        i = this;
    }

    public void SelectItem(ItemAbstract item) {
        itemSelected = item;
        if (!item) { InventoryManager.i.DeselectItems(); }
    }
    public void Start() {
        floorTilemap = GridManager.i.floorTilemap;
    }

    public void Update() {
        var mousePosition = MousePositionOnGrid();
        if (!CheckMouseValidity()) { return; }
        UpdateHightlight(mousePosition);

        if (Input.GetMouseButtonDown(1)) {
            SelectItem(null);
            GameUIManager.i.groundUI.ClearAllTiles();
        }

        if (Input.GetMouseButtonDown(0)) {
            PlayerActionsOrder(mousePosition);
        }
    }

    public void PlayerActionsOrder(Vector3Int mousePosition) {
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
        currentStats.ResetTempStats();
        currentStats.RecalculateStats(); //This calls all their equipment to add values to Stats

        //2 If and item is selected, use that item
        if (UseItem(mousePosition, origin, currentStats, inventory)) { EndOfAction(); return; };

        //3 Try to pick up item under current character while mouse is over them, if no item wait one tick
        if (mousePosition == origin) { WaitOrPickUpItem(mousePosition, origin, gameobjectundermouse, currentStats, currentCharacter); }

        //4 Try to attack a gameobject in range
        if (Attack(mousePosition, origin, gameobjectundermouse, currentCharacter)) { EndOfAction(); return; };

        //5 if a clicked on ally is next to current character during combat, swap with them
        if (SwapPositionWithAllyDuringCombat(mousePosition, origin, gameobjectundermouse, currentStats)) { return; }

        //6 Walk if all else fails
        PartyManager.i.characterFollowPosition = currentCharacter.Position();
        if (state == State.Combat) { isRepeatingActionsOutsideCombat = Walk(mousePosition, origin, currentStats); }
        else { isRepeatingActionsOutsideCombat = WalkLeader(mousePosition, origin, currentStats); }
        var newpos = PartyManager.i.currentCharacter.Position();
        if (newpos == mousePosition || newpos == origin) { isRepeatingActionsOutsideCombat = false; }
        if (newpos != origin) { EndOfAction(); }
    }

    public bool SwapPositionWithAllyDuringCombat(Vector3Int mousePosition, Vector3Int origin,GameObject gameobjectundermouse,Stats currentStats) {
        if (gameobjectundermouse != null) {
            var factionUnderMouse = gameobjectundermouse.GetComponent<Stats>().faction;

            if (state != State.Combat) { return false; }
            if (factionUnderMouse == Faction.Enemy) { return false; }
            if (!GridManager.i.tools.InMeeleeRange(mousePosition, origin)) { return false; }

            if (currentStats.actionPoints >= currentStats.walkCostTemp) {
                if (factionUnderMouse == Faction.Party) {
                    PathingManager.i.SwapPlaces(mousePosition, origin);
                    currentStats.actionPoints -= currentStats.walkCostTemp;
                    EndOfAction();
                    return true;
                }
            }
        }
        return false;
    }

    public bool UseItem(Vector3Int position,Vector3Int origin,Stats currentStats,Inventory inventory) {
        if (itemSelected == null) { return false; }
        itemSelected.Call(position, origin, Signal.ActionPointSum);
        if (currentStats.actionPoints >= currentStats.actionPointsSum) {
            itemSelected.Call(position, origin, Signal.Attack);
            currentStats.actionPoints -= currentStats.actionPointsSum;
        }
        if (inventory.items.Contains(itemSelected)) { 
            Actions.i.ThrowItem(position, origin, itemSelected,inventory);
            currentStats.actionPoints -= 1;
        }
        PathingManager.i.FlipCharacter(currentStats.gameObject,position, origin);
        SelectItem(null);
        return true;
    }

    public bool Attack(Vector3Int position, Vector3Int origin,GameObject target,GameObject currentCharacter) {
        if (target == null) { return false; }
        var currentStats = currentCharacter.GetComponent<Stats>();
        var targetStats = target.GetComponent<Stats>();
        if (targetStats.faction == currentStats.faction) { return false; }
        if (!GridManager.i.goMethods.IsInSight(origin, position)) { return false; }
        var inventory = currentCharacter.GetComponent<Inventory>();
        if(currentStats.state == State.Idle && targetStats.faction == Faction.Interactable) { goto Meelee; }
        if (inventory.mainHand) { inventory.mainHand.Call(position, origin, Signal.WeaponDamageCalculate); }
        if (inventory.offHand) { inventory.offHand.Call(position, origin, Signal.WeaponDamageCalculate); }
        inventory.CallEquipment(position, origin, Signal.Attack);
        if (GridManager.i.itemsInActionStack.Count == 0 && inventory.mainHand)  { return false; }
        PathingManager.i.FlipCharacter(currentCharacter, position, origin);
        currentStats.actionPoints--;
        if (inventory.mainHand) { return true; }
            
        Meelee:
        var range = GridManager.i.tools.MeeleeRange(origin);
        if (range.Contains(position) && currentStats.actionPoints > 0) {
            currentStats.actionPoints -= 1;
            target.GetComponent<Stats>().TakeDamage(currentStats.fistDamageTemp, origin);
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
            item.Call(position, origin, Signal.Pickup);
            if (blockPickup) { EndOfAction();return; }
            //Coins hack, better this concept if needed
            if (pickUpButNotAddToInventory) { GridManager.i.itemMethods.RemoveItem(position); currentStats.actionPoints -= 1; EndOfAction();return; }

            if (inventory.items.Count < inventory.maxItems) {
                GridManager.i.itemMethods.RemoveItem(position);
                inventory.AddItem(item);
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

    public bool IsthereEnoughActionPointsToSpend(Vector3Int position,Vector3Int origin,Inventory inventory,Stats stats) {
        if(stats.state == State.Idle) { return true; }   //If outside of combat dont use action points 

        stats.actionPointsSum = 0;
        inventory.CallEquipment(position, origin, Signal.ActionPointSum);
        var sum = stats.actionPointsSum;
        if(sum <= stats.actionPoints) { stats.actionPoints -= sum; return true; }
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
        yield return new WaitForSeconds(0.1f);
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
        currentStats.RecalculateStats();
        if (UseItem(clickPosition, origin, currentStats, inventory)) { isRepeatingActionsOutsideCombat = false; EndOfAction(); return; };
        if (Attack(clickPosition, origin, target, currentCharacter)) { isRepeatingActionsOutsideCombat = false; EndOfAction(); return; };

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
        }
    }
}
