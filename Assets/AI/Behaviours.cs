using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Panda;

public class Behaviours : MonoBehaviour
{
    public AIAbstract Ai;

    Vector3Int origin;
    Vector3Int targetPosition;
    GameObject target;
    public void OnEnable() {
        if(GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
            PartyManager.i.AddEnemy(gameObject);
        }
    }

    public void UpdateInformation() {
        origin = gameObject.position();
        target = Ai.UpdateSensoryInformation(origin);
        if (target != null) {
            targetPosition = target.position();
        }
        if (GridManager.i.fogTilemap.GetTile(origin) != null) {
            gameObject.GetComponent<SpriteRenderer>().color = Color.black;
        }
        else {
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
        if (GetComponent<Stats>().state == AIAbstract.State.Idle) {
            GetComponent<PandaBehaviour>().Tick();
        }
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
    bool ActionPointsAboveZero() {
        if (Actions.i.actionPoints > 1) return true;
        return false;
    }
    [Task]
    void checkEndTurn() {
        if (Actions.i.actionPoints <= 1) {
            
            GetComponent<PandaBehaviour>().tickOn = BehaviourTree.UpdateOrder.Manual;
            PartyManager.i.EndEnemyTurn(gameObject);
         }
        ThisTask.Succeed();
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
        Debug.Log("hide");
        if (GridManager.i.fogTilemap.GetTile(origin) != null) {
            gameObject.GetComponent<SpriteRenderer>().color = Color.black;
        }
        else {
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
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
        if(GetComponent<Inventory>().mainHand == null) {
            var punched =Actions.i.Punch(targetPosition, origin);
            if (punched) {
                ThisTask.Succeed();
                return;
            }
            else {
                ThisTask.Fail();
                return;
            }
        }
        var attacked = Actions.i.UseItemMainHand(targetPosition, origin);
        if (attacked) {
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
        if (target != null) {
            var walked =Actions.i.Walk(targetPosition, origin);
            if (walked) {
                ThisTask.Succeed();
                return;
            }
        }
        ThisTask.Fail();
        return;
    }

    [Task]
    void AdvanceToTarget() {
        Actions.i.MoveUpEnemy(targetPosition,origin);
        ThisTask.Succeed();
    }

    public void OnDestroy() {
        // PartyManager.i.EndEnemyTurn(null);
    }
}
