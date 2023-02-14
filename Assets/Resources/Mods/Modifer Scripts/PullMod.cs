using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Pull", menuName = "Mods/Pull")]
public class PullMod : ItemAbstract
{
    public int actionPointCost;
    public float speed;
    public int pullDistance;
    public int range;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        var target = position.gameobjectSpawn();
        //if(PartyManager.i.state != PartyManager.State.Combat) { return false; }
        if (target == null) return false;
        var faction = target.GetComponent<Stats>().faction;
        if (faction == PartyManager.Faction.Wall || faction == PartyManager.Faction.Interactable) { return false; }
        if (!GridManager.i.tools.InRange(position, origin, range)) { return false; }
        if (GridManager.i.tools.InMeeleeRange(position, origin)) { return false; }
        return true;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal == Signal.ActionPointSum) {
            if (ConditionsMet) { PartyManager.i.currentCharacter.GetComponent<Stats>().actionPointsSum += actionPointCost; }
            return;
        }
        var target = position.gameobjectSpawn();
        if(target == null) return; 

        if(signal == Signal.Attack) {
            if (!ConditionsMet) { return; }

            if (particles != null) {
                var clone = GridManager.i.InstantiateGameObject(particles);
                clone.transform.position = target.transform.position;
                clone.transform.SetParent(target.transform);
            }
            var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, pullDistance);
            PathingManager.i.Jump(line[0], position, speed);
            Debug.Log("Pull");
        }
        return;
    }

    public override string Description() {
        return (" Pull: Pull objects towards you");
    }
}
