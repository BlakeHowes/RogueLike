using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "OnSelf", menuName = "Actions/OnSelf")]
public class OnSelf : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        foreach (var container in ability.actionContainers) {
            if (container.action == this) { continue; }
            container.action.Condition(origin, origin, parentGO, parentItem, ability, container);
        }
        return false;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}