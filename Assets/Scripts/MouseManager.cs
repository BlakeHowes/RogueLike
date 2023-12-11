using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using static ItemStatic;
using static PartyManager;

public class MouseManager : MonoBehaviour
{
    public static MouseManager i;
    public ItemAbstract itemSelected;
    public bool disableMouseAndUI;
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
    public Vector3Int positionBeforeWalk;
    private float inspectTimer;
    private bool inspectTimerOn;
    private Vector3 inspectTapScreenLocation;

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
        if(item == null) {
            InventoryManager.i.DeselectItems();
            return; 
        }
        if(item is not Skill) {
            var currentCharacter = PartyManager.i.currentCharacter;
            var origin = currentCharacter.Position();
            var currentStats = currentCharacter.GetComponent<Stats>();
            //currentStats.RefreshCharacter(origin);
            GameUIManager.i.ShowRange(origin,currentCharacter.GetComponent<Stats>().throwingRangeTemp); 
        }
    }

    public void Update() {


        var mousePosition = MousePositionOnGrid();

        if (inspectTimerOn) { inspectTimer += Time.deltaTime; }
        if(inspectTimer > 0.1f) {
            UpdateHightlight(MousePositionOnGrid());
            if (inspectTimer > 0.5f) {
                if ((inspectTapScreenLocation - Input.mousePosition).magnitude > 40f) { ResetInspectTimer(); return; }
                Inspect(mousePosition); ResetInspectTimer();
            }

        }

        if (!CheckMouseValidity()) { return; }
        if(!globalValues.mobileSettings)UpdateHightlight(mousePosition);


        if (Input.GetMouseButtonDown(1)) {
            if (itemSelected) {
                if (itemSelected is Skill) {
                    Cancel();
                    return;
                }
            }
        }

        if (Input.GetMouseButtonDown(0)) {
            //OnMouseDown();
        }
    }

    public void Cancel() {
        if (itemSelected) {
            if (itemSelected is Skill) {
                var skill = itemSelected as Skill;
                skill.startPositionSet = false;
            }

        }

        SelectItem(null);
        GameUIManager.i.groundUI.ClearAllTiles();
        SetMode(MouseMode.None);
        GameUIManager.i.apUIElement.HighlightAP(0,null);
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }

    public IEnumerator DisableMouseBriefly(float delay) {
        disableMouse = true;
        yield return new WaitForSeconds(0.5f);
        disableMouse = false;
    }

    public void StartDisableMouseBriefly(float delay) {
        StartCoroutine(DisableMouseBriefly(delay));
    }

    public void OnMouseDown() {

        if (Input.GetMouseButtonDown(1)) {
            return;
        }

        if (isRepeatingActionsOutsideCombat) { isRepeatingActionsOutsideCombat = false; return; }
        lastMousePosition = Input.mousePosition;
        var mousePosition = MousePositionOnGrid();
        if (!CheckMouseValidity()) { return; }

        //Range Check Hack
        if (itemSelected is Skill) {
            var skill = itemSelected as Skill;
            if (skill.rangeType != Skill.RangeType.ClickAnywhere) {
                var currentCharacter = PartyManager.i.currentCharacter;
                if (!mousePosition.InRange(currentCharacter.Position(), skill.GetRange(currentCharacter))) {
                    return;
                }
            }
        }

        if (!globalValues.mobileSettings) UpdateHightlight(mousePosition);
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
        var go = mousePosition.GameObjectGo();
        if (go) { 
            StartCoroutine( GridManager.i.graphics.SingeFlashAnimation(go, Color.red));
        }
        StartCoroutine(GameUIManager.i.FlashTile(mousePosition));
        if (targets.Count >= totalTargets) {
            PlayerActionsOrder(mousePosition);
            GameUIManager.i.ClearRange();
            targets.Clear();
            SetMode(MouseMode.None);
            return;
        }
    }

    public void SetMode(MouseMode mouseMode) {
        this.mouseMode = mouseMode;
        if(mouseMode == MouseMode.SelectTargets) { targets.Clear(); }
    }

    public void Inspect(Vector3Int position) {
        if (position.GameObjectGo()) { InspectGo(position.GameObjectGo()); return;  }
        if (position.Item()) { InspectItem(position.Item());return; }
        if (position.Mech()) { InspectMech(position.Mech());return; }
        if (position.Surface()) { InspectSurface(position.Surface());return; }
        var toolTip = GameUIManager.i.itemtooltip;
        toolTip.gameObject.SetActive(false);

    }

    public void StartInspectTimer() {
        inspectTimerOn = true;
        inspectTapScreenLocation = Input.mousePosition;
    }

    public void ResetInspectTimer() {

        inspectTimerOn = false;
        inspectTimer = 0;

    }

    public void InspectGo(GameObject go) {
        var toolTip = GameUIManager.i.itemtooltip;
        toolTip.gameObject.SetActive(true);
        GameUIManager.i.itemtooltip.ToolTipGo(go);
        SetMode(MouseMode.None);
    }

    public void InspectItem(ItemAbstract item) {
        var toolTip = GameUIManager.i.itemtooltip;
        toolTip.gameObject.SetActive(true);
        GameUIManager.i.itemtooltip.ToolTipItem(item);
        SetMode(MouseMode.None);
    }

    public void InspectMech(MechAbstract mech) {
        var toolTip = GameUIManager.i.itemtooltip;
        toolTip.gameObject.SetActive(true);
        GameUIManager.i.itemtooltip.ToolTipMech(mech);
        SetMode(MouseMode.None);
    }

    public void InspectSurface(Surface surface) {
        var toolTip = GameUIManager.i.itemtooltip;
        toolTip.gameObject.SetActive(true);
        GameUIManager.i.itemtooltip.ToolTipSurface(surface);
        SetMode(MouseMode.None);
    }

    public void PlayerActionsOrder(Vector3Int mousePosition) {
        clickPosition = mousePosition;
        if (EventSystem.current.IsPointerOverGameObject()) { return; }
        if (!mousePosition.InBounds()) { return; }
        var gameobjectundermouse = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(mousePosition);
        //Door hack
        if (!gameobjectundermouse) {
            var go = (mousePosition + new Vector3Int(0, -1)).GameObjectGo();
            if (go) {
                if (go.CompareTag("Door")) {
                    mousePosition = mousePosition + new Vector3Int(0, -1);
                    clickPosition = mousePosition;
                    gameobjectundermouse = go;
                }
                if (go.CompareTag("Enemy") && globalValues.mobileSettings) {
                    if (go.GetComponent<Behaviours>().clickOnHack) {
                        mousePosition = mousePosition + new Vector3Int(0, -1);
                        clickPosition = mousePosition;
                        gameobjectundermouse = go;
                    }
                }
            }
        }

        if (!mousePosition.IsWalkable()) { return; }


        var currentCharacter = PartyManager.i.currentCharacter;
        if (currentCharacter == null) { return; }
        var origin = currentCharacter.Position();
        var currentStats = currentCharacter.GetComponent<Stats>();
        var inventory = currentCharacter.GetComponent<Inventory>();
        state = currentStats.state;



        //1 Prepare character
        currentStats.RefreshCharacter(origin); //This calls all their equipment to add values to Stats

        //2 If and item is selected, use that item
        if (UseItem(mousePosition, origin,currentCharacter, currentStats, inventory)) { return; };
        //3 Try to pick up item under current character while mouse is over them, if no item wait one tick
         if(WaitOrPickUpItem(mousePosition, origin, gameobjectundermouse, currentStats, currentCharacter)) {
            WalkLeader(mousePosition, origin, currentStats);
            PartyManager.i.characterFollowPosition = currentCharacter.Position();
            EndOfAction(currentCharacter, currentStats,mousePosition); 
            return; }
        //4 Try to attack a gameobject in range
        if (gameobjectundermouse) {
            if (!gameobjectundermouse.CompareTag("Party") && !gameobjectundermouse.CompareTag("Summon")) {
                if (Attack(mousePosition, origin, gameobjectundermouse, currentCharacter)) { EndOfAction(currentCharacter,currentStats, mousePosition); return; };
            }
        }


        //5 if a clicked on ally is next to current character during combat, swap with them
        if (SwapPositionWithAllyDuringCombat(mousePosition, origin,currentCharacter, gameobjectundermouse, currentStats)) { return; }
        //6 Walk if all else fails
        PartyManager.i.characterFollowPosition = currentCharacter.Position();
        if (currentCharacter.CompareTag("Party")) { isRepeatingActionsOutsideCombat = WalkLeader(mousePosition, origin, currentStats); }
        else { isRepeatingActionsOutsideCombat = Walk(mousePosition, origin, currentStats); }
        var newpos = PartyManager.i.currentCharacter.Position();
        if (newpos == mousePosition || newpos == origin) { isRepeatingActionsOutsideCombat = false; }
        if (newpos != origin) { EndOfAction(currentCharacter, currentStats, mousePosition); }
    }

    public bool SwapPositionWithAllyDuringCombat(Vector3Int mousePosition, Vector3Int origin, GameObject currentCharacter, GameObject gameobjectundermouse,Stats currentStats) {
        if (gameobjectundermouse != null) {
            if(gameobjectundermouse == currentCharacter) { return false; }
            if (state != State.Combat) { return false; }
            if (gameobjectundermouse.CompareTag("Enemy")) { return false; }
            if (!GridManager.i.tools.InMeeleeRange(mousePosition, origin)) { return false; }

            if (currentStats.DoIHaveActionPointsToWalk()) {
                if (gameobjectundermouse.CompareTag("Party") || gameobjectundermouse.CompareTag("Summon")) {
                    PathingManager.i.SwapPlaces(mousePosition, origin);
                    currentStats.UseWalkActionPoints();
                    EndOfAction(currentCharacter, currentStats, mousePosition);
                    return true;
                }
            }
        }
        return false;
    }

    public bool UseItem(Vector3Int position, Vector3Int origin,GameObject currentCharacter, Stats currentStats, Inventory inventory) {
        if (itemSelected == null) { return false; }
        GameUIManager.i.apUIElement.HighlightAP(0, null);
        if (inventory.items.Contains(itemSelected) || InventoryManager.i.partyInventory.Contains(itemSelected)) {
            ThrowItem(position, origin, itemSelected, inventory);
            currentStats.UseActionPoints(-1);
            SelectItem(null);
            EndOfAction(currentCharacter, currentStats, position);
            return true;
        }
        var skill = itemSelected as Skill;
        if (currentStats.DoIHavenEnoughNormalActionPoints(skill.GetAPCost()))
        itemSelected.Call(position, origin, inventory.gameObject, CallType.OnActivate);
        //GameUIManager.i.apUIElement.HighlightAP(-1,null);
        currentStats.gameObject.GetComponent<SpringToTarget3D>().Nudge(PartyManager.i.currentCharacter.transform.position + new Vector3(0, globalValues.onAttackNudgeAmount/3f), 50, 800);
        PathingManager.i.FlipCharacter(currentStats.gameObject,position, origin);
        SelectItem(null);

        EndOfAction(currentCharacter, currentStats, position);
        return true;
    }

    public bool IsSellingAtShop(Vector3Int position) {
        var mech = position.Mech();
        if (mech) {
            if (mech is Shop) {
                return true;
            }
        }
        return false;
    }

    public void ThrowItem(Vector3Int position, Vector3Int origin, ItemAbstract item, Inventory inventory) {
        var items = inventory.items;
        if (globalValues.usePartyInventory) { items = InventoryManager.i.partyInventory; }
        if (!position.InRange(origin, inventory.GetComponent<Stats>().throwingRangeTemp)) { return; }
        var landPos = GridManager.i.itemMethods.FloodFillDropItem(position, false, item);
        EffectManager.i.SpinningThrowProjectile(position, origin, item.tile.sprite);
        var dropItem = globalValues.dropItem;
        if (IsSellingAtShop(position)) {
            if (items.Contains(item)) {
                items.Remove(item);
            }
            dropItem.itemValue = item;
            dropItem.action.Condition(landPos, origin, inventory.gameObject, null, null, dropItem);
            return;
        }

        if (item is Weapon) {
            var weapon = item as Weapon;
            if (weapon.weaponType == WeaponType.melee) {
                weapon.CallIgnoringRange(position, origin, inventory.gameObject, CallType.OnActivate);
            }
        }
        else {
            item.Call(position, origin, inventory.gameObject, CallType.OnActivate);
        }
        if (items.Contains(item)) {
            items.Remove(item);
        }

        if (item is GeneralItem) {
            var generalItem = item as GeneralItem;
            if (generalItem.destroyOnUse) {
                return;
            }
        }
        dropItem.itemValue = item;
        dropItem.action.Condition(landPos, origin, inventory.gameObject, null, null, dropItem);
    }

    public bool Attack(Vector3Int position, Vector3Int origin,GameObject target,GameObject currentCharacter) {
        if (target == null) { return false; }
        var currentStats = currentCharacter.GetComponent<Stats>();
        if (!currentStats.DoIHavenEnoughNormalActionPoints(1)) { currentStats.ClearAP(); return true; }
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
            currentStats.UseActionPoints(1);

           
            if (inventory.mainHand || inventory.offHand) { return true; }
        }
        

            
        Meelee:
        var range = GridManager.i.tools.MeeleeRange(origin);
        if (range.Contains(position) && currentStats.DoIHavenEnoughNormalActionPoints(1)) {
            currentStats.UseActionPoints(1);
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
    public bool WaitOrPickUpItem(Vector3Int position, Vector3Int origin, GameObject target, Stats currentStats, GameObject currentCharacter) {
        //Money
        var item = position.Item();
        var inventory = currentCharacter.GetComponent<Inventory>();



        //Wait
        if (position.Item() == null && position == origin) {
            currentStats.SpawnHitNumber("Wait", Color.blue, 1);
            currentStats.Wait();
            return true;
        }
        //Pick up

        if (!position.InMeleeRange(origin)) { return false; }
        if (item) {
            var mech = GridManager.i.mechMethods.GetMechanism(position);
            if (mech) mech.Call(position, MechStatic.Signal.OnPickupItem);
            item.Call(position, origin,currentCharacter, CallType.OnPickupItem);
            if (blockPickup) { return true; }
            //Coins hack, better this concept if needed
            bagAnimation.PlayAnimation(item);
            if (pickUpButNotAddToInventory) { GridManager.i.itemMethods.RemoveItem(position); return true; }
            if (inventory.items.Count < globalValues.maxItems) {
                GridManager.i.itemMethods.RemoveItem(position);
                inventory.AddItem(item);
                bagAnimation.PlayAnimation(item);
                return true;
            }
        }
        return false;
    }

    public bool WalkLeader(Vector3Int position, Vector3Int origin, Stats stats) {
        if (!stats.DoIHaveActionPointsToWalk()) { return false; }


        var walked = PathingManager.i.MoveOneStepLeader(position, origin,stats.gameObject);
        if (walked) {
            positionBeforeWalk = origin;
            stats.UseWalkActionPoints();
            return true;
        }
        return false;
    }

    public bool Walk(Vector3Int position, Vector3Int origin, Stats stats) {
        if (!position.IsWalkable()) { return false; }
        if (!stats.DoIHaveActionPointsToWalk()) { return false; }
        var walked = PathingManager.i.MoveOneStep(position, origin);
        if (walked) {
            positionBeforeWalk = origin;
            stats.UseWalkActionPoints();
            return true;
        }
        return false;
    }

    public void EndOfAction(GameObject currentCharacter,Stats currentStats,Vector3Int position) {
        pickUpButNotAddToInventory = false;
        blockPickup = false;

        var partyManager = PartyManager.i;
        //partyManager.RemoveNullCharacters(partyManager.party);
        if (currentStats.state == State.Idle) {
            foreach (GameObject member in partyManager.party) {
                if(member)member.GetComponent<Stats>().ResetActionPoints();
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
        if (partyManager.currentCharacter.GetComponent<Stats>().AmITotallyOutOfActionPoints()) {
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
        if (!isRepeatingActionsOutsideCombat) { EndOfAction(currentCharacter, currentStats, clickPosition); return; }
      
        var inventory = currentCharacter.GetComponent<Inventory>();
        var target = clickPosition.GameObjectSpawn();
        currentStats.RefreshCharacter(origin);
        if (UseItem(clickPosition, origin,currentCharacter, currentStats, inventory)) { isRepeatingActionsOutsideCombat = false; EndOfAction(currentCharacter,currentStats, clickPosition); return; };
        if(WaitOrPickUpItem(clickPosition, origin, target, currentStats, currentCharacter)) {
            WalkLeader(clickPosition, origin, currentStats);
            PartyManager.i.characterFollowPosition = currentCharacter.Position();
            isRepeatingActionsOutsideCombat = false; EndOfAction(currentCharacter, currentStats, clickPosition); 
            return; 
        }

        if (target) {
            if (!currentCharacter.CompareTag(target.tag)) {
                if (Attack(clickPosition, origin, target, currentCharacter)) { isRepeatingActionsOutsideCombat = false; EndOfAction(currentCharacter, currentStats, clickPosition); return; };
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
        EndOfAction(currentCharacter,currentStats, clickPosition);
    }

    public Vector3Int MousePositionOnGrid() {
        var mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var mouseposInt = new Vector3Int(Mathf.FloorToInt(mousepos.x), Mathf.FloorToInt(mousepos.y), 0);
        return mouseposInt;
    }

    public bool CheckMouseValidity() {
        if (isRepeatingActionsOutsideCombat) { return false; }
        if (GridManager.i.graphics.lerping) { return false; }
        if (disableToggle && disableMouseAndUI == false) {
            GameUIManager.i.EnableUI(); disableMouseAndUI = false;
        }
        if (disableMouseAndUI) {
            GameUIManager.i.DisableUI();
            disableToggle = true;
            return false;
        }

        if (disableMouse) {
            return false;
        }
        return true;
    }

    public void UpdateHightlight(Vector3Int mousePosition) {
        if (mousePosition == lastMouseCoord && !globalValues.mobileSettings) { return; }
        if(Input.mousePosition == lastMousePosition && !globalValues.mobileSettings) { return; }
        lastMouseCoord = mousePosition;
        if (!mousePosition.InBounds()) { GameUIManager.i.HideHighlight(); return; }
        if (EventSystem.current.IsPointerOverGameObject()) { GameUIManager.i.HideHighlight(); return; }
        if (GridManager.i.FogTile(mousePosition) || !mousePosition.IsWalkable()) {
            GameUIManager.i.HideHighlight(); return;
        }

        GameUIManager.i.HighlightMouseTile(MousePositionOnGrid(),globalValues.mobileSettings);
        if (itemSelected is not Skill) { return; }
        var skill = itemSelected as Skill;

        if (skill.rangeType == Skill.RangeType.CircleUnderMouse) {
            var currentCharacter = PartyManager.i.currentCharacter;
            var origin = currentCharacter.Position();
            var currentStats = currentCharacter.GetComponent<Stats>();
            currentStats.RefreshCharacter(origin);
            var range = skill.GetRange(currentCharacter);
            GameUIManager.i.ShowRange(origin, range, true);
            if (mousePosition.InRange(origin, range)) {
                GameUIManager.i.ShowRange(mousePosition, skill.AOE);
            }
            else {
                GameUIManager.i.groundUI.ClearAllTiles();
            }

        }


    }
}
