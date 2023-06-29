using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "APMod", menuName = "Mods/AP")]
public class APMod : ItemAbstract {
    public int aP;
    public Vector2 chance;
    public int chanceThreshold;
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (onSignal != signal) { return; }
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        ItemAbstract item = GridManager.i.ParentInStack(this);
        if (Random.Range(chance.x, chance.y) > chanceThreshold) {
            var skill = item as Skill;
            if (skill) {
                skill.actionPointCostTemp = aP;
            }
        }
        else {
            var skill = item as Skill;
            if (skill) {
                skill.actionPointCostTemp = skill.actionPointCost;
            }
        }
        yield return null;
    }


    public override string Description() {
        return "trades place with target";
    }
}
