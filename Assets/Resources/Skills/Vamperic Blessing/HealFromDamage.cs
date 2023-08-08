using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Heal From Damage Delt", menuName = "SubItems/Heal From Damage Delt")]
public class HealFromDamage : ItemAbstract {
    public float percentage =100;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if(signal != Signal.DirectDamage) { return; }
        var stats = origin.GameObjectGo().GetComponent<Stats>();
        stats.Heal(Mathf.RoundToInt(((float)stats.directDamage /100f)*percentage));
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        return "trades place with target";
    }
}
