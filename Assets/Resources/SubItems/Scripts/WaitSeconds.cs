using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "WaitSeconds", menuName = "Mods/WaitSeconds")]
public class WaitSeconds : ItemAbstract {
    public float time;
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
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
