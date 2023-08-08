using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[System.Serializable]
public class CoolDown {
    public int coolDownTimer;
    public Skill skill;
    public CoolDown(int coolDown, Skill skill) {
        this.coolDownTimer = coolDown;
        this.skill = skill;
    }
}

public class Inventory : MonoBehaviour
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public List<ItemAbstract> traits = new List<ItemAbstract>();
    [HideInInspector] public List<ItemAbstract> skills = new List<ItemAbstract>();
    [HideInInspector] public List<CoolDown> coolDowns = new List<CoolDown>();
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

    public void Awake() {
        stats = GetComponent<Stats>();
    }

    public void AddSkillCoolDown(int coolDown,Skill skill) {
        var skillCoolDown = new CoolDown(coolDown, skill);
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

    public int GetCoolDown(Skill skill) {
        foreach(var skillCoolDown in coolDowns) {
            if (skillCoolDown.skill ==  skill) { return skillCoolDown.coolDownTimer; }
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

    public void AddStatusEffect(Vector3Int position,Vector3Int origin,ItemAbstract statusEffect) {
        if (stats.IsImmune(statusEffect)) { return; }
        foreach(var effect in statusEffects) {
            if(effect.name == statusEffect.name) { return; }
        }
        var clone = Instantiate(statusEffect);
        clone.name = statusEffect.name;
        statusEffects.Add(clone);
        clone.Call(position, origin, Signal.SetTarget, gameObject,null);
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

    public void CallEquipment(Vector3Int position, Vector3Int origin, Signal signal) {
        if (!stats) { stats =GetComponent<Stats>(); }
        if (signal == Signal.CalculateStats) { stats.ResetTempStats(); }
        foreach (var item in traits) { if (item) item.Call(position, origin, signal,gameObject,null); }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, signal, gameObject, null); }
        if (helmet) { helmet.Call(position, origin, signal, gameObject, null); }
        if (armour) { armour.Call(position, origin, signal, gameObject, null); }

        if (trinket1) { trinket1.Call(position, origin, signal, gameObject, null); }
        if (trinket2) { trinket2.Call(position, origin, signal, gameObject, null); }
        if (trinket3) { trinket3.Call(position, origin, signal, gameObject, null); }
        if (trinket4) { trinket4.Call(position, origin, signal, gameObject, null); }
        if (statusEffectsToRemove.Count > 0) {
            foreach (var item in statusEffectsToRemove) {
            if (statusEffects.Contains(item)) { statusEffects.Remove(item); }}
        }
        if (mainHand) { mainHand.Call(position, origin, signal, gameObject, null); }
        if (offHand) { offHand.Call(position, origin, signal, gameObject, null); }

    }

    public void CallTraitsAndStatusEffects(Vector3Int position, Vector3Int origin, Signal signal,GameObject parentGO) {
        stats.UpdateHealthBar();
        if (statusEffects.Count == 0) { goto traits; }
        foreach (var item in statusEffects) { if (item) item.Call(position, origin, signal, parentGO,null); }
        if (statusEffectsToRemove.Count > 0) {
            Debug.Log("Remove Effects");
            foreach (var item in statusEffectsToRemove) {
                if (statusEffects.Contains(item)) { statusEffects.Remove(item); }
            }
        }
        traits:
        if (traits.Count == 0) { return; }
        foreach (var item in skills) { if (item) item.Call(position, origin, signal, parentGO, null); }
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
