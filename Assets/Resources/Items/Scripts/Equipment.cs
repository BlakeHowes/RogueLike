using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Equipment", menuName = "Items/Equipment")]
public class Equipment : ItemAbstract {
    public int shopValue;
    public EquipmentType equipmentType;
    public Weight weight; 
    //Optional sprite for overlying onto character model
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public Sprite wornSprite;
    public bool hideHair;
    public Vector3Int wornOffset;
    public string customDescription;

    [Header("Stats")]
    public int maxHealthBase;
    public int armourBase;

    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        foreach (ItemAbstract item in subItems) {
            item.Call(position, origin, signal, parentGO, this);
        }
        if (parentGO == null) { return; }


        if (signal != Signal.CalculateStats) { return; }
        var stats = parentGO.GetComponent<Stats>();
        stats.maxHealthTemp += maxHealthBase;
        stats.armourTemp += armourBase;
        WeightClass(parentGO);
    }

    public void WeightClass(GameObject originCharacter) {
        if (weight == Weight.None || weight == Weight.Light) { return; }
        float accuracyDivision = 0f;
        switch (weight) {
            case Weight.Medium: accuracyDivision = 0f; break;
            case Weight.Heavy: accuracyDivision = 0.4f; break;
            case Weight.Giant: accuracyDivision = 1.2f; break;
        }
        var inventory = originCharacter.GetComponent<Inventory>();
        var mainHand = inventory.mainHand;
        var offHand = inventory.offHand;
        if (mainHand) {
            var weapon = mainHand as Weapon;
            if (weapon.rangeBase != 1) {
                var result = accuracyDivision + ((float)weapon.rangeBase / 7.4f);
                if (result > 1) {
                    weapon.accuracyTemp /= result;
                }

            }
        }
        if (offHand) {
            if (offHand is Weapon) {
                var offHandWeapon = offHand as Weapon;
                if (offHandWeapon.rangeBase != 1) {
                    var result = accuracyDivision + ((float)offHandWeapon.rangeBase / 7.4f);
                    if (result > 1) {
                        offHandWeapon.accuracyTemp /= result;
                    }
                }
            }

        }

    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        var description = "";
        if(weight != Weight.None) { description += "Weight: "+weight + "\n"; }
        description += customDescription;
        if(armourBase > 0) { description += "+" + armourBase + " Armour\n"; }
        if (maxHealthBase > 0) { description += "+" + maxHealthBase + " Max Health\n"; }
        foreach (ItemAbstract item in subItems) {
            description += item.Description();
        }
        return description;
    }
}
