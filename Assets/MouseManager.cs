
using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
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
    public bool itemCanBeUsed = false;
    public bool walked = false;
    public Vector3Int clickPosition;
    public float repeatSpeed;
    public void Awake() {
        i = this;
    }
    public void Update() {
        var position = MousePositionOnGrid();
        if (!position.inbounds()) { GameUIManager.i.HideHighlight(); return; }
        if (disableToggle && disableMouse == false) { GameUIManager.i.EnableUI(); disableMouse = false; }
        if (disableMouse) { GameUIManager.i.DisableUI(); disableToggle = true; return; }

        if (position != lastMousePosition) {
            lastMousePosition = position;
            if (EventSystem.current.IsPointerOverGameObject()) { return; }
            if (GridManager.i.FogTile(position)) {
                GameUIManager.i.HideHighlight();
            }
            else {
                GameUIManager.i.HighlightMouseTile(MousePositionOnGrid());
            }
        }

     


        

        if (Input.GetMouseButtonDown(0)) {
            clickPosition = position;
            if (walked) { return; }
            if (EventSystem.current.IsPointerOverGameObject()) { return; }
            var gameobjectundermouse = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);
            var currentCharacter = PartyManager.i.currentCharacter;
            if (currentCharacter == null) { return; }
            var origin = currentCharacter.position();
            var currentStats =currentCharacter.GetComponent<Stats>();
            var inventory = currentCharacter.GetComponent<Inventory>();
            var state = PartyManager.i.state;
            //Update the stats of the character whos turn it is currently based on their equipment
            currentStats.ResetTempStats();
            currentCharacter.GetComponent<Inventory>().CallEquipment(origin, origin, ItemAbstract.Signal.CalculateStats);
            if (UseItem(position, origin,currentStats, inventory)) { EndOfAction(); return; };
            if(position == origin) { Wait(position,origin,gameobjectundermouse,currentStats,currentCharacter); }
            if(Attack(position, origin, gameobjectundermouse, currentCharacter)) { EndOfAction(); return; };

            //If its an enemy and its out of range, cancel the action
            if(gameobjectundermouse != null) {
                var faction = gameobjectundermouse.GetComponent<Stats>().faction;
                if(state == State.Combat) {
                    if (faction == Faction.Enemy) { return; }
                    if (GridManager.i.tools.InMeeleeRange(position, origin)) {
                        if (faction == Faction.Party) { PathingManager.i.SwapPlaces(position, origin); EndOfAction(); return; }
                    }
                }
            }

            //Walk
            PartyManager.i.characterFollowPosition = currentCharacter.position();
            if(state == State.Combat) {
                walked = Walk(position, origin, currentStats);
            }
            else {
                walked = WalkLeader(position, origin, currentStats);
            }


            //Pick Up Item
            var newpos = PartyManager.i.currentCharacter.position();
            var item = newpos.item();
            if (item != null && position == newpos) {
                Actions.i.PickUpItem(newpos);
            }
            EndOfAction();
        }
    }

    public bool UseItem(Vector3Int position,Vector3Int origin,Stats currentStats,Inventory inventory) {
        itemCanBeUsed = false;
        if (itemSelected == null) { return false; }
        itemSelected.CheckConditions(position, origin);
        itemSelected.Call(position, origin, ItemAbstract.Signal.ActionPointSum);
        if (itemCanBeUsed && currentStats.actionPoints >= currentStats.actionPointsSum) {
            itemSelected.Call(position, origin, ItemAbstract.Signal.Attack);
            currentStats.actionPoints -= currentStats.actionPointsSum;
        }
        if (!itemCanBeUsed && inventory.items.Contains(itemSelected)) { Actions.i.ThrowItem(position, origin, itemSelected); }

        itemSelected = null;
        return true;
    }

    public bool Attack(Vector3Int position, Vector3Int origin,GameObject target,GameObject currentCharacter) {
        itemCanBeUsed = false;
        if (target == null) { return false; }
        var currentStats = currentCharacter.GetComponent<Stats>();
        var targetStats = target.GetComponent<Stats>();
        
        if (targetStats.faction == currentStats.faction) { return false; }
        if (!GridManager.i.goMethods.IsInSight(origin, position)) { return false; }
        var inventory = currentCharacter.GetComponent<Inventory>();

        inventory.CheckEquipment(position, origin);
        if (itemCanBeUsed == true) {
            if (CheckActionPoints(origin, inventory, currentStats) == false) { return false; };
            if (inventory.mainHand) { inventory.mainHand.Call(position, origin, ItemAbstract.Signal.WeaponDamageCalculate); }
            inventory.CallEquipment(position, origin, ItemAbstract.Signal.Attack);
            if(inventory.mainHand)
            return true;
        }

        var range = GridManager.i.tools.MeeleeRange(origin);
        if (range.Contains(position) && currentStats.actionPoints > 0) {
            currentStats.actionPoints -= 1;
            target.GetComponent<Stats>().TakeDamage(currentStats.fistDamageTemp, origin);
            return true;
        }
        return false;
    }

    public void Wait(Vector3Int position, Vector3Int origin, GameObject target, Stats currentStats, GameObject currentCharacter) {
        if (target == currentCharacter && position.item() == null) {
            currentStats.SpawnHitNumber("Wait", Color.blue, 1);
            currentStats.actionPoints -= 1;
            EndOfAction();
            return;
        }
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
        var walkCost = stats.walkCostTemp;
        if (walkCost > stats.actionPoints) { return false; }
        var walked = PathingManager.i.MoveOneStep(position, origin);
        if (walked) {
            stats.actionPoints -= walkCost;
            return true;
        }
        return false;
    }

    public bool CheckActionPoints(Vector3Int origin,Inventory inventory,Stats stats) {
        if(PartyManager.i.state == State.Exploring) { return true; }
        stats.actionPointsSum = 0;
        inventory.CallEquipment(origin, origin,ItemAbstract.Signal.ActionPointSum);
        var sum = stats.actionPointsSum;
        if(sum <= stats.actionPoints) { stats.actionPoints -= sum; return true; }
        return false;
    }

    public void EndOfAction() {
        GridManager.i.ClearSemiFog();
        var partyManager = PartyManager.i;
        partyManager.EnemyPartyState();

        if (partyManager.state == State.Exploring) {
            foreach (GameObject member in partyManager.party) {
                member.GetComponent<Stats>().ResetActionPoints();
            }
            if (state == State.Combat) {
                partyManager.partyMemberTurnTaken.Clear();
                partyManager.SetCurrentCharacter(PartyManager.i.party[0]);
            }
            partyManager.Follow();
        }
        state = partyManager.state;
        if(partyManager.currentCharacter.GetComponent<Stats>().actionPoints <= 0) {
            partyManager.EndTurn();
            walked = false;
        }
        GridManager.i.UpdateGame();
        GameUIManager.i.uiTilemap.ClearAllTiles();
        if (Input.GetMouseButtonDown(0)) {
            StartCoroutine(MovementTest(clickPosition));
        }
    }

    public IEnumerator MovementTest(Vector3Int position) {
        var repeatSpeedPathing = PathingManager.i.repeatSpeed;
        while (walked) {
            yield return new WaitForSeconds(repeatSpeedPathing);
            Repeat(position);
        }
        yield return null;
    }

    public void Repeat(Vector3Int position) {
        var currentCharacter = PartyManager.i.currentCharacter;
        if (currentCharacter == null) { return; }
        var origin = currentCharacter.position();
        var currentStats = currentCharacter.GetComponent<Stats>();
        var inventory = currentCharacter.GetComponent<Inventory>();
        var target = position.gameobjectSpawn();
        //Update the stats of the character whos turn it is currently based on their equipment
        currentStats.ResetTempStats();
        //currentStats.GetComponent<Inventory>().CallEquipment(position, origin, ItemAbstract.Signal.CalculateStats);

        if (UseItem(position, origin, currentStats, inventory)) { walked = false; EndOfAction(); return; };
        if (Attack(position, origin, target, currentCharacter)) { walked = false; EndOfAction(); return; };

        //Walk
        PartyManager.i.characterFollowPosition = currentCharacter.position();
        WalkLeader(position, origin, currentStats);
        
        //Pick Up Item
        var newpos = PartyManager.i.currentCharacter.position();

        var item = newpos.item();
        if (item != null && position == newpos) {
            Actions.i.PickUpItem(newpos);
        }
        if (newpos == position || newpos == origin) {
            walked = false;
        }
        EndOfAction();
    }

    public Vector3Int MousePositionOnGrid() {
        var mousepos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        var mouseposInt = new Vector3Int(Mathf.FloorToInt(mousepos.x), Mathf.FloorToInt(mousepos.y), 0);
        return mouseposInt;
    }
}
