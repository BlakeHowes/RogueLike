using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "StatusEffect", menuName = "Status Effects/Status Effect Base")]
public class StatusEffect : ItemAbstract {
    public int durationTotal;
    int counter = 0;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    GameObject target;

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal == Signal.SetTarget) { 
            target = position.gameobjectGO();
            foreach (var item in subItems) {
                item.Call(position, origin, signal);
            }
            return; 
        }

        if (signal == Signal.StartOfTurn) {
            counter++;

            if (counter > durationTotal) {
                if (target) { target.GetComponent<Inventory>().statusEffectsToRemove.Add(this); }
                return;
            }
        }
        position = target.position();
        foreach(var item in subItems) {
            item.Call(position, origin, signal);
        }
    }

    public override IEnumerator Action() {
        yield return null;
    }


    public override string Description() {
        var description = "";
        foreach(var item in subItems) {
            description += item.Description();
        }
        return description;
    }
}
