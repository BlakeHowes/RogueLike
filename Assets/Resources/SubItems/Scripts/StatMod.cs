using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "StatMod", menuName = "Mods/StatMod")]
public class StatMod : ItemAbstract {
    public GameObject particles;
    public int damage;
    public int damageMultiple;
    public int rangedWeaponRange;
    public int maxHealth;
    public int armourMax;
    public int armour;
    public int actionPoints;
    public int throwingRange;
    public int fistDamage;
    public int walkCost;
    public int enemyAlertRange;
    public int skillRange;
    public int health;
    public GameObject target;
    public bool onlyActivateOutOfCombat;
    public Signal onSignal = Signal.CalculateStats;
    public bool originBecomesPosition = true;
    public bool targetSelf;
    public string customDescription;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal == Signal.SetTarget) { target = position.GameObjectGo(); return; }
        if (signal != onSignal) { return; }

        if (onlyActivateOutOfCombat) {
            if (IsSneakAttack(position,origin) == false) { return; }
        }
        if (targetSelf) { position = origin; }
        if (originBecomesPosition) {
            origin = position;
        }
        var character = origin.GameObjectGo();
        if (!character) { return; }
        var stats = origin.GameObjectGo().GetComponent<Stats>();
        var mainHand = origin.GameObjectGo().GetComponent<Inventory>().mainHand;
        Weapon mainHandWeapon = null;
        if (mainHand) { mainHandWeapon = mainHand as Weapon; }
        var offHand = origin.GameObjectGo().GetComponent<Inventory>().offHand;
        Weapon offHandWeapon = null;
        if (offHand) { 
            if(offHand is Weapon) {
                offHandWeapon = offHand as Weapon;
            }

        }
        ModifyWeaponStats(mainHandWeapon,offHandWeapon);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position,particles);}
        ModifyPlayerStats(position,stats);
    }

    public bool IsSneakAttack(Vector3Int position, Vector3Int origin) {
        var ememy = position.GameObjectGo();
        if (!ememy) { return false; }
        if (ememy.tag != "Enemy") { return false; }
        var statsCharacter = origin.GameObjectGo().GetComponent<Stats>();
        if (statsCharacter.state == PartyManager.State.Combat) { return false;}
        return true;
    }

    public void ModifyWeaponStats(Weapon weapon,Weapon offHand) {
        if (weapon) {
            weapon.damageTemp += damage;
            weapon.damageMultipleTemp += damageMultiple;
            if (weapon.rangeBase > 1) {
                weapon.rangeTemp += rangedWeaponRange;
            }
        }

        if (offHand) {
            offHand.damageTemp += damage;
            offHand.damageMultipleTemp += damageMultiple;
            if (offHand.rangeBase > 1) {
                offHand.rangeTemp += rangedWeaponRange;
            }
        }
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public void ModifyPlayerStats(Vector3Int position,Stats stats) {
        if (armourMax != 0) { stats.armourTemp += armourMax; }
        if (armour != 0) { stats.armour += armour; }
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
        string description = "";
        if(customDescription != "") { description += customDescription += "\n"; }
        if (onlyActivateOutOfCombat) { description += "While Unseen By Enemies "; }
        if (damage != 0) { description += damage + " Weapon Damage\n"; }
        if (damageMultiple != 0) { description += damageMultiple +1 + " Times Weapon Damage\n"; }
        if (rangedWeaponRange != 0) { description += rangedWeaponRange + " Weapon Range\n"; }
        if (armourMax != 0) { description += armourMax + " Max Armour\n"; }
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
