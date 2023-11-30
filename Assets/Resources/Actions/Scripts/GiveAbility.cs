using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GiveAbility", menuName = "Actions/GiveAbility")]
public class GiveAbility : Action {
    public bool stackable;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var target = position.GameObjectGo();
        if (target) { target.GetComponent<Inventory>().AddTrait(actionContainer.itemValue,stackable); }
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}