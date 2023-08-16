using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "GiveStatusEffect", menuName = "Actions/GiveStatusEffect")]
public class GiveStatusEffect : Action {
    [HideInInspector] public StatusEffect statusEffect;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        statusEffect = actionContainer.itemValue as StatusEffect;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var target = position.GameObjectGo();
        if (target) {
            target.GetComponent<Inventory>().AddStatusEffect(position,origin, statusEffect);
        }
        yield return null;
    }
}
