using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
public class Actions : MonoBehaviour
{
    public static Actions i;
    public float actionPoints;
    public float walkCost;
    public float pickupCost;
    public float handCost;
    public int throwRange;
    public ActionContainer setItem;
    public ItemAbstract wait;
    public void Awake() {
        i = this;
    }

    public bool IsSellingAtShop(Vector3Int position) {
        var mech = position.Mech();
        if (mech) {
            if (mech is Shop) {
                return true;
            }
        }
        return false;
    }

    public void ThrowItem(Vector3Int position,Vector3Int origin,ItemAbstract item,Inventory inventory) {
        if (!position.InRange(origin, inventory.GetComponent<Stats>().throwingRangeTemp)) { return; }
        var landPos = GridManager.i.itemMethods.FloodFillDropItem(position,false,item);
        EffectManager.i.SpinningThrowProjectile(position, origin, item.tile.sprite);

        if (IsSellingAtShop(position)) {
            if (inventory.items.Contains(item)) {
                inventory.items.Remove(item);
            }
            setItem.itemValue = item;
            setItem.action.Condition(landPos, origin, inventory.gameObject, null, null, setItem);
            return;
        }

        if (item is Weapon) {
            var weapon = item as Weapon;
            if(weapon.weaponType == WeaponType.melee) {
                weapon.CallIgnoringRange(position, origin, inventory.gameObject, CallType.OnActivate);
            }
        }
        else {
            item.Call(position, origin, inventory.gameObject, CallType.OnActivate);
        }
        if (inventory.items.Contains(item)) {
            inventory.items.Remove(item);
        }

        if (item is GeneralItem) {
            var generalItem = item as GeneralItem;
            if (generalItem.destroyOnUse) {
                return;
            }
        }
        setItem.itemValue = item;
        setItem.action.Condition(landPos, origin, inventory.gameObject, null, null, setItem);
    }
}
