using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "TargetUtilities", menuName = "Actions/TargetUtilities")]
public class TargetUtilities : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
