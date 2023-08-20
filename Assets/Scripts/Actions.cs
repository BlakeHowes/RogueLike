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

    public void ThrowItem(Vector3Int position,Vector3Int origin,ItemAbstract item,Inventory inventory) {
        if (!position.InRange(origin, inventory.GetComponent<Stats>().throwingRangeTemp)) { return; }
        var landPos = GridManager.i.itemMethods.FloodFillDropItem(position,false,item);

        EffectManager.i.ShootBasicProjectile(position, origin, item.tile.sprite);
        bool itemOverTotalUses = false;
        if (item is GeneralItem) { 
            var item2 = item as GeneralItem;
            item2.thrownLocation = landPos;
            item.Call(position, origin, inventory.gameObject, CallType.OnActivate); 
            if(item2.timesUsed >= item2.totalUses) { itemOverTotalUses = true; }
        }

        if (position.GameObjectGo() && item is Weapon) {
            var weapon = item as Weapon;
            weapon.Call(position, position, inventory.gameObject, CallType.OnActivate); //This causes a bug, origin shouldnt be position
        }
       
        /*
        if (landPos != position && !itemOverTotalUses) {
            wait.Call(position, origin, inventory.gameObject, CallType.Activate);
            EffectManager.i.ShootBasicProjectile(landPos, position, item.tile.sprite, false);
        }
        */

        if (!itemOverTotalUses) {
            setItem.itemValue = item;
            setItem.action.Condition(position, origin,inventory.gameObject,null,null, setItem);
        }
        

        if (inventory.items.Contains(item)) {
            inventory.items.Remove(item);
        }
    }
}
