using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "StatusEffectTargeted", menuName = "Items/StatusEffectTargeted")]
public class StatusEffectTargeted : ItemAbstract {

    public List<Ability> abilitiesOnTarget = new List<Ability>();
    [HideInInspector] public GameObject target;
    public int duration;
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if (callType == CallType.OnStartOfPartyTurn) {
            var inventory = parentGO.GetComponent<Inventory>();

            if (inventory.GetCoolDown(this) <= 0) {
                inventory.RemoveStatusEffect(this);
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
                foreach(var container in ability.actionContainers) {
                    if (!container.action.Condition(position, origin, parentGO, this, ability, container)) { return; }
                }
            }
        }

        foreach (var ability in abilitiesOnTarget) {
            if (ability.callType == callType) {
                ability.Call(target.Position(), parentGO.Position(), parentGO, this);
            }
        }
    }
}
