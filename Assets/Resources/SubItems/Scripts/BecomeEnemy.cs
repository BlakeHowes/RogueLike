using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "BecomeEnemy", menuName = "SubItems/BecomeEnemy")]
public class BecomeEnemy : ItemAbstract {
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if (signal == Signal.TakeDamage) { position.GameObjectGo().tag = "Enemy"; }
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {

        yield return new WaitForSeconds(0f);
    }
}
