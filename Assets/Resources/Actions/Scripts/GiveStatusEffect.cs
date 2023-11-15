using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "Actions/GiveStatusEffect")]
public class GiveStatusEffect : Action {
    [HideInInspector] public StatusEffect statusEffect;
    [HideInInspector] public StatusEffectTargeted statusEffectTargeted;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        if(actionContainer.itemValue is StatusEffect) {
            statusEffect = actionContainer.itemValue as StatusEffect;
        }
        else {
            statusEffect = null;
        }

        if (actionContainer.itemValue is StatusEffectTargeted) {
            statusEffectTargeted = actionContainer.itemValue as StatusEffectTargeted;
        }
        else {
            statusEffectTargeted = null;
        }

        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var target = position.GameObjectGo();
        if (target) {
            if(statusEffect) target.GetComponent<Inventory>().AddStatusEffect(position, origin, statusEffect);
            if(statusEffectTargeted) target.GetComponent<Inventory>().AddStatusEffect(position, origin, statusEffectTargeted);
        }
        yield return null;
    }
}
