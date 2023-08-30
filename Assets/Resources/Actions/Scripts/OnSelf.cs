using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "OnSelf", menuName = "Actions/OnSelf")]
public class OnSelf : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        List<Action> actions = new List<Action>();
        foreach (var otherContainer in ability.actionContainers) {
            if (otherContainer.action == this) { 
                continue; 
            }
            otherContainer.action.Condition(origin, origin, parentGO, parentItem, ability, otherContainer);
        }
        return false;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}