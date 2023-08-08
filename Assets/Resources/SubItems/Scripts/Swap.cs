using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Swap", menuName = "SubItems/Swap")]
public class Swap : ItemAbstract {
    public override void Call(Vector3Int position, Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO, ItemAbstract parentItem) {
        if(signal != ItemStatic.Signal.Attack) { return; }
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