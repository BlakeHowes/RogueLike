using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "Equipment", menuName = "Items/Equipment")]
public class Equipment : ItemAbstract {
    public int shopValue;
    public int armour;
    public EquipmentType equipmentType;
    public Weight weight;
    public Sprite wornSprite;
    public string customDescription;
    public Vector3Int wornOffset;
    public bool hideHair;

    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
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
                    originCharacter.GetComponent<Stats>().meleeAccuracyMultiple /= result;
                }

            }
        }
    }
}
