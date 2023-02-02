using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquipmentSlot : MonoBehaviour {
    public ItemAbstract.Type type;
    public ItemAbstract item;

    public void Equip() {
        var itemSelected = MouseManager.i.itemSelected;
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
        var inventoryItems = inventory.items;
        if (item) { inventoryItems.Add(item); }
    }
}
