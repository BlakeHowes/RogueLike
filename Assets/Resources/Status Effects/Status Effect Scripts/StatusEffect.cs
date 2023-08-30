using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "StatusEffect", menuName = "Items/StatusEffect")]
public class StatusEffect : ItemAbstract
{
    public int duration;


    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if (callType == CallType.StartOfTurn) {
            var inventory = parentGO.GetComponent<Inventory>();

            if (inventory.GetCoolDown(this) <= 0) { inventory.RemoveStatusEffect(this);
                foreach (var ability in abilities) {
                    if (ability.callType == CallType.DisableItem) {
                        ability.Call(position, origin, parentGO, this);
                    }
                }
                return; 
            }
        }

        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
}
