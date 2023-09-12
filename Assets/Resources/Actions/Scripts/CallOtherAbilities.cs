using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CallOtherAbilities", menuName = "Actions/CallOtherAbilities")]
public class CallOtherAbilities : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        foreach(var itemAbilities in parentItem.abilities) {
            if(itemAbilities == ability) { continue; }
            foreach(var container in itemAbilities.actionContainers) {
                if (!container.action.Condition(position, origin, parentGO, parentItem, itemAbilities, container)) { break; }
            }
        }
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
