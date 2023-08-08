using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "APMod", menuName = "SubItems/AP")]
public class APMod : ItemAbstract {
    public int aP;
    public Vector2 chance;
    public int chanceThreshold;
    public Signal onSignal;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if (onSignal != signal) { return; }
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        yield return null;
    }


    public override string Description() {
        return "trades place with target";
    }
}
