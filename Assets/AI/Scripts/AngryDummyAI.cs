using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Angry Dummy", menuName = "AI/Angry Dummy")]
public class AngryDummyAI : AIAbstract
{
    public int sightRange = 1;
    public override void UpdateSensoryInformation(Vector3Int position) {
        var gameobject = position.gameobjectSpawn();
        var stats = gameobject.GetComponent<Stats>();
        var range = sightRange;
        stats.state = State.Idle;
        var closestTarget = GridManager.i.goMethods.FindClosestGameObject(range, position, PartyManager.Faction.Party);
        var weapon = gameobject.GetComponent<Inventory>().mainHand;
        var inrange = Actions.i.InMeleeRange(gameobject.position(), closestTarget.position());
        if (weapon == null) {
            if (inrange) {
                Actions.i.Punch(closestTarget.position(), position);
            }
            return;
        }
        if (weapon.ranged == false) {

            if (inrange == true) {
                Actions.i.UseItemMainHand(closestTarget.position(), position);
            }
        }
        else {
            Actions.i.UseItemMainHand(closestTarget.position(), position);
        }
    }

    public override void AttackLogic() {
        throw new System.NotImplementedException();
    }
}
