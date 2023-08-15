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
    //public SetItem setItem;
    public ItemAbstract wait;
    public void Awake() {
        i = this;
    }

    public void ThrowItem(Vector3Int position,Vector3Int origin,ItemAbstract item,Inventory inventory) {
        if (!position.InRange(origin, inventory.GetComponent<Stats>().throwingRangeTemp)) { return; }
        var landPos = GridManager.i.itemMethods.FloodFillDropItem(position,false,item);

        EffectManager.i.ShootBasicProjectile(position, origin, item.tile.sprite, false);
        bool itemOverTotalUses = false;
        /*
        if (item is Item) { 
            var item2 = item as Item;
            item2.thrownLocation = landPos;
            item.Call(position, origin, CallType.Attack, inventory.gameObject, null); 
            if(item2.timesUsed >= item2.totalUses) { itemOverTotalUses = true; }
        }

        item.position = position;
        item.origin = origin;
        if (position.GameObjectGo() && item is Weapon) {
            var weapon = item as Weapon;
            weapon.parentGO = inventory.gameObject;
            GridManager.i.AddToStack(item);
        }
       

        if (landPos != position && !itemOverTotalUses) {
            wait.Call(position, origin, CallType.Attack, inventory.gameObject, null);
            EffectManager.i.ShootBasicProjectile(landPos, position, item.tile.sprite, false);
        }


        setItem.item = item;
        setItem.position = landPos;
        if (!itemOverTotalUses) { GridManager.i.AddToStack(setItem);  }
        

        if (inventory.items.Contains(item)) {
            inventory.items.Remove(item);
        }
        */
    }
}
