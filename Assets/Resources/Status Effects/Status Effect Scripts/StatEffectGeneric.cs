using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Stat Change", menuName = "Status Effects/Status Effect Main")]
public class StatEffectGeneric : ItemAbstract {
    [Header("Options")]
    public int durationTotal;
    public GameObject particles;
    [Tooltip("Calculate stats for any stat modification, tick for health ect")]
    public Signal onSignal = Signal.CalculateStats;
    int counter = 0;
    [Header("Stats")]
    public int damage;
    public int damageMultiple;
    public int rangedWeaponRange;
    public int maxHealth;
    public int armourMax;
    public int armour;
    public int actionPoints;
    public int throwingRange;
    public int walkCost;
    public int enemyAlertRange;
    public int skillRange;
    public int health;
    public int healthChangeAddition;
    [HideInInspector] public int healthChangeTally;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public GameObject target;

    public void DoStatusEffect(GameObject parentGO) {
        var stats = target.GetComponent<Stats>();
        if (!stats.gameObject.activeSelf) { return; }

        if (armourMax != 0) { stats.armourTemp += armourMax; }
        if (armour != 0) { stats.armour += armour; }
        if (actionPoints != 0) { stats.actionPointsTemp += actionPoints; }
        if (throwingRange != 0) { stats.throwingRangeTemp += throwingRange; }
        if (walkCost != 0) { stats.walkCostTemp += walkCost; }
        if (enemyAlertRange != 0) { stats.enemyAlertRangeTemp += enemyAlertRange; }
        if (skillRange != 0) { stats.skillRangeTemp += skillRange; }
        if (health < 0) { stats.TakeDamage((health + healthChangeTally) * -1, position); }
        if (health > 0) { stats.Heal(health + healthChangeTally); }

        healthChangeTally += healthChangeAddition;

        foreach (var item in subItems) {
            item.Call(position, origin, Signal.Attack,parentGO, this);
        }
        if (particles) { EffectManager.i.AttachSingleToGO(position, particles); }

    }
    public override IEnumerator Action() {

        yield return new WaitForSeconds(0f);
    }

    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if(signal == Signal.SetTarget) { 
            target = position.GameObjectGo();
            foreach(var subItem in subItems) {
                subItem.Call(position, origin, signal,parentGO, this);
            }
            return;
        }
        if(signal == Signal.OnSwitchFactionTurn) {
            counter++;
            if (counter >= durationTotal) {
                if (target) {
                    target.GetComponent<Inventory>().statusEffectsToRemove.Add(this);
                }

                return;
            }
        }
        if(signal != Signal.Attack) {
            foreach (var subItem in subItems) {
                subItem.Call(position, origin, signal,parentGO, this);
            }
        }


        if (signal != onSignal) { return; }
        Debug.Log("Status Effect Call");
        if (!target) { Debug.LogError("No target set for Status Effect " + this.name); return; }
        health += healthChangeAddition;
        var weapon = target.GetComponent<Inventory>().GetMainHandAsWeapon();
        if (weapon == null) { goto Stats; }
        weapon.damageTemp += damage;
        weapon.damageMaxTemp += damage;
        Debug.Log(weapon + " " + weapon.damageMultipleTemp);
        weapon.damageMultipleTemp += damageMultiple;
        if (weapon.rangeBase > 1) {
            weapon.rangeTemp += rangedWeaponRange;
        }

    Stats:
        this.position = position;
        this.origin = origin;
        DoStatusEffect(parentGO);
    }
    public override string Description() {
        string description = "";
        if (damage != 0) { description += damage + " Weapon Damage\n"; }
        if (damageMultiple != 0) { description += damageMultiple + " Times Weapon Damage\n"; }
        if (rangedWeaponRange != 0) { description += rangedWeaponRange + " Weapon Range\n"; }
        if (armourMax != 0) { description += armourMax + " Max Armour\n"; }
        if (armour != 0) { description += armour + " Armour\n"; }
        if (actionPoints != 0) { description += actionPoints + " Base AP\n"; }
        if (throwingRange != 0) { description += throwingRange + " Throwing Range\n"; }
        if (walkCost != 0) { description += walkCost + " Walk Cost\n"; }
        if (enemyAlertRange != 0) { description += enemyAlertRange + " Enemy Alert Range\n"; }
        if (skillRange != 0) { description += skillRange + " Skill Range\n"; }
        if (health != 0) { description += health + " Health\n"; }
        if (healthChangeAddition != 0) { description += healthChangeAddition + " Added Each Turn\n"; }
        description += "for " + durationTotal + " turns.\n";
        return description;
    }
}
