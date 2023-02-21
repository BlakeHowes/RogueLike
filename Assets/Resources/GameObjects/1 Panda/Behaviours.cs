using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Panda;
using UnityEngine.Tilemaps;

public class Behaviours : MonoBehaviour
{
    public Vector3Int origin;
    public Vector3Int targetPosition;
    public GameObject target;
    public Stats stats;
    public int sightRange;
    Vector3 offset = new Vector3(0.5f, 0.5f, 0.5f);
    public List<ItemAbstract> itemActions = new List<ItemAbstract>();
    Tilemap gotilemap;

    public void OnEnable() {
        GridManager.i.NPCBehaviours.Add(GetComponent<PandaBehaviour>());
        gotilemap = GridManager.i.goTilemap;
        //GetComponent<InventoryManager>().UpdateInventory();
    }

    [Task]
    public void CallAttackItems() {
        foreach (ItemAbstract item in itemActions) {
            item.Call(origin, origin, ItemAbstract.Signal.Attack);
        }
        ThisTask.Succeed();
    }

    [Task]
    public void CheckInformation() {
        UpdateInformation();
        ThisTask.Succeed();
    }

    public void Refresh() {

    }

    public void UpdateInformation() {
        Debug.Log("Update Info");
        origin = gameObject.position();
        stats = gameObject.GetComponent<Stats>();
        target = GridManager.i.goMethods.FindClosestGameObject(sightRange, origin, PartyManager.Faction.Party, false);
        GetComponent<Inventory>().CallEquipment(origin, origin, ItemAbstract.Signal.CalculateStats);
        Debug.Log("target " + target);
        if (!target) {
            stats.state = PartyManager.State.Idle;
            PartyManager.i.RemoveEnemy(gameObject);
            if (GridManager.i.fogTilemap.GetTile(origin) == null) { ChangeColour(Color.white); }
            if (transform.childCount > 0) { Destroy(transform.GetChild(0).gameObject); }
        }

        if (target) {
            targetPosition = target.position();
        }
       
    }

    [Task]
    void MakeQuestionMark() {
        GetComponent<Stats>().SpawnHitNumber("?", Color.white, 2);
        ThisTask.Succeed();
    }

    [Task]
    void SetActionPoints(int amount) {
        GetComponent<Stats>().actionPoints = amount;
        ThisTask.Succeed();
    }

    public void ChangeColour(Color colour) {
        gameObject.GetComponent<SpriteRenderer>().color = colour;
        foreach (Transform child in transform) {
            child.gameObject.GetComponent<SpriteRenderer>().color = colour;
        }
        var stats = gameObject.GetComponent<Stats>();
        var healthBar = stats.healthbar;
        if (healthBar && colour == Color.clear) { healthBar.SetActive(false); return; }
        else { healthBar.SetActive(true); }
        stats.UpdateHealthBar();
    }

    [Task]
    bool isInCombat() {
        if (PartyManager.i.enemyParty.Contains(gameObject)) { return true; }
        return false;
    }

    [Task]
    void checkEndTurn() {
        GridManager.i.TickGame();
        if (GetComponent<Stats>().actionPoints > 0) { ThisTask.Succeed(); return; }
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        PartyManager.i.NextEnemy(gameObject);
        
        ThisTask.Succeed();
        //PartyManager.i.EndEnemyTurn(gameObject);
    }

    [Task]
    void ManualTickMode() {
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        ThisTask.Succeed();
    }

    [Task]
    void HideInFog() {

        ThisTask.Succeed();
    }

    [Task]
    void WalkRandomly() {
        var position = gameObject.transform.position.FloorToInt();
        if (position.gameobjectGO() != gameObject) {
            position = gameObject.position();

        }

        if (position.gameobjectGO() != gameObject && !gotilemap.GetTile(position)) {
            return;
        }
        var pos = new Vector3Int(position.x + Random.Range(-1, 2), position.y + Random.Range(-1, 2));
        if (!GridManager.i.walkableTilemap.GetTile(pos)) { return; }
        if (pos.gameobjectSpawn()) { return; }
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(pos, gameObject);
        gameObject.transform.position = pos + offset;
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
      
        ThisTask.Succeed();
    }

    public void IdleBehaviour() {
        var position = gameObject.transform.position.FloorToInt();
        if(position.gameobjectGO() != gameObject) {
            position = gameObject.position();
          
        }

        if(position.gameobjectGO() != gameObject && !gotilemap.GetTile(position)) {
            return;
        }
        var pos =new Vector3Int(position.x + Random.Range(-1, 2), position.y + Random.Range(-1, 2));
        if (!GridManager.i.walkableTilemap.GetTile(pos)) { return; }
        if (pos.gameobjectSpawn()) { return; }
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(pos, gameObject);
        gameObject.transform.position = pos + offset;
    }

    [Task]
    void Attack() {
        if (!target) { ThisTask.Fail(); return; }
        gameObject.GetComponent<Stats>().ResetTempStats();
        if (MouseManager.i.Attack(targetPosition, origin, target, gameObject)){
            ThisTask.Succeed();
            return;
        }
        ThisTask.Fail();
        return;
    }

    [Task]
    bool isTargetNull() {
        if (target == null) return true;
        return false;
    }

    [Task]
    void DebugLog() {
        Debug.Log("Debug Task");
        ThisTask.Succeed();
    }

    [Task]
    bool isCurrentTurnCharacter() {
        if (PartyManager.i.currentCharacter == gameObject) return true;
        return false;
    }

    [Task]
    void MoveToTarget() {
        if (!target) { ThisTask.Fail();return; }
        if (MouseManager.i.Walk(targetPosition, origin, gameObject.GetComponent<Stats>())) {
            ThisTask.Succeed();
            return;
        }
        ThisTask.Fail(); return;
    }

    [Task]
    void AdvanceToTarget() {
        if (!target) { ThisTask.Fail(); return; }
        PathingManager.i.EnemyMoveup(targetPosition, origin);
        gameObject.GetComponent<Stats>().actionPoints -= 1;
        ThisTask.Succeed();
    }


    public void OnDestroy() {
        // PartyManager.i.EndEnemyTurn(null);
    }
}
