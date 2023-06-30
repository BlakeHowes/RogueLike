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
    public bool walked = false;
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
        if (walked) { return; }
        if (GridManager.i.graphics.lerping) { return; }
        var position = MousePositionOnGrid();
        if (disableToggle && disableMouse == false) { 
            GameUIManager.i.EnableUI(); disableMouse = false; 
        }
        if (disableMouse) { 
            GameUIManager.i.DisableUI(); 
            disableToggle = true; 
            return; 
        }
        if (position != lastMousePosition) {
            lastMousePosition = position;
            if (EventSystem.current.IsPointerOverGameObject()) { GameUIManager.i.HideHighlight(); return; }
            if (GridManager.i.FogTile(position)|| !position.IsWalkable()) {
                GameUIManager.i.HideHighlight();
            }
            else {
                GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());
            }
        }


        if (Input.GetMouseButtonDown(1)) {
            SelectItem(null);
            GameUIManager.i.groundUI.ClearAllTiles();
        }

        if (Input.GetMouseButtonDown(0)) {
            clickPosition = position;
            if (EventSystem.current.IsPointerOverGameObject()) { return; }
            if (!position.IsWalkable()) { return; }
            var gameobjectundermouse = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);
            var currentCharacter = PartyManager.i.currentCharacter;
            if (currentCharacter == null) { return; }
            var origin = currentCharacter.Position();
            var currentStats =currentCharacter.GetComponent<Stats>();
            var inventory = currentCharacter.GetComponent<Inventory>();
            state = currentStats.state;
            //Update the stats of the character whos turn it is currently based on their equipment
            currentStats.ResetTempStats();
            inventory.CallEquipment(position, origin, Signal.CalculateStats);
            if (UseItem(position, origin,currentStats, inventory)) { EndOfAction(); return; };
            if(position == origin) { WaitOrPickUpItem(position,origin,gameobjectundermouse,currentStats,currentCharacter); }
            if(Attack(position, origin, gameobjectundermouse, currentCharacter)) { EndOfAction(); return; };

            //If its an enemy and its out of range, cancel the action
            if(gameobjectundermouse != null) {
                var faction = gameobjectundermouse.GetComponent<Stats>().faction;
                if(state == State.Combat) {
                    if (faction == Faction.Enemy) { return; }
                    if (GridManager.i.tools.InMeeleeRange(position, origin)) {
                        if(currentStats.actionPoints >= currentStats.walkCostTemp) {
                            if (faction == Faction.Party) { PathingManager.i.SwapPlaces(position, origin);
                                currentStats.actionPoints -= currentStats.walkCostTemp;
                                EndOfAction(); 
                                return; }
                        }
                    }
                }
            }

            //Walk
            PartyManager.i.characterFollowPosition = currentCharacter.Position();
            if(state == State.Combat) {
                walked = Walk(position, origin, currentStats);
            }
            else {
                walked = WalkLeader(position, origin, currentStats);
            }
            

            //Pick Up Item
           
            var newpos = PartyManager.i.currentCharacter.Position();
            if (newpos == position || newpos == origin) {
                walked = false;
            }

            if (newpos != origin)
            EndOfAction();
        }
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
        Debug.Log("ATTACK");
        if (targetStats.faction == currentStats.faction) { return false; }
        if (!GridManager.i.goMethods.IsInSight(origin, position)) { return false; }
        var inventory = currentCharacter.GetComponent<Inventory>();
        if(currentStats.state == State.Idle && targetStats.faction == Faction.Interactable) { goto Meelee; }
        if (CheckActionPoints(position, origin, inventory, currentStats) == false) { return false; };
        if (inventory.mainHand) { inventory.mainHand.Call(position, origin, Signal.WeaponDamageCalculate); }
        if (inventory.offHand) { inventory.offHand.Call(position, origin, Signal.WeaponDamageCalculate); }
        inventory.CallEquipment(position, origin, Signal.Attack);
        if (GridManager.i.itemsInActionStack.Count == 0 && inventory.mainHand)  { return false; }
        PathingManager.i.FlipCharacter(currentCharacter, position, origin);
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

    public void WaitOrPickUpItem(Vector3Int position, Vector3Int origin, GameObject target, Stats currentStats, GameObject currentCharacter) {
        if(target != currentCharacter) { return; }
        if (position.Item() == null) {
            currentStats.SpawnHitNumber("Wait", Color.blue, 1);
            //currentStats.actionPoints -= 1;
            EndOfAction();
            return;
        }
        Actions.i.PickUpItem(position);
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

    public bool CheckActionPoints(Vector3Int position,Vector3Int origin,Inventory inventory,Stats stats) {
        if(stats.state == State.Idle) { return true; }
        stats.actionPointsSum = 0;
        inventory.CallEquipment(position, origin, Signal.ActionPointSum);
        var sum = stats.actionPointsSum;
        if(sum <= stats.actionPoints) { stats.actionPoints -= sum; return true; }
        return false;
    }

    public void EndOfAction() {
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
        Debug.Log("end of action final call");
        var partyManager = PartyManager.i;

        partyManager.Follow();


        var stats = partyManager.currentCharacter.GetComponent<Stats>();
        //state = stats.state;

        if (state == State.Combat) { walked = false; }
        
        if (stats.actionPoints <= 0) {
            partyManager.EndTurn();
            walked = false;
        }
        if (walked) { StartCoroutine(RepeatDelay());  }
    }

    public IEnumerator RepeatDelay() {
        yield return new WaitForSeconds(0.1f);
        Repeat();
    }


    public void Repeat() {
        if (!walked) { EndOfAction(); return; }
        var currentCharacter = PartyManager.i.currentCharacter;
        if (currentCharacter == null) { return; }
        var origin = currentCharacter.Position();
        var currentStats = currentCharacter.GetComponent<Stats>();
        var inventory = currentCharacter.GetComponent<Inventory>();
        var target = clickPosition.GameObjectSpawn();
        currentStats.ResetTempStats();
        if (UseItem(clickPosition, origin, currentStats, inventory)) { walked = false; EndOfAction(); return; };
        if (Attack(clickPosition, origin, target, currentCharacter)) { walked = false; EndOfAction(); return; };

        //Walk
        PartyManager.i.characterFollowPosition = currentCharacter.Position();
        WalkLeader(clickPosition, origin, currentStats);
  
        var newpos = PartyManager.i.currentCharacter.Position();
        if (newpos == clickPosition || newpos == origin) {
            walked = false;
        }
        if(currentStats.state == State.Combat) { walked = false; }
        EndOfAction();
    }

    public Vector3Int MousePositionOnGrid() {
        var mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var mouseposInt = new Vector3Int(Mathf.FloorToInt(mousepos.x), Mathf.FloorToInt(mousepos.y), 0);
        return mouseposInt;
    }
}
