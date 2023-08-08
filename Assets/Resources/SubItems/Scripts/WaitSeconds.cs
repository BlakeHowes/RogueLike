using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "WaitSeconds", menuName = "SubItems/WaitSeconds")]
public class WaitSeconds : ItemAbstract {
    public float time;
    public Signal onSignal;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if(signal == onSignal)
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        yield return new WaitForSeconds(time);
    }

    public override string Description() {
        return "";
    }
}
