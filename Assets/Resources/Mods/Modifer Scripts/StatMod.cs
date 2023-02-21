using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatMod", menuName = "Mods/StatMod")]
public class StatMod : ItemAbstract {
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

    public bool onlyActivateOutOfCombat;
    public Signal onSignal = Signal.CalculateStats;
    public bool originBecomesPosition;
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != onSignal) { return; }
        if (onlyActivateOutOfCombat) {
            var target = position.gameobjectGO();
            if (!target) { return; }
            if (position.gameobjectGO().GetComponent<Stats>().faction != PartyManager.Faction.Enemy) { return; }
            var statsCharacter = origin.gameobjectGO().GetComponent<Stats>();
            if (statsCharacter.state == PartyManager.State.Combat) { return; }
        }
        if (originBecomesPosition) {
            origin = position;
        }
        var stats = origin.gameobjectGO().GetComponent<Stats>();
       

        var item = origin.gameobjectGO().GetComponent<Inventory>().mainHand;
        var weapon = item as Weapon;
        if (weapon == null) { goto Stats; }
        weapon.damageTemp += damage;
        weapon.damageMultipleTemp += damageMultiple;
        if(weapon.rangeBase > 1) {
            weapon.rangeTemp += rangedWeaponRange;
        }

    Stats:
        if (armour != 0) { stats.armourTemp += armour; }
        if (actionPoints != 0) { stats.actionPoints += actionPoints; }
        if (throwingRange != 0) { stats.throwingRangeTemp += throwingRange; }
        if (fistDamage != 0) { stats.fistDamageTemp += fistDamage; }
        if (walkCost != 0) { stats.walkCostTemp += walkCost; }
        if (enemyAlertRange != 0) { stats.enemyAlertRangeTemp += enemyAlertRange; }
        if (skillRange != 0) { stats.skillRangeTemp += skillRange; }
        if (health < 0) { stats.TakeDamage(health * -1, position); }
        if (health > 0) { stats.Heal(health); }
    }
    public override string Description() {
        string description = name +":\n";
        if (onlyActivateOutOfCombat) { description += "While Unseen By Enemies "; }
        if (damage != 0) { description += damage + " Weapon Damage\n"; }
        if (damageMultiple != 0) { description += damageMultiple +1 + " Times Weapon Damage\n"; }
        if (rangedWeaponRange != 0) { description += rangedWeaponRange + " Weapon Range\n"; }
        if (armour != 0) { description += armour + " Armour\n"; }
        if (actionPoints != 0) { description += actionPoints + " Base AP\n"; }
        if (throwingRange != 0) { description += throwingRange + " Throwing Range\n"; }
        if (fistDamage != 0) { description += fistDamage + " Fist Damage\n"; }
        if (walkCost != 0) { description += walkCost + " Walk Cost\n"; }
        if (enemyAlertRange != 0) { description += enemyAlertRange + " Enemy Alert Range\n"; }
        if (skillRange != 0) { description += skillRange + " Skill Range\n"; }
        if (health != 0) { description += health + " Health\n"; }
        return description;
    }
}
