using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Swap", menuName = "Actions/Swap")]
public class Swap : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        PathingManager.i.SwapPlacesInstant(position, origin);
        yield return null;
    }
}
