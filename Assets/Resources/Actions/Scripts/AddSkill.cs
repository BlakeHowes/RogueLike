using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "AddSkill", menuName = "Actions/AddSkill")]
public class AddSkill : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        InventoryManager.i.AddSkill(actionContainer.itemValue);
        return true;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
