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
        Debug.Log("Item Selected");
        var itemSelected = MouseManager.i.itemSelected;
        ModContainer modContainer = null;
        if (itemSelected is ModContainer) {
            modContainer = itemSelected as ModContainer;
            modContainer.ModItem(item);
            InventoryManager.i.DeselectItems();
            Debug.Log("Mods Added");
            return;
        }

        InventoryManager.i.ResetSelectionColours();
        if(itemSelected == item) {
            InventoryManager.i.DeselectItems();
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

            PartyManager.i.currentCharacter.GetComponent<Stats>().RecalculateStats(); //RECALCUATE TEST
            return;
        }
        //Remove item selected by mouse from inventory
        if(itemSelected.type != slotType) {
            MouseManager.i.itemSelected = null;
            InventoryManager.i.UpdateInventory();
            Debug.Log("Item type different");

            PartyManager.i.currentCharacter.GetComponent<Stats>().RecalculateStats(); //RECALCUATE TEST
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

        PartyManager.i.currentCharacter.GetComponent<Stats>().RecalculateStats(); //RECALCUATE TEST

        MouseManager.i.itemSelected = null;
        InventoryManager.i.UpdateInventory();
    }

    public void EnableToolTip() {
        bool top = false;
        if(transform.parent.gameObject == InventoryManager.i.equipmentLayout) {
            Debug.Log("test");
            top = true;
        }
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(item,top);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
