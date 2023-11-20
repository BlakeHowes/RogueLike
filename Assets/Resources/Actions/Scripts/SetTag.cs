using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "SetTag", menuName = "Actions/SetTag")]
public class SetTag : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        parentGO.tag = "Enemy";
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}