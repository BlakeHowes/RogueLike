using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Stat Change", menuName = "Status Effects/Stat Change Status Effect")]
public class StatEffectGeneric : ItemAbstract {
    [Header("Options")]
    public int durationTotal;
    [Tooltip("Calculate stats for any stat modification, tick for health ect")]
    public Signal onSignal = Signal.CalculateStats;
    int counter = 0;
    [Header("Stats")]
    public int damage;
    public int damageMultiple;
    public int rangedWeaponRange;
    public int maxHealth;
    public int armour;
    public int actionPoints;
    public int throwingRange;
    public int fistDamage;
    public int walkCost;
    public int enemyAlertRange;
    public int skillRange;
    public int health;
    public int healthChangeAddition;
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public GameObject target;
    public override IEnumerator Action() {
        var stats = target.GetComponent<Stats>();
        if (!stats.gameObject.activeSelf) { yield break; }
        if (armour != 0) { stats.armourTemp += armour; }
        if (actionPoints != 0) { stats.actionPointsTemp += actionPoints; }
        if (throwingRange != 0) { stats.throwingRangeTemp += throwingRange; }
        if (fistDamage != 0) { stats.fistDamageTemp += fistDamage; }
        if (walkCost != 0) { stats.walkCostTemp += walkCost; }
        if (enemyAlertRange != 0) { stats.enemyAlertRangeTemp += enemyAlertRange; }
        if (skillRange != 0) { stats.skillRangeTemp += skillRange; }
        if (health < 0) { stats.TakeDamage(health * -1, position); }
        if (health > 0) { stats.Heal(health); }
        foreach (var item in items) {
            item.Call(position, origin, Signal.Attack);
        }
        if (particles) { EffectManager.i.AttachSingleToGO(position, particles);}
        yield return new WaitForSeconds(0f);
    }

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal == Signal.SetTarget) { target = position.gameobjectGO();return; }
        if(signal == Signal.StartOfTurn) {
            counter++;
            if (counter > durationTotal) {
                if (target) {
                    Debug.Log(target);
                    target.GetComponent<Inventory>().statusEffectsToRemove.Add(this);
                }

                return;
            }
        }
        if (signal != onSignal) { return; }
        Debug.Log("Status Effect Call");
        if (!target) { Debug.LogError("No target set for Status Effect " + this.name); return; }
        health += healthChangeAddition;
        var item = target.GetComponent<Inventory>().mainHand;
        var weapon = item as Weapon;
        if (weapon == null) { goto Stats; }
        weapon.damageTemp += damage;
        Debug.Log(weapon + " " + weapon.damageMultipleTemp);
        weapon.damageMultipleTemp += damageMultiple;
        if (weapon.rangeBase > 1) {
            weapon.rangeTemp += rangedWeaponRange;
        }

    Stats:
        this.position = position;
        this.origin = origin;
        GridManager.i.InsertToStack(this);
    }
    public override string Description() {
        string description = name + ":\n";
        if (damage != 0) { description += damage + " Weapon Damage\n"; }
        if (damageMultiple != 0) { description += damageMultiple + " Times Weapon Damage\n"; }
        if (rangedWeaponRange != 0) { description += rangedWeaponRange + " Weapon Range\n"; }
        if (armour != 0) { description += armour + " Armour\n"; }
        if (actionPoints != 0) { description += actionPoints + " Base AP\n"; }
        if (throwingRange != 0) { description += throwingRange + " Throwing Range\n"; }
        if (fistDamage != 0) { description += fistDamage + " Fist Damage\n"; }
        if (walkCost != 0) { description += walkCost + " Walk Cost\n"; }
        if (enemyAlertRange != 0) { description += enemyAlertRange + " Enemy Alert Range\n"; }
        if (skillRange != 0) { description += skillRange + " Skill Range\n"; }
        if (health != 0) { description += health + " Health\n"; }
        if (healthChangeAddition != 0) { description += healthChangeAddition + " Added Each Turn\n"; }
        return description;
    }
}
