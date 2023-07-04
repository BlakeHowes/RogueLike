using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MechStatic;

[CreateAssetMenu(fileName = "Shop", menuName = "Mechs/Shop")]
public class Shop : MechAbstract
{
    public override void Call(Vector3Int position,Signal signal) {
        if (signal == Signal.ClickOnWhileStandingOntopOf) {
            var item = position.Item();
            if (!item) { return; }
            var value = GetValue(item);
            if (item is Item) {
                var generalItem = item as Item;
                value = generalItem.shopValue;
                if (generalItem.timesUsed != 0) {
                    return;
                }
            }
            if (item is Weapon) {
                var weapon = item as Weapon;
                value = weapon.shopValue;
            }
            if(item is Equipment) {
                var equipment = item as Equipment;
                value = equipment.shopValue;
            }
            if (!GameUIManager.i.ChangeCoinsValue(value * -1)) { MouseManager.i.blockPickup = true; 
            }
        }

        if(signal == Signal.ItemThrownOnto) {
            Debug.Log("Item on Shop "+position);
            var item = position.Item();
            if (item) {
                var value = GetValue(item);
                Debug.Log("Value Changed");
                GameUIManager.i.ChangeCoinsValue(value);
            }

        }
    }

    public int GetValue(ItemAbstract item) {
        var value = 0;
        if (item is Item) {
            var generalItem = item as Item;
            value = generalItem.shopValue;
        }
        if (item is Weapon) {
            var weapon = item as Weapon;
            value = weapon.shopValue;
        }
        if (item is Equipment) {
            var equipment = item as Equipment;
            value = equipment.shopValue;
        }
        return value;
    }
}
