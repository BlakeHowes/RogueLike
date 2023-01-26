using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Panda;
using UnityEngine.UIElements;

public class Behaviours : MonoBehaviour
{
    public AIAbstract Ai;
    public Vector3Int origin;
    public Vector3Int targetPosition;
    public GameObject target;
    public void OnEnable() {
        if(GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
            PartyManager.i.AddEnemy(gameObject);
        }
        //GetComponent<InventoryManager>().UpdateInventory();
    }

    public void UpdateInformation() {
        origin = gameObject.position();
        target = Ai.UpdateSensoryInformation(origin);
        if (target != null) {
            targetPosition = target.position();
            ChangeColour(Color.white);
        }

        if (target == null) {
            targetPosition = target.position();
            ChangeColour(Color.clear);
            GetComponent<PandaBehaviour>().Tick();
        }
        if (GridManager.i.fogTilemap.GetTile(origin) == null) { ChangeColour(Color.white); }
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
        if (GetComponent<Stats>().state == AIAbstract.State.Idle) return false;
        return true;
    }

    [Task]
    void EndTurn() {
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        ThisTask.Succeed();
    }

    [Task]
    void checkEndTurn() {
        if (GetComponent<Stats>().actionPoints > 0) { ThisTask.Succeed(); return; }
        GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
        PartyManager.i.EndEnemyTurn(gameObject);
    }


    [Task]
    void FindEnemies() {
        origin = gameObject.position();
        target = Ai.UpdateSensoryInformation(origin);
        if(target != null) {
            targetPosition = target.position();
        }
        ThisTask.Succeed();
    }

    [Task]
    void HideInFog() {

        ThisTask.Succeed();
    }

    [Task]
    void WalkRandomly() {
        var position = gameObject.position();
        PathingManager.i.MoveOneStep(new Vector3Int(position.x + Random.Range(-2, 3), position.y + Random.Range(-2, 3)), position);
        ThisTask.Succeed();
    }
    [Task]
    void Attack() {
        gameObject.GetComponent<Stats>().ResetTempStats();
        GetComponent<Inventory>().CallEquipment(origin, origin, ItemAbstract.Signal.CalculateStats);
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
        if (target == null) { ThisTask.Fail(); return; }
        if(MouseManager.i.Walk(targetPosition, origin, gameObject.GetComponent<Stats>())) {
            ThisTask.Succeed();
            return;
        }
        ThisTask.Fail(); return;
    }

    [Task]
    void AdvanceToTarget() {       
        PathingManager.i.EnemyMoveup(targetPosition, origin);
        gameObject.GetComponent<Stats>().actionPoints -= 1;
        ThisTask.Succeed();
    }

    public void OnDestroy() {
        // PartyManager.i.EndEnemyTurn(null);
    }
}
