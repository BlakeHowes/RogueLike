using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "IfStatusEffect", menuName = "Actions/IfStatusEffect")]
public class IfStatusEffect : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if(parentItem is StatusEffectTargeted) {
            var statusEffect = parentItem as StatusEffectTargeted;
            if(position == statusEffect.target.Position()) { 
                return false; 
            }
        }
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
