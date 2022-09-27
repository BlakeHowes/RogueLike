using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "BasicAI", menuName = "AI/BasicAI")]
public class EnemyAI:AIAbstract
{
    public int sightRange = 0;
    public int sightRangeWhileAlert = 0;

    private GameObject target;
    private Stats stats;
    private GameObject gameobject;
    public override void UpdateSensoryInformation(Vector3Int position) {
        gameobject = position.gameobjectSpawn();
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
            return;
        }
        if(stats.state == State.Idle) {
            stats.SpawnHitNumber("!", Color.white,2);
        }
        stats.state = State.Attacking;
    }

    public override void AttackLogic() {
        if(stats.state == State.Attacking) {
            PartyManager.i.EnemyTurn(Attack(), gameobject);
        }
    }

    public IEnumerator Attack() {
        Actions.i.actionPoints = gameobject.GetComponent<Stats>().actionPoints;
        int testbreaker = 0;
        while (Actions.i.actionPoints > 0) {
            yield return new WaitForSeconds(0.2f);
            testbreaker++;
            if(testbreaker >= 10) {
                Debug.LogError("Attack is shit");
                break;
            }

            var weapon = gameobject.GetComponent<Inventory>().mainHand;
            var inrange = Actions.i.InMeleeRange(gameobject.position(), target.position());
            if (weapon == null) {
                if (inrange) {
                    Actions.i.Punch(target.position(), gameobject.position());
                }
                else {
                    Actions.i.Walk(target.position(), gameobject.position());
                    continue;
                }
                continue;
            }
            if (weapon.ranged == false) {

                if (inrange == false) {
                    Actions.i.Walk(target.position(), gameobject.position());
                }
                else {
                    Actions.i.UseItemMainHand(target.position(), gameobject.position());
                }
            }
            else {
                Actions.i.UseItemMainHand(target.position(), gameobject.position());
            }
        }
        yield return null;
    }
}
