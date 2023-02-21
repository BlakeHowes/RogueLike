using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Swap", menuName = "Mods/Swap")]
public class SwapMod : ItemAbstract {

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        PathingManager.i.SwapPlaces(position, origin);
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override string Description() {
        return "trades place with target";
    }
}
