using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "AddSkill", menuName = "Actions/AddSkill")]
public class AddSkill : Action,IDescription {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
       if(actionContainer.itemValue == null) { Debug.LogError("Missing skill on " + parentItem);return true;}
        InventoryManager.i.AddSkill(actionContainer.itemValue);
        return true;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }

    public string Description(ItemAbstract parentItem,ActionContainer actionContainer) {
        return "Gain the skill " + actionContainer.itemValue.name;
    }
}
