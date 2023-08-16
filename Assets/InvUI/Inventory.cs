using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[System.Serializable]
public class CoolDown {
    public int coolDownTimer;
    public ItemAbstract item;
    public CoolDown(int coolDown, ItemAbstract item) {
        this.coolDownTimer = coolDown;
        this.item = item;
    }
}

public class Inventory : MonoBehaviour
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public List<ItemAbstract> traits = new List<ItemAbstract>();
    [HideInInspector] public List<ItemAbstract> skills = new List<ItemAbstract>();
    [HideInInspector] public List<CoolDown> coolDowns = new List<CoolDown>();
    [HideInInspector] public List<ItemAbstract> statusEffects = new List<ItemAbstract>();   
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

    public void Awake() {
        stats = GetComponent<Stats>();
    }

    public void AddSkillCoolDown(int coolDown,ItemAbstract item) {
        var skillCoolDown = new CoolDown(coolDown, item);
        coolDowns.Add(skillCoolDown);
    }

    public void ReduceCoolDowns() {
        List<CoolDown> coolDownsToRemove= new List<CoolDown>();
        foreach (var skillCoolDown in coolDowns) {
            skillCoolDown.coolDownTimer--;
            if(skillCoolDown.coolDownTimer <= 0) { coolDownsToRemove.Add(skillCoolDown); }
        }
        foreach (var skillCoolDown in coolDownsToRemove) {
            if (coolDowns.Contains(skillCoolDown)) { coolDowns.Remove(skillCoolDown); }
        }
    }

    public int GetCoolDown(ItemAbstract item) {
        foreach(var skillCoolDown in coolDowns) {
            if (skillCoolDown.item.name == item.name) { return skillCoolDown.coolDownTimer; }
        }
        return 0;
    }

    public void OnEnable() {
        globalValues = Manager.GetGlobalValues();
        CloneInventory();
    }
    public bool AddItem(ItemAbstract item) {
        if(items.Count < globalValues.maxItems) {
            items.Add(item);
            return false;
        }
        var pos = gameObject.Position();
        item.Drop(pos,true);
        GridManager.i.UpdateGame();
        return true;
    }

    public void AddStatusEffect(Vector3Int position,Vector3Int origin,StatusEffect statusEffect) {
        if (stats.IsImmune(statusEffect)) { return; }
        foreach(var effect in statusEffects) {
            if(effect.name == statusEffect.name) { return; }
        }
        var clone = Instantiate(statusEffect);
        clone.name = statusEffect.name;
        statusEffects.Add(clone);
        AddSkillCoolDown(statusEffect.duration -1, statusEffect);
        clone.Call(position, origin, gameObject, CallType.SetTarget);
        stats.RefreshCharacter(stats.gameObject.Position());
    }

    public void RemoveStatusEffect(ItemAbstract statusEffect) {
        statusEffects.Remove(statusEffect);
        stats.RefreshCharacter(stats.gameObject.Position());
    }

    public void RemoveItem(ItemAbstract item) {
        if (items.Contains(item)) {
            items.Remove(item);
            return;
        }
        Debug.LogError("Item to be removed not found in inventory");
    }

    public ItemAbstract InstantiateItem(ItemAbstract item) {
        if (!item) { return null; }
        var clone = Instantiate(item);
        clone.name = item.name;
        return clone;
    }

    public void CloneInventory() {
        /*
        if (mainHand) { mainHand = InstantiateItem(mainHand); }
        if (offHand) { offHand = InstantiateItem(offHand); }
        if (helmet) { helmet = InstantiateItem(helmet); }
        if (armour) { armour = InstantiateItem(armour); }
        if (trinket1) { trinket1 = InstantiateItem(trinket1); }
        if (trinket2) { trinket2 = InstantiateItem(trinket2); }
        if (trinket3) { trinket3 = InstantiateItem(trinket3); }
        if (trinket4) { trinket4 = InstantiateItem(trinket4); }
        */
        if (items.Count > 0) {
            List<ItemAbstract> itemTemp = new List<ItemAbstract>();
            foreach (var item in items) {itemTemp.Add(InstantiateItem(item));}
            items.Clear();
            foreach (var item in itemTemp) { items.Add(item); }
        }
        /*
        if (traits.Count > 0) {
            List<ItemAbstract> itemTemp = new List<ItemAbstract>();
            foreach (var item in traits) {  itemTemp.Add(InstantiateItem(item));}
            traits.Clear();
            foreach (var item in itemTemp) {traits.Add(item);}
        }
        */
    }

    public void CallEquipment(Vector3Int position, Vector3Int origin, CallType signal) {
        foreach (var item in traits) { if (item) item.Call(position, origin,gameObject, signal); }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, gameObject, signal); }
        if (helmet) { helmet.Call(position, origin, gameObject, signal); }
        if (armour) { armour.Call(position, origin, gameObject, signal); }

        if (trinket1) { trinket1.Call(position, origin, gameObject, signal); }
        if (trinket2) { trinket2.Call(position, origin, gameObject, signal); }
        if (trinket3) { trinket3.Call(position, origin, gameObject, signal); }
        if (trinket4) { trinket4.Call(position, origin, gameObject, signal); }
        if (mainHand) { mainHand.Call(position, origin, gameObject, signal); }
        if (offHand) { offHand.Call(position, origin, gameObject, signal); }
    }

    public void CallTraitsAndStatusEffects(Vector3Int position, Vector3Int origin, CallType signal) {

        if (statusEffects.Count == 0) { goto traits; }
        for (int i = 0; i < statusEffects.Count; i++) {
            statusEffects[i].Call(position, origin, gameObject, signal);
        }
        //foreach (var item in statusEffects) { if (item) item.Call(position, origin, gameObject, signal); }
        traits:
        if (traits.Count == 0) { return; }
        foreach (var item in skills) { if (item) item.Call(position, origin, gameObject, signal); }
        stats.UpdateHealthBar();
    }

    public Weapon GetMainHandAsWeapon() {
        if (!mainHand) { return null; }
        if (mainHand is not Weapon) { return null; }
        return mainHand as Weapon;
    }

    public Weapon GetOffHandAsWeapon() {
        if (!offHand) { return null; }
        if (offHand is not Weapon) { return null; }
        return offHand as Weapon;
    }
}
