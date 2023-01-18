using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

[CreateAssetMenu(fileName = "BasicAI", menuName = "AI/BasicAI")]
public class EnemyAI:AIAbstract
{
    public int sightRange = 0;
    public int sightRangeWhileAlert = 0;

    private GameObject target;
    private Stats stats;
    private GameObject gameobject;
    public override GameObject UpdateSensoryInformation(Vector3Int position) {
        gameobject = position.gameobjectSpawn();
        if (gameobject == null) {
            return null;
        }
        stats = gameobject.GetComponent<Stats>();
        var range = sightRange;
        target = null;
        if (stats.state == State.Attacking) {
            target = GridManager.i.goMethods.FindClosestGameObject(range + sightRangeWhileAlert, position, PartyManager.Faction.Party);
        }
        if (stats.state == State.Idle) {
            var charactersInRange = GridManager.i.goMethods.GameObjectsInSight(range, position, PartyManager.Faction.Party);
            float smallestDistance = float.MaxValue;
            foreach (GameObject character in charactersInRange) {
                var chacterPos = character.position();
                if (GridManager.i.goMethods.IsInSight(position, chacterPos)) {
                    var distance = Vector3.Distance(position, chacterPos);
                    if (distance < smallestDistance) {
                        smallestDistance = distance;
                        target = character;
                    }
                }
            }
        }
        
        if (target == null) {
            stats.state = State.Idle;
            return null;
        }
        if(stats.state == State.Idle) {
            stats.SpawnHitNumber("!", Color.red,2);
        }
        stats.state = State.Attacking;
        return target;
    }

    public override void AttackLogic() {
        if(stats.state == State.Attacking) {
            PartyManager.i.TakeEnemyTurn(Attack(), gameobject);
        }
    }

    public IEnumerator Attack() {
        Actions.i.actionPoints = gameobject.GetComponent<Stats>().actionPoints+1;
        int testbreaker = 0;
        while (Actions.i.actionPoints > 1) {
            yield return new WaitForSeconds(0.2f);
            if(target == null) {
                UpdateSensoryInformation(gameobject.position());
            }
            if(target == null) {
                break;
            }
            testbreaker++;
            if(testbreaker >= 10) {
                Debug.LogError("Attack is stuck");
                break;
            }

            var weapon = gameobject.GetComponent<Inventory>().mainHand;
            var inrange = Actions.i.InMeleeRange(gameobject.position(), target.position());
            if (weapon == null) {
                if (inrange) {
                    Actions.i.Punch(target.position(), gameobject.position());
                }
                else {
                    var Walked = Actions.i.Walk(target.position(), gameobject.position());
                    if (Walked == false) {
                        Actions.i.MoveUpEnemy(target.position(), gameobject.position());
                    }
                    continue;
                }
                continue;
            }
        }
        yield return null;
    }
}
