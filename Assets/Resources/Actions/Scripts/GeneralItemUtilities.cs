using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "GeneralItemUtilities", menuName = "Actions/GeneralItemUtilities")]
public class GeneralItemUtilities : Action {
    public Type type;
    public WeaponType weaponType;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {

        switch (type) {
            case Type.Debug: Debug.LogError("DebugLog: Positon: " +position + " Origin: " +origin + " ParentGo: " + parentGO + " ParentItem: " + parentItem +" CallType: " + ability.callType);
                Debug.LogError("Position Go: " + position.GameObjectGo() + " Origin Go: " + origin.GameObjectGo()); break;
            case Type.IfPositionHasGo: if (!position.GameObjectGo()) { return false; } break;
            case Type.IfPositionDoesNotHaveGo: if (position.GameObjectGo()) { return false; } break;
            case Type.IfPositionInSight: if (!position.InSight(origin)) { return false; } break;
            case Type.IfClearLineToPosition: if (GridManager.i.goMethods.IsInSightObsticalFree(position, origin) != true) { return false; } break;
            case Type.IfPositionInIdle: if (position.GameObjectGo().GetComponent<Stats>().state == PartyManager.State.Combat) { return false; } break;
            case Type.IfWeaponsAreOfDamageType:
                var mainHand = parentGO.GetComponent<Inventory>().GetMainHandAsWeapon();
                if (mainHand) { if (mainHand.weaponType != weaponType) { return false; } }
                var offHand = parentGO.GetComponent<Inventory>().GetOffHandAsWeapon();
                if (offHand) { if (offHand.weaponType != weaponType) { return false; } }
                break;
            case Type.IfOriginGo: if (!origin.GameObjectGo()) { return false; } break;

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
        IfWeaponsAreOfDamageType,
        Debug,
        IfPositionInIdle,
        IfOriginGo,
    }
}

