using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.UI.Image;
using UnityEngine.UIElements;

[CreateAssetMenu(fileName = "Swap", menuName = "Mods/Swap")]
public class Swap : ItemAbstract {
    public override void Call(Vector3Int position, Vector3Int origin, ItemStatic.Signal signal) {
        this.position = position;
        this.origin = origin;
        GridManager.i.AddToStack(this);
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        PathingManager.i.SwapPlacesInstant(position, origin);
        yield return new WaitForSeconds(0.1f);
    }

}