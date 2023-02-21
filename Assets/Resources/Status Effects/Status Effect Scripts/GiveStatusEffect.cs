using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "Mods/GiveStatusEffect")]
public class GiveStatusEffect : ItemAbstract {
    public Signal onSignal;
    public bool targetGiver;
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        foreach(var mod in Modifiers) {
            if (targetGiver) {
                position.gameobjectGO().GetComponent<Inventory>().AddStatusEffect(mod,origin);
            }
            else {
                position.gameobjectGO().GetComponent<Inventory>().AddStatusEffect(mod, position);
            }

        }
    }

    public override string Description() {
        return "";
    }
}
