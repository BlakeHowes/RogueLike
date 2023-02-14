using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Equipment", menuName = "Items/Equipment")]
public class Equipment : ItemAbstract
{
    //Optional sprite for overlying onto character model
    public Sprite wornSprite;
    public bool hideHair;
    public Vector3Int wornOffset;
    [Header("Base Stats")]
    public int damageBase;
    public int maxHealthBase;
    public int armourBase;

    [Header("Temporary Stats")]
    [NonSerialized] public int damageTemp;
    [NonSerialized] public int maxHealthTemp;
     public int armourTemp;

    public void ResetTempStats() {
        damageTemp = damageBase;
        maxHealthTemp = maxHealthBase;
        armourTemp = armourBase;
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override void Call(Vector3Int position, Vector3Int origin,Signal signal) {
        var originCharacter = origin.gameobjectSpawn();
        if (originCharacter == null) { return; }
        if(signal == Signal.CreateSkill) {
        }
        foreach (ItemAbstract mod in Modifiers) {
            mod.Call(position, origin, signal);
        }

        if (signal != Signal.CalculateStats) { return; }
        ResetTempStats();
        var targetStats = originCharacter.GetComponent<Stats>();
        targetStats.maxHealthTemp += maxHealthTemp;
        targetStats.armourTemp += armourTemp;
        var mainHand = originCharacter.GetComponent<Inventory>().mainHand;
        if (mainHand != null) { 
            var weapon = mainHand as Weapon;
            weapon.damageTemp += damageTemp;
        }
    }

    public override string Description() {
        var description = "";

        if (armourTemp > 0) { description += " Armour: +"+ armourTemp; }
        if (maxHealthTemp > 0) { description +=" Max Health: +"+ maxHealthTemp; }
        if (damageTemp > 0) { description += "Damage: +"+ damageTemp; }

        foreach (ItemAbstract item in Modifiers) {
            description += item.Description();
        }
        return description;
    }
}
