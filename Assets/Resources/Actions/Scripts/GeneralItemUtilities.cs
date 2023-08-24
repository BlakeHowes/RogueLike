using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "GeneralItemUtilities", menuName = "Actions/GeneralItemUtilities")]
public class GeneralItemUtilities : Action {
    public Type type;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {

        switch (type) {
            case Type.Debug: Debug.LogError("Positon: " +position + " Origin: " +origin + " ParentGo: " + parentGO + " ParentItem: " + parentItem +" CallType: " + ability.callType); break;
            case Type.IsTimesUsed:
                if (parentItem is GeneralItem) {
                    var item = parentItem as GeneralItem;
                    if (item.timesUsed >= item.totalUses && item.endlessUses == false) { return false; }
                }
                break;
            case Type.IfPositionHasGo: if (!position.GameObjectGo()) { return false; } break;
            case Type.IfPositionDoesNotHaveGo: if (position.GameObjectGo()) { return false; } break;
            case Type.IfPositionInSight: if (!position.InSight(origin)) { return false; } break;
            case Type.IfClearLineToPosition: if (GridManager.i.goMethods.FirstGameObjectInSight(position, origin) != position) { return false; } break;
            case Type.IfWeaponsAreMelee:
                var mainHand = parentGO.GetComponent<Inventory>().GetMainHandAsWeapon();
                if (mainHand) { if (mainHand.weaponType != WeaponType.melee) { return false; } }
                var offHand = parentGO.GetComponent<Inventory>().GetOffHandAsWeapon();
                if (offHand) { if (offHand.weaponType != WeaponType.melee) { return false; } }
                break;
        }
        return true;

    }

    public override IEnumerator StackAction() {
        yield return null;
    }

    public enum Type {
        IsTimesUsed,
        IfPositionHasGo,
        IfPositionDoesNotHaveGo,
        IfPositionInSight,
        IfClearLineToPosition,
        IfWeaponsAreMelee,
        Debug
    }
}

