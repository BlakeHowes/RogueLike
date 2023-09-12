using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ClearFog", menuName = "Actions/ClearFog")]
public class ClearFog : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        GridManager.i.ClearFogDoor(position+new Vector3Int(0,2));
        GridManager.i.ClearFogDoor(position);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
