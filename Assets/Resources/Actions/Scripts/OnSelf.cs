using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "OnSelf", menuName = "Actions/OnSelf")]
public class OnSelf : Action {
    bool foundSelf = false;
    public bool useGoPosition;
    public bool setOriginToTarget;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        List<Action> actions = new List<Action>();
        if (useGoPosition) { origin = parentGO.Position(); }
        if(setOriginToTarget) { origin = position; }
        foreach (var otherContainer in ability.actionContainers) {
            if (otherContainer.action == this) { 
                foundSelf = true;
                continue; 
            }
            if (foundSelf) {
                var conditionResult = otherContainer.action.Condition(origin, origin, parentGO, parentItem, ability, otherContainer);
                if (!conditionResult) { break; }
            }

        }
        foundSelf = false;
        return false;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}