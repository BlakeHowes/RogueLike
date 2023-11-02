using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemCoolDown", menuName = "Actions/ItemCoolDown")]
public class ItemCoolDown : Action {
    [HideInInspector]public ItemAbstract item;
    public bool forEachGameObject;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        Inventory inventory = null;
        if (parentItem) { item = parentItem; }
        if (item == null) {
            item = new Skill();
            var seed = Random.Range(1.11111f, 1000f);
            item.name = "GeneratedItem" + seed.ToString();
        }
        if (parentGO) { inventory = parentGO.GetComponent<Inventory>(); }

        if (forEachGameObject) {
            if (inventory.GetCoolDownGo(item,position.GameObjectGo()) > 0) { 
                return false; }
        }
        else {
            if (inventory.GetCoolDown(item) > 0) { 
                return false; }
        }



        if (forEachGameObject) {
            inventory.AddCoolDownGO(actionContainer.intValue, item,position.GameObjectGo());
            return true;
        }
        inventory.AddCoolDown(actionContainer.intValue, item);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
