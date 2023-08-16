using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "BlockPickup", menuName = "Actions/BlockPickup")]
public class BlockPickup : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        MouseManager.i.pickUpButNotAddToInventory = true;
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
