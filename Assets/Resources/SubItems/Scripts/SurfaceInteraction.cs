using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "SurfaceInteraction", menuName = "Mods/SurfaceInteraction")]

public class SurfaceInteraction : ItemAbstract {
    public Surface surface;
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != onSignal) { return; }
        this.position = position;
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        GridManager.i.CombineSurface(position, surface);
        yield return new WaitForSeconds(0f);
    }


    public override string Description() {
        return "";
    }
}
