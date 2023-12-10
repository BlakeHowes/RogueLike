using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using static ItemStatic;
using static MechStatic;

[System.Serializable]
public class CoolDown {
    public int coolDownTimer;
    public ItemAbstract item;
    public GameObject go;
    public CoolDown(int coolDown, ItemAbstract item, GameObject go) {
        this.coolDownTimer = coolDown;
        this.item = item;
        this.go = go;  
    }
}

public class Inventory : MonoBehaviour
{
    public List<Ability> generalAbilities = new List<Ability>();
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public List<ItemAbstract> traits = new List<ItemAbstract>();
    [HideInInspector]public List<ItemAbstract> skills = new List<ItemAbstract>();
    public List<CoolDown> coolDowns = new List<CoolDown>();
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();   
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

    public void AddCoolDown(int coolDown,ItemAbstract item) {
        foreach(var itemCoolDown in coolDowns) {
            if(itemCoolDown.item.name == item.name) {
                itemCoolDown.coolDownTimer = coolDown;
                return;
            }
        }
        var skillCoolDown = new CoolDown(coolDown, item,null);
        coolDowns.Add(skillCoolDown);
    }

    public void AddCoolDownGO(int coolDown, ItemAbstract item,GameObject go) {
        foreach (var itemCoolDown in coolDowns) {
            if (itemCoolDown.item.name == item.name && itemCoolDown.go == go) {
                itemCoolDown.coolDownTimer = coolDown;
                return;
            }
        }
        var skillCoolDown = new CoolDown(coolDown, item, go);
        coolDowns.Add(skillCoolDown);
    }

    public void ReduceCoolDowns() {
        List<CoolDown> coolDownsToRemove= new List<CoolDown>();
        foreach (var skillCoolDown in coolDowns) {
            skillCoolDown.coolDownTimer--;
            if(skillCoolDown.coolDownTimer < 0) { coolDownsToRemove.Add(skillCoolDown); }
        }
        foreach (var skillCoolDown in coolDownsToRemove) {
            if (coolDowns.Contains(skillCoolDown)) { coolDowns.Remove(skillCoolDown); }
        }
    }

