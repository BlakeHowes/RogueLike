using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemAbstract;

public class Inventory : MonoBehaviour
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public HashSet<ItemAbstract> skills = new HashSet<ItemAbstract>();
    public List<ItemAbstract> traits = new List<ItemAbstract>();
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();   
    public HashSet<ItemAbstract> statusEffectsToRemove = new HashSet<ItemAbstract>();
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

    public void AddStatusEffect(ItemAbstract item,Vector3Int target) {
        foreach(var effect in statusEffects) {
            if(effect.name == item.name) { return; }
        }
        var clone = Instantiate(item);
        clone.name = item.name;
        statusEffects.Add(clone);
        clone.Call(target, target, Signal.SetTarget);
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
        if (signal == Signal.CalculateStats) { gameObject.GetComponent<Stats>().ResetTempStats(); }
        if (mainHand) { mainHand.Call(position, origin, signal); }
        foreach (var item in skills) { if (item) item.Call(position, origin, signal); }
        foreach (var item in traits) { if (item) item.Call(position, origin, signal); }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, signal); }
        foreach (var item in trinkets) { if (item) item.Call(position, origin, signal); }
        if (helmet) { helmet.Call(position, origin, signal); }
        if (armour) { armour.Call(position, origin, signal); }
        if (offHand) { offHand.Call(position, origin, signal); }
    

        if (statusEffectsToRemove.Count > 0) {
            foreach (var item in statusEffectsToRemove) {
            if (statusEffects.Contains(item)) { statusEffects.Remove(item); }}
        }
    }
    public void CallTraitsAndStatusEffects(Vector3Int position, Vector3Int origin, Signal signal) {

        if(statusEffects.Count == 0) { goto traits; }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, signal); }

        if (statusEffectsToRemove.Count > 0) {
            foreach (var item in statusEffectsToRemove) {
                if (statusEffects.Contains(item)) {
                    statusEffects.Remove(item);
                }

            }
        }
        traits:
        if (traits.Count == 0) { return; }
        foreach (var item in traits) { if (item) item.Call(position, origin, signal); }
    }

    public void CheckEquipment(Vector3Int position, Vector3Int origin) {
        foreach (var item in traits) { if (item) item.CheckConditions(position, origin); }
        foreach (var item in statusEffects) { if (item) item.CheckConditions(position, origin); }
        foreach (var item in trinkets) { if (item) item.CheckConditions(position, origin); }
        foreach (var item in skills) { if (item) item.CheckConditions(position, origin); }
        if (offHand) { offHand.CheckConditions(position, origin); }
        if (helmet) { helmet.CheckConditions(position, origin); }
        if (armour) { armour.CheckConditions(position, origin); }
        if (mainHand) { mainHand.CheckConditions(position, origin); }
    }
}
