using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Teleport", menuName = "Actions/Teleport")]
public class Teleport : Action {

    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        PathingManager.i.Teleport(position, origin);
        yield return null;
    }
}