    public void ClearCoolDowns() {
        List<CoolDown> coolDownsToRemove = new List<CoolDown>();
        foreach (var skillCoolDown in coolDowns) {
            coolDownsToRemove.Add(skillCoolDown);
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

    public int GetCoolDownGo(ItemAbstract item,GameObject go) {
        foreach (var skillCoolDown in coolDowns) {
            if (skillCoolDown.item.name == item.name && skillCoolDown.go == go) { return skillCoolDown.coolDownTimer; }
        }
        return 0;
    }


    public bool AddItem(ItemAbstract item) {
        if(item == null) { return true; }
        var itemDestination = items;
        if (globalValues.usePartyInventory) { itemDestination = InventoryManager.i.partyInventory; }
        if(itemDestination.Count < globalValues.maxItems) {
            itemDestination.Add(item);
            InventoryManager.i.UpdateInvetorySlots(this);
            return false;
        }
        var pos = gameObject.Position();
        item.Drop(pos,true);
        GridManager.i.UpdateGame();
        return true;
    }

    public bool AmIStunned() {
        foreach(var status in statusEffects) {
            if(status.name == globalValues.stun.name) {
                return true;
            }
        }
        return false;
    }

    public void AddStatusEffect(Vector3Int position,Vector3Int origin,StatusEffect statusEffect) {
        if (statusEffect == null) { return; }
        if (stats.elementalStats != null) {
            if (stats.elementalStats.IsImmune(statusEffect)) { return; }
        }
        foreach (var coolDown in coolDowns) {
            if (coolDown.item.name == statusEffect.name) {
                coolDown.coolDownTimer = statusEffect.duration;
            }
        }
        foreach (var effect in statusEffects) {
            if(effect.name == statusEffect.name) { return; }
        }

        var clone = Instantiate(statusEffect);
        clone.name = statusEffect.name;
        statusEffects.Add(clone);
        AddCoolDown(statusEffect.duration, statusEffect);
        clone.Call(position, gameObject.Position(), gameObject, CallType.OnStatusEffectEnable);
        stats.RefreshCharacter(stats.gameObject.Position());
    }

    public void AddStatusEffect(Vector3Int position, Vector3Int origin, StatusEffectTargeted statusEffect) {
        if(statusEffect == null) { return; }
        if (stats.elementalStats != null) {
            if (stats.elementalStats.IsImmune(statusEffect)) { return; }
        }
        foreach (var coolDown in coolDowns) {
            if (coolDown.item.name == statusEffect.name) {
                coolDown.coolDownTimer = statusEffect.duration;
            }
        }
        foreach (var effect in statusEffects) {
            if (effect.name == statusEffect.name) { return; }
        }
        
        var clone = Instantiate(statusEffect);
        clone.target = origin.GameObjectGo();
        clone.name = statusEffect.name;
        statusEffects.Add(clone);
        AddCoolDown(statusEffect.duration, statusEffect);
        clone.Call(position, gameObject.Position(), gameObject, CallType.OnStatusEffectEnable);
        stats.RefreshCharacter(stats.gameObject.Position());
    }

    public void RemoveStatusEffect(ItemAbstract statusEffect) {
        List<ItemAbstract> statusEffectsToRemove = new List<ItemAbstract>();
        foreach (var effect in statusEffects) {
            if (effect.name == statusEffect.name) {
                statusEffectsToRemove.Add(effect);
            }
        }
        foreach(var effect in statusEffectsToRemove) {
            statusEffects.Remove(effect);
        }
        stats.RefreshCharacter(stats.gameObject.Position());
    }

    public void RemoveItem(ItemAbstract item) {
        if (globalValues.usePartyInventory) {
            if (InventoryManager.i.partyInventory.Contains(item)) {
                InventoryManager.i.partyInventory.Remove(item);
                return;
            }
            return;
        }
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
    public void OnEnable() {
        globalValues = Manager.GetGlobalValues();
        CloneInventory();
        CreateAbilityCallSubscriptions(); // Testing!
    }

    public void OnDisable() {
        RemoveAbilityCallSubscriptions();
    }
    public void CreateAbilityCallSubscriptions() {
        foreach(var ability in generalAbilities) {
            switch (ability.callType) {
                case CallType.OnTakeDamageGlobal: Manager.OnTakeDamageEvent += CallAbilities; break;
                case CallType.OnDeathGlobal: Manager.OnDeathEvent += CallAbilities; break;
                case CallType.OnMoveGlobal: Manager.OnMoveEvent += CallAbilities; break;
                case CallType.OnAttackGlobal: Manager.OnAttackEvent += CallAbilities; break;
            }
        }
        foreach (var item in traits) {
            if (!item) { continue; }
            foreach(var ability in item.abilities) {
                switch (ability.callType) {
                    case CallType.OnTakeDamageGlobal: Manager.OnTakeDamageEvent += CallTraits; break;
                    case CallType.OnDeathGlobal: Manager.OnDeathEvent += CallTraits; break;
                    case CallType.OnMoveGlobal: Manager.OnMoveEvent += CallTraits; break;
                    case CallType.OnAttackGlobal: Manager.OnAttackEvent += CallTraits; break;
                }
            }
        }
    }

    public void RemoveAbilityCallSubscriptions() {
        foreach (var ability in generalAbilities) {
            switch (ability.callType) {
                case CallType.OnTakeDamageGlobal: Manager.OnTakeDamageEvent -= CallAbilities; break;
                case CallType.OnDeathGlobal: Manager.OnDeathEvent -= CallAbilities; break;
                case CallType.OnMoveGlobal: Manager.OnMoveEvent -= CallAbilities; break;
                case CallType.OnAttackGlobal: Manager.OnAttackEvent -= CallAbilities; break;
            }
        }
        foreach (var item in traits) {
            if (!item) { continue; }
            foreach (var ability in item.abilities) {
                switch (ability.callType) {
                    case CallType.OnTakeDamageGlobal: Manager.OnTakeDamageEvent -= CallTraits; break;
                    case CallType.OnDeathGlobal: Manager.OnDeathEvent -= CallTraits; break;
                    case CallType.OnMoveGlobal: Manager.OnMoveEvent -= CallTraits; break;
                    case CallType.OnAttackGlobal: Manager.OnAttackEvent -= CallTraits; break;
                }
            }
        }
    }

    public void CallAbilities(Vector3Int position, Vector3Int origin, CallType callType) {
        foreach (var item in generalAbilities) {
            if (item.callType == callType)
                item.Call(position, origin, gameObject, null);
        }
    }

    public void CallTraits(Vector3Int position, Vector3Int origin, CallType callType) {
        foreach (var item in traits) {
            item.Call(position, origin, gameObject,callType);
        }
    }

    public void AddTrait(ItemAbstract item,bool stackable) {
        if(traits.Contains(item) && !stackable) { return; }
        traits.Add(item);
        RemoveAbilityCallSubscriptions();
        CreateAbilityCallSubscriptions();
        var position = gameObject.Position();
        item.Call(position, position, gameObject, CallType.OnPickTrait);
        GridManager.i.StartStackWithoutUpdate();
    }

    public void CallEquipment(Vector3Int position, Vector3Int origin, CallType callType) {
        for (int i = 0; i < statusEffects.Count; i++) {
            statusEffects[i].Call(position, origin, gameObject, callType);
        }
        foreach (var item in traits) {
            if (item) { item.Call(position, origin, gameObject, callType);} 
        }
        foreach (var item in generalAbilities) { 
            if(item.callType == callType)
            item.Call(position, origin,gameObject, null);
        }

        if (helmet) { helmet.Call(position, origin, gameObject, callType); }
        if (armour) { armour.Call(position, origin, gameObject, callType); }

        if (trinket1) { trinket1.Call(position, origin, gameObject, callType); }
        if (trinket2) { trinket2.Call(position, origin, gameObject, callType); }
        if (trinket3) { trinket3.Call(position, origin, gameObject, callType); }
        if (trinket4) { trinket4.Call(position, origin, gameObject, callType); }
        if (mainHand) { mainHand.Call(position, origin, gameObject, callType); }
        if (offHand) { offHand.Call(position, origin, gameObject, callType); }
    }

    public void CallTraitsAndStatusEffects(Vector3Int position, Vector3Int origin, CallType signal) {

        if (statusEffects.Count == 0) { goto traits; }
        for (int i = 0; i < statusEffects.Count; i++) {
            statusEffects[i].Call(position, origin, gameObject, signal);
        }
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
