using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatusEffect", menuName = "Status Effects/Status Effect")]
public class StatusEffect : ItemAbstract {
    [Header("Options")]
    public int durationTotal;
    public Signal onSignal;
    int counter = 0;

    GameObject target;
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        Debug.Log("status signal " + signal);
        if (signal == Signal.SetTarget) { target = position.gameobjectGO(); return; }
   

        if (signal != onSignal) { return; }
        if (!target) { Debug.LogError("No target set for Status Effect " + this.name); return; }
        counter++;

        if (counter > durationTotal) {
            if (target) {
                Debug.Log(target);
                target.GetComponent<Inventory>().statusEffectsToRemove.Add(this);
            }
            return;
        }
        position = target.position();
        Debug.Log("Vamperic blessing status calling mods");
        foreach(var mod in Modifiers) {
            mod.Call(position, origin, signal);
        }
    }
    public override string Description() {
        var description = "";
        foreach(var mod in Modifiers) {
            description += mod.Description();
        }
        return description;
    }
}
