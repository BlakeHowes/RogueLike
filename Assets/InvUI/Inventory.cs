using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

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
    public ItemAbstract trinket1;
    public ItemAbstract trinket2;
    public ItemAbstract trinket3;
    public ItemAbstract trinket4;
    private GlobalValues globalValues;
    private Stats stats;

    public void Start() {
        stats = GetComponent<Stats>();
        
    }

    public void OnEnable() {
        globalValues = Manager.GetGlobalValues();
        CloneInventory();
    }
    public void AddItem(ItemAbstract item) {
        if(items.Count < globalValues.maxItems) {
            items.Add(item);
            return;
        }
        var pos = gameObject.Position();
        item.Drop(pos);
        GridManager.i.UpdateGame();
    }

    public void AddStatusEffect(Vector3Int position,Vector3Int origin,ItemAbstract statusEffect) {
        foreach(var effect in statusEffects) {
            if(effect.name == statusEffect.name) { return; }
        }
        var clone = Instantiate(statusEffect);
        clone.name = statusEffect.name;
        statusEffects.Add(clone);
        clone.Call(position, origin, Signal.SetTarget);
    }

    public void RemoveItem(ItemAbstract item) {
        if (items.Contains(item)) {
            items.Remove(item);
            return;
        }
        Debug.LogError("Item to be removed not found in inventory");
    }

    public void CloneInventory() {
        if (mainHand) { mainHand = Instantiate(mainHand); }
        if (offHand) { offHand = Instantiate(offHand); }
        if (helmet) { helmet = Instantiate(helmet); }
        if (armour) { armour = Instantiate(armour); }
        if (trinket1) { trinket1 = Instantiate(trinket1); }
        if (trinket2) { trinket2 = Instantiate(trinket2); }
        if (trinket3) { trinket3 = Instantiate(trinket3); }
        if (trinket4) { trinket4 = Instantiate(trinket4); }

        if (items.Count > 0) {
            List<ItemAbstract> itemTemp = new List<ItemAbstract>();
            foreach (var item in items) {itemTemp.Add(Instantiate(item));}
            items.Clear();
            foreach (var item in itemTemp) { items.Add(item); }
        }

        if (traits.Count > 0) {
            List<ItemAbstract> itemTemp = new List<ItemAbstract>();
            foreach (var item in traits) {itemTemp.Add(Instantiate(item));}
            traits.Clear();
            foreach (var item in itemTemp) {traits.Add(item);}
        }
    }

    public void CallEquipment(Vector3Int position, Vector3Int origin, Signal signal) {
        if (!stats) { stats =GetComponent<Stats>(); }
        if (signal == Signal.CalculateStats) { stats.ResetTempStats(); }
        foreach (var item in skills) { if (item) item.Call(position, origin, signal); }
        foreach (var item in traits) { if (item) item.Call(position, origin, signal); }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, signal); }
        if (helmet) { helmet.Call(position, origin, signal); }
        if (armour) { armour.Call(position, origin, signal); }

        if (trinket1) { trinket1.Call(position, origin, signal); }
        if (trinket2) { trinket2.Call(position, origin, signal); }
        if (trinket3) { trinket3.Call(position, origin, signal); }
        if (trinket4) { trinket4.Call(position, origin, signal); }
        if (statusEffectsToRemove.Count > 0) {
            foreach (var item in statusEffectsToRemove) {
            if (statusEffects.Contains(item)) { statusEffects.Remove(item); }}
        }

        if (offHand) { offHand.Call(position, origin, signal); }
        if (mainHand) { mainHand.Call(position, origin, signal); }
    }
    public void CallTraitsAndStatusEffects(Vector3Int position, Vector3Int origin, Signal signal) {
        stats.UpdateHealthBar();
        if (statusEffects.Count == 0) { goto traits; }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, signal);Debug.Log(signal); }
        if (statusEffectsToRemove.Count > 0) {
            Debug.Log("Remove Effects");
            foreach (var item in statusEffectsToRemove) {
                if (statusEffects.Contains(item)) { statusEffects.Remove(item); }
            }
        }
        traits:
        if (traits.Count == 0) { return; }
        foreach (var item in traits) { if (item) item.Call(position, origin, signal); }
    }
}
