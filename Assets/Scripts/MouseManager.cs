using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using Unity.Burst;
using UnityEngine;
using UnityEngine.EventSystems;
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
    public Vector3Int lastMouseCoord;
    private Vector3 lastMousePosition;
    public bool isRepeatingActionsOutsideCombat = false;
    public Vector3Int clickPosition;
    private GlobalValues globalValues;
    public BagAnimation bagAnimation;
    public MouseMode mouseMode = MouseMode.None;

    public List<Vector3Int> targets = new List<Vector3Int>();

    public void Awake() {
        globalValues = Manager.GetGlobalValues();
        i = this;
    }

    public enum MouseMode {
        None,
        Inspect,
        SelectTargets,
    }

    public void SelectItem(ItemAbstract item) {
        itemSelected = item;
        if(item is not Skill) {
            var currentCharacter = PartyManager.i.currentCharacter;
            var origin = currentCharacter.Position();
            var currentStats = currentCharacter.GetComponent<Stats>();
            //currentStats.RefreshCharacter(origin);
            GameUIManager.i.ShowRange(origin,currentCharacter.GetComponent<Stats>().throwingRangeTemp); 
        }
        if (!item) { InventoryManager.i.DeselectItems(); }
    }

    public void Update() {
        var mousePosition = MousePositionOnGrid();
        if (!CheckMouseValidity()) { return; }
        //UpdateHightlight(mousePosition);


        if (Input.GetMouseButtonDown(1)) {
            if (itemSelected) {
                if (itemSelected is Skill) {
                    var skill = itemSelected as Skill;
                    skill.startPositionSet = false;
                }
            }
            SelectItem(null);
            GameUIManager.i.groundUI.ClearAllTiles();
            SetMode(MouseMode.None);
        }

        if (Input.GetMouseButtonDown(0)) {
            //OnMouseDown();
        }
    }

    public void OnMouseDown() {
        if (isRepeatingActionsOutsideCombat) { isRepeatingActionsOutsideCombat = false; return; }
        lastMousePosition = Input.mousePosition;
        var mousePosition = MousePositionOnGrid();
        if (!CheckMouseValidity()) { return; }
        UpdateHightlight(mousePosition);
        var toolTip = GameUIManager.i.tooltipGameObject;
        if (toolTip.activeSelf) { toolTip.SetActive(false); return; }
        switch (mouseMode) {
            case MouseMode.None: PlayerActionsOrder(mousePosition); break;
            case MouseMode.Inspect: Inspect(mousePosition); break;
            case MouseMode.SelectTargets: AddTarget(mousePosition); break;
        }
    }

    public void AddTarget(Vector3Int mousePosition) {
        if (!itemSelected) { SetMode(MouseMode.None);return;}
        var skill = itemSelected as Skill;
        var totalTargets = skill.totalTargets;
        targets.Add(mousePosition);
        if (targets.Count >= totalTargets) {
            PlayerActionsOrder(mousePosition);
            targets.Clear();
            SetMode(MouseMode.None);
            return;
        }
    }

    public void SetMode(MouseMode mouseMode) {
        this.mouseMode = mouseMode;
        if(mouseMode == MouseMode.SelectTargets) { targets.Clear(); }
    }

    public void Inspect(Vector3Int mousePosition) {
        var gameobjectundermouse = mousePosition.GameObjectGo();
        if (!gameobjectundermouse) { return; }
        var toolTip = GameUIManager.i.itemtooltip;
        toolTip.gameObject.SetActive(true);
        //toolTip.transform.position = mousePosition;
        GameUIManager.i.itemtooltip.UpdateToolTip(gameobjectundermouse);
        SetMode(MouseMode.None);
    }

    public void PlayerActionsOrder(Vector3Int mousePosition) {
        //START STOPWATCH
        System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
        stopwatch.Start();
        //START STOPWATCH
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

        Debug.Log("StopWatch 1:" + stopwatch.Elapsed);

        //1 Prepare character
        currentStats.RefreshCharacter(origin); //This calls all their equipment to add values to Stats
        Debug.Log("StopWatch 2:" + stopwatch.Elapsed);

        //2 If and item is selected, use that item
        if (UseItem(mousePosition, origin,currentCharacter, currentStats, inventory)) { return; };
        Debug.Log("StopWatch 2.1:" + stopwatch.Elapsed);
        //3 Try to pick up item under current character while mouse is over them, if no item wait one tick
        if (mousePosition == origin) { WaitOrPickUpItem(mousePosition, origin, gameobjectundermouse, currentStats, currentCharacter); }
        Debug.Log("StopWatch 2.2:" + stopwatch.Elapsed);
        //4 Try to attack a gameobject in range
        if (gameobjectundermouse) {
            if (!currentCharacter.CompareTag(gameobjectundermouse.tag)) {
                if (Attack(mousePosition, origin, gameobjectundermouse, currentCharacter)) { EndOfAction(currentCharacter,currentStats); return; };
            }
        }

        Debug.Log("StopWatch 3:" + stopwatch.Elapsed);

        //5 if a clicked on ally is next to current character during combat, swap with them
        if (SwapPositionWithAllyDuringCombat(mousePosition, origin,currentCharacter, gameobjectundermouse, currentStats)) { return; }
        Debug.Log("StopWatch 3.1:" + stopwatch.Elapsed);
        //6 Walk if all else fails
        PartyManager.i.characterFollowPosition = currentCharacter.Position();
        Debug.Log("StopWatch 3.2:" + stopwatch.Elapsed);
        if (currentCharacter.CompareTag("Party")) { isRepeatingActionsOutsideCombat = WalkLeader(mousePosition, origin, currentStats); }
        else { isRepeatingActionsOutsideCombat = Walk(mousePosition, origin, currentStats); }
        Debug.Log("StopWatch 4:" + stopwatch.Elapsed);
        var newpos = PartyManager.i.currentCharacter.Position();
        Debug.Log("StopWatch 4.1:" + stopwatch.Elapsed);
        if (newpos == mousePosition || newpos == origin) { isRepeatingActionsOutsideCombat = false; }
        Debug.Log("StopWatch 4,2:" + stopwatch.Elapsed);
        if (newpos != origin) { EndOfAction(currentCharacter, currentStats); }

        //STOP STOPWATCH
        stopwatch.Stop();
        Debug.Log("StopWatch 5:" + stopwatch.Elapsed);
        //STOP STOPWATCH
    }

    public bool SwapPositionWithAllyDuringCombat(Vector3Int mousePosition, Vector3Int origin, GameObject currentCharacter, GameObject gameobjectundermouse,Stats currentStats) {
        if (gameobjectundermouse != null) {

            if (state != State.Combat) { return false; }
            if (gameobjectundermouse.CompareTag("Enemy")) { return false; }
            if (!GridManager.i.tools.InMeeleeRange(mousePosition, origin)) { return false; }

            if (currentStats.actionPoints >= currentStats.walkCostTemp) {
                if (gameobjectundermouse.CompareTag("Party")) {
                    PathingManager.i.SwapPlaces(mousePosition, origin);
                    currentStats.actionPoints -= currentStats.walkCostTemp;
                    EndOfAction(currentCharacter, currentStats);
                    return true;
                }
            }
        }
        return false;
    }

    public bool UseItem(Vector3Int position, Vector3Int origin,GameObject currentCharacter, Stats currentStats, Inventory inventory) {
        if (itemSelected == null) { return false; }

        if (inventory.items.Contains(itemSelected)) {
            Actions.i.ThrowItem(position, origin, itemSelected, inventory);
            ChangeActionPoints(position, origin, inventory, currentStats, 1);
            SelectItem(null);
            EndOfAction(currentCharacter, currentStats);
            return true;
        }
        var skill = itemSelected as Skill;
        if (ChangeActionPoints(position, origin, inventory, currentStats, skill.actionPointCost))
        itemSelected.Call(position, origin, inventory.gameObject, CallType.OnActivate);
        GameUIManager.i.apUIElement.HighlightAP(-1);
        currentStats.gameObject.GetComponent<SpringToTarget3D>().Nudge(PartyManager.i.currentCharacter.transform.position + new Vector3(0, globalValues.onAttackNudgeAmount/3f), 50, 800);
        PathingManager.i.FlipCharacter(currentStats.gameObject,position, origin);
        SelectItem(null);

        EndOfAction(currentCharacter, currentStats);
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
        inventory.CallEquipment(position, origin, CallType.OnActivate);
        Manager.OnAttackCall(position,origin);
        if (GridManager.i.itemsInActionStack.Count == 0)  {
            if (!inventory.mainHand && !inventory.offHand) { goto Meelee; }
        }
        else {
            PathingManager.i.FlipCharacter(currentCharacter, position, origin);
            currentStats.actionPoints--;

           
            if (inventory.mainHand || inventory.offHand) { return true; }
        }
        

            
        Meelee:
        var range = GridManager.i.tools.MeeleeRange(origin);
        if (range.Contains(position) && currentStats.actionPoints > 0) {
            currentStats.actionPoints -= 1;
            target.GetComponent<Stats>().TakeDamage(1, origin);
            PathingManager.i.FlipCharacter(currentCharacter,position, origin);
            currentCharacter.GetComponent<SpringToTarget3D>().Nudge(new Vector3(0, globalValues.onAttackNudgeAmount), 24, 1000);
            return true;
        }
        return false;
    }

    //More terrible hacks
    [HideInInspector] public bool blockPickup = false;
    [HideInInspector] public bool pickUpButNotAddToInventory = false;
    public void WaitOrPickUpItem(Vector3Int position, Vector3Int origin, GameObject target, Stats currentStats, GameObject currentCharacter) {
        //START STOPWATCH
        System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
        stopwatch.Start();
        //START STOPWATCH
        if(position != origin) { return; }
        var mech = GridManager.i.mechMethods.GetMechanism(position);
        if(mech)mech.Call(position,MechStatic.Signal.ClickOnWhileStandingOntopOf);
        Debug.Log("WaitOrPickup 1 StopWatch:" + stopwatch.Elapsed);
        //Wait
        if (target != currentCharacter) { return; }
        if (position.Item() == null) {
            currentStats.SpawnHitNumber("Wait", Color.blue, 1);
            EndOfAction(currentCharacter, currentStats);
            return;
        }
        Debug.Log("WaitOrPickup 2 StopWatch:" + stopwatch.Elapsed);
        //Pick up
        var inventory = currentCharacter.GetComponent<Inventory>();
        var item = position.Item();
        if (item) {
            Debug.Log("WaitOrPickup 3 StopWatch:" + stopwatch.Elapsed);
            item.Call(position, origin,currentCharacter, CallType.OnPickupItem);
            if (blockPickup) { EndOfAction(currentCharacter, currentStats);return; }
            //Coins hack, better this concept if needed
            if (pickUpButNotAddToInventory) { GridManager.i.itemMethods.RemoveItem(position); currentStats.actionPoints -= 1; EndOfAction(currentCharacter, currentStats);return; }
            Debug.Log("WaitOrPickup 4 StopWatch:" + stopwatch.Elapsed);
            if (inventory.items.Count < globalValues.maxItems) {
                GridManager.i.itemMethods.RemoveItem(position);
                inventory.AddItem(item);
                bagAnimation.PlayAnimation(item);

            }
            Debug.Log("WaitOrPickup 5 StopWatch:" + stopwatch.Elapsed);
        }

        currentStats.actionPoints -= 1;
        //STOP STOPWATCH
        stopwatch.Stop();
        Debug.Log("WaitOrPickup 6 StopWatch:" + stopwatch.Elapsed);
        //STOP STOPWATCH
        EndOfAction(currentCharacter, currentStats);
    }

    public bool WalkLeader(Vector3Int position, Vector3Int origin, Stats stats) {
        var walkCost = stats.walkCostTemp;
        if (walkCost > stats.actionPoints) { return false; }

        var walked = PathingManager.i.MoveOneStepLeader(position, origin,stats.gameObject);
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

    public void EndOfAction(GameObject currentCharacter,Stats currentStats) {

        pickUpButNotAddToInventory = false;
        blockPickup = false;
        var partyManager = PartyManager.i;
        //partyManager.RemoveNullCharacters(partyManager.party);
        if (currentStats.state == State.Idle) {
            foreach (GameObject member in partyManager.party) {
                member.GetComponent<Stats>().ResetActionPoints();
            }
            if (state == State.Combat) {
                partyManager.partyMemberTurnTaken.Clear();
                partyManager.SetCurrentCharacter(PartyManager.i.party[0]);
            }
        }
        partyManager.Follow();
        InventoryManager.i.UpdateSkillSlotGraphics();
        GridManager.i.TickGame();
    }

    public void EndOfActionFinal() {
        var partyManager = PartyManager.i;
        if (!partyManager.currentCharacter.CompareTag("Party")) { return; }
        if (state == State.Combat) { isRepeatingActionsOutsideCombat = false; }
        if (partyManager.currentCharacter.GetComponent<Stats>().actionPoints <= 0) {
            partyManager.EndTurn();
            isRepeatingActionsOutsideCombat = false;
        }
        if (isRepeatingActionsOutsideCombat) { StartCoroutine(RepeatDelay());  }

        //GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());
    }

    public IEnumerator RepeatDelay() {
        yield return new WaitForSeconds(globalValues.repeatSpeed);
        Repeat();
    }


    public void Repeat() {
        var currentCharacter = PartyManager.i.currentCharacter;
        if (currentCharacter == null) { return; }
        var origin = currentCharacter.Position();
        var currentStats = currentCharacter.GetComponent<Stats>();
        if (!isRepeatingActionsOutsideCombat) { EndOfAction(currentCharacter, currentStats); return; }
      
        var inventory = currentCharacter.GetComponent<Inventory>();
        var target = clickPosition.GameObjectSpawn();
        currentStats.RefreshCharacter(origin);
        if (UseItem(clickPosition, origin,currentCharacter, currentStats, inventory)) { isRepeatingActionsOutsideCombat = false; EndOfAction(currentCharacter,currentStats); return; };

        if (target) {
            if (!currentCharacter.CompareTag(target.tag)) {
                if (Attack(clickPosition, origin, target, currentCharacter)) { isRepeatingActionsOutsideCombat = false; EndOfAction(currentCharacter, currentStats); return; };
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
        EndOfAction(currentCharacter,currentStats);
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
        if (mousePosition == lastMouseCoord) { return; }
        if(Input.mousePosition == lastMousePosition) { return; }
        lastMouseCoord = mousePosition;
        if (EventSystem.current.IsPointerOverGameObject()) { GameUIManager.i.HideHighlight(); return; }
        if (GridManager.i.FogTile(mousePosition) || !mousePosition.IsWalkable()) {
            GameUIManager.i.HideHighlight(); return;
        }

        //GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());

        if (itemSelected is not Skill) { return; }
        var skill = itemSelected as Skill;

        if (skill.rangeType == Skill.RangeType.CircleUnderMouse) {
            var currentCharacter = PartyManager.i.currentCharacter;
            var origin = currentCharacter.Position();
            var currentStats = currentCharacter.GetComponent<Stats>();
            currentStats.RefreshCharacter(origin);
            GameUIManager.i.ShowRange(origin, skill.range, true);
            if (mousePosition.InRange(origin, skill.range)) {
                GameUIManager.i.ShowRange(mousePosition, skill.AOE);
            }
            else {
                GameUIManager.i.groundUI.ClearAllTiles();
            }

        }


    }
}
