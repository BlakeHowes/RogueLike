using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NotOverride", menuName = "Actions/NotOverride")]
public class NotOverride : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}

