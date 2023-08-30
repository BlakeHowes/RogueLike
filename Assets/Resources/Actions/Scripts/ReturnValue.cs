using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ReturnValue", menuName = "Actions/ReturnValue")]
public class ReturnValue : Action {
    public bool value;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        return value;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
