using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Range Condition", menuName = "Actions/Range Condition")]
public class RangeCondition : Action {
    public bool useParentItem;
    public bool returnValue;
    public bool useMainHandRange;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (!useParentItem) {
            if(position.InRange(origin, actionContainer.intValue)){ return !returnValue; }
            return returnValue;
        }
        if (useMainHandRange) {
            var weapon = parentGO.GetComponent<Inventory>().GetMainHandAsWeapon();
            if (position.InRange(origin, weapon.rangeTemp)) { return !returnValue; }
            return returnValue;
        }
        if (parentItem is Weapon) {
            Weapon weapon = parentItem as Weapon;
            if (position.InRange(origin, weapon.rangeTemp)) {
                return !returnValue;
            }
        }
        return returnValue;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
