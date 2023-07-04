using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "BecomeEnemy", menuName = "Mods/BecomeEnemy")]
public class BecomeEnemy : ItemAbstract {
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal == Signal.TakeDamage) { position.GameObjectGo().GetComponent<Stats>().faction = PartyManager.Faction.Enemy; }
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {

        yield return new WaitForSeconds(0f);
    }
}
