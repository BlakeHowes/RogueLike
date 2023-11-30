using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GiveItem", menuName = "Actions/GiveItem")]
public class GiveItem : Action {
    [HideInInspector]public ItemAbstract item;
    [HideInInspector] public GameObject target;
    public bool randomPotion = false;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        item = actionContainer.itemValue;
        target = position.GameObjectGo();
        if (randomPotion) {
            var potions = Resources.LoadAll<ItemAbstract>("Items/Potions");
            item = potions[Random.Range(0,potions.Length)];
        }
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var itemClone = GridManager.i.InstantiateItem(item);
        if (target) {
            
            target.GetComponent<Inventory>().AddItem(itemClone);
        }
        else {
            itemClone.Drop(position,false);
        }
        yield return null;
    }
}
