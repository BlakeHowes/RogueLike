using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "MakeShopsFree", menuName = "Actions/MakeShopsFree")]
public class MakeShopsFree : Action {
    public GameObject particles;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (!parentGO) { return true; }
        if (parentGO.CompareTag("Party")) { return true; }
      
        for (int x = position.x - 12; x < position.x + 12; x++) {
            for (int y = position.y - 12; y < position.y + 12; y++) {
                var pos = new Vector3Int(x, y);
                var mech = GridManager.i.GetOrSpawnMech(pos);
                if (mech) {
                    if(mech is not Shop) { continue; }
                    var shop = mech as Shop;
                    Destroy(shop.priceInstance);

                    GridManager.i.mechMethods.RemoveMech(pos);
                    EffectManager.i.CreateSingleParticleEffect(pos, particles);
                }
            }
        }
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
