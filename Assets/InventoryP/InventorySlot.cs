using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour
{
    public ItemAbstract item;
    public ItemAbstract.Type slotType;
    public Sprite defaultImage;
    public void AddItem(ItemAbstract itemToAdd) {
        item = itemToAdd;
    }

    public void SelectItem() {
        InventoryManager.i.ResetSelectionColours();
        if(MouseManager.i.itemSelected == item) {
            MouseManager.i.itemSelected = null;
            GetComponent<Image>().color = Color.white;
            return;
        }
        MouseManager.i.itemSelected = item;
        GetComponent<Image>().color = Color.yellow;
    }

    public void Equip() {
        var itemSelected = MouseManager.i.itemSelected;
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
        var inventoryItems = inventory.items;
        GetComponent<Image>().sprite = defaultImage;
        //remove already equiped item and add to inventory
        if (item != null) {
            inventoryItems.Add(item);
            InventoryManager.i.RemoveType(item,slotType);
            item = null;
        }

        if (itemSelected == null) {
            Debug.Log("item removed");
            InventoryManager.i.UpdateInventory();
            return;
        }
        //Remove item selected by mouse from inventory
        if(itemSelected.type != slotType) {
            MouseManager.i.itemSelected = null;
            InventoryManager.i.UpdateInventory();
            Debug.Log("Item type different");
            return;
        }
        if (inventoryItems.Contains(itemSelected)) {
            inventoryItems.Remove(itemSelected);
        }

        GetComponent<Image>().sprite = itemSelected.tile.sprite;
        item = itemSelected;
        if (item.type == slotType) {
            InventoryManager.i.AddType(item, slotType);
        }


        MouseManager.i.itemSelected = null;
        InventoryManager.i.UpdateInventory();
    }

    public void EnableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(item);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
