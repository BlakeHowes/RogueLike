using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public ItemAbstract mainHand;
    public ItemAbstract offHand;
    public ItemAbstract helmet;
    public ItemAbstract armour;
    public List<ItemAbstract> trinkets;

    public int MaxInventory = 10;
    public bool AddItem(ItemAbstract item) {
        if(items.Count < MaxInventory) {
            items.Add(item);
            return true;
        }
        return false;
    }
    public void RemoveItem(ItemAbstract item) {
        if (items.Contains(item)) {
            items.Remove(item);
            return;
        }
        Debug.LogError("Item to be removed not found in inventory");
    }

    public void DropItems(Vector3Int position) {
        foreach (ItemAbstract item in items) {
            GridManager.i.itemMethods.DropItem(item, position);
        }
        items.Clear();
    }
}
