using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Range Condition", menuName = "Actions/Range Condition")]
public class RangeCondition : Action {
    bool useParentItem;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (!useParentItem) {
            if(position.InRange(origin, actionContainer.intValue)){ return true; }
            return false;
        }
        if (parentItem is Weapon) {
            Weapon weapon = parentItem as Weapon;
            if (position.InRange(origin, weapon.rangeTemp)) {
                return true;
            }
        }
        return false;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
