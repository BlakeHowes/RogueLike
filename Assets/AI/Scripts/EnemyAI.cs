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
}
