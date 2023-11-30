using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "IfStat", menuName = "Actions/IfStat")]
public class IfStat : Action {
    [HideInInspector] public int amount;
    public Operation operation;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        amount = actionContainer.intValue;
        Action action = null;
        int i = 0;
        foreach(var container in ability.actionContainers) {
            if(container.action == this) {
                action = ability.actionContainers[i + 1].action;
            }
            i++;
        }
        var statValue = 0;
        if (action is ValueOverride) {
            var valueOverride = action as ValueOverride;
            statValue = valueOverride.GetValue(parentGO);
        }

        if(statValue <= amount) { return false; }

        return true;
    }

    public enum Operation {
        Equal,
        GreaterThan,
        LessThan,
    }

    public override IEnumerator StackAction() {

        yield return null;
    }
}