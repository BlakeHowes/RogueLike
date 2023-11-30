using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "IfSurface", menuName = "Actions/IfSurface")]
public class IfSurface : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        return GridManager.i.IsSameSurface(position, actionContainer.surfaceValue);
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}