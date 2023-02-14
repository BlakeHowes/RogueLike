using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;
using static ItemAbstract;
using static UnityEngine.UI.Image;

public class Inventory : MonoBehaviour
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public List<ItemAbstract> skills = new List<ItemAbstract>();
    public List<ItemAbstract> traits = new List<ItemAbstract>();
    public List<ItemAbstract> traitsToRemove = new List<ItemAbstract>();
    public ItemAbstract mainHand;
    public ItemAbstract offHand;
    public ItemAbstract helmet;
    public ItemAbstract armour;
    public List<ItemAbstract> trinkets;

    public int MaxInventory = 10;
    public void AddItem(ItemAbstract item) {
        if(items.Count < MaxInventory) {
            items.Add(item);
            return;
        }
        GridManager.i.itemMethods.DropItem(item,gameObject.position());
        GridManager.i.UpdateGame();
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
        foreach (var item in traits) { if (item) item.Call(position, origin, signal); }
        foreach (var item in trinkets) { if (item) item.Call(position, origin, signal); }
        foreach (var item in skills) { if (item) item.Call(position, origin, signal); }
        if (helmet) { helmet.Call(position, origin, signal); }
        if (armour) { armour.Call(position, origin, signal); }
        if (offHand) { offHand.Call(position, origin, signal); }
        if (mainHand) { mainHand.Call(position, origin, signal); }

        if (traitsToRemove.Count > 0) {
            foreach (var item in traitsToRemove) {
            if (traits.Contains(item)) { traits.Remove(item); }}
        }
    }
    public void CallTraits(Vector3Int position, Vector3Int origin, Signal signal) {
        foreach (var item in traits) { if (item) item.Call(position, origin, signal); }
        if (traitsToRemove.Count > 0) {
            foreach (var item in traitsToRemove) {
            if (traits.Contains(item)) { traits.Remove(item); }}
        }
    }

    public void CheckEquipment(Vector3Int position, Vector3Int origin) {
        foreach (var item in traits) { if (item) item.CheckConditions(position, origin); }
        foreach (var item in trinkets) { if (item) item.CheckConditions(position, origin); }
        foreach (var item in skills) { if (item) item.CheckConditions(position, origin); }
        if (offHand) { offHand.CheckConditions(position, origin); }
        if (helmet) { helmet.CheckConditions(position, origin); }
        if (armour) { armour.CheckConditions(position, origin); }
        if (mainHand) { mainHand.CheckConditions(position, origin); }
    }
}
