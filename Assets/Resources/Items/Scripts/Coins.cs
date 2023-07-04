using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Coins", menuName = "Items/Coins")]
public class Coins : ItemAbstract {
    public Vector2Int valueRange;
    int value;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal == Signal.Pickup) {
            MouseManager.i.pickUpButNotAddToInventory = true;
            value = Random.Range(valueRange.x, valueRange.y+1);
            GameUIManager.i.ChangeCoinsValue(value);
        }
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        yield break;
    }
}
