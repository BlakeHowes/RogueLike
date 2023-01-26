using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemAbstract;

public class Inventory : MonoBehaviour
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public List<ItemAbstract> skills = new List<ItemAbstract>();
    public List<ItemAbstract> misc = new List<ItemAbstract>();
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

    public void CallEquipment(Vector3Int position, Vector3Int origin, Signal signal) {
        foreach (var item in misc) {
            if (item)
                item.Call(position, origin, signal);
        }
        if (helmet != null) {
            helmet.Call(position, origin, signal);
        }
        if (armour != null) {
            armour.Call(position, origin, signal);
        }
        foreach (var item in trinkets) {
            if(item)
            item.Call(position, origin, signal);
        }
        if (offHand != null) {
            offHand.Call(position, origin, signal);
        }
        if (mainHand != null) {
            mainHand.Call(position, origin, signal);
        }
    }

    public void CheckEquipment(Vector3Int position, Vector3Int origin) {
        foreach (var item in misc) {
            if (item)
                item.CheckConditions(position, origin);
        }
        if (offHand != null) {
            offHand.CheckConditions(position, origin);
        }
        if (helmet != null) {
            helmet.CheckConditions(position, origin);
        }
        if (armour != null) {
            armour.CheckConditions(position, origin);
        }
        foreach (var item in trinkets) {
            item.CheckConditions(position, origin);
        }
        if (mainHand != null) {
            mainHand.CheckConditions(position, origin);
        }
    }
}
