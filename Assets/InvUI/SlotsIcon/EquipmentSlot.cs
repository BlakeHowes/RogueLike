using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static ItemStatic;
public class EquipmentSlot : MonoBehaviour {
    public EquipmentType equipmentType;
    public ItemAbstract item;
    Image image;
    Sprite defaultSprite;
    private GlobalValues globalValues;
    public string trinketNumber;
    public void Awake() {
        globalValues = Manager.GetGlobalValues();
        image = GetComponent<Image>();
        defaultSprite = image.sprite;

    }
    public void Equip() {
        var itemSelected = MouseManager.i.itemSelected;
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
        if (item) { RemoveItem(inventory); }
        if (itemSelected) { EquipItemSelected(inventory,itemSelected); }
        MouseManager.i.itemSelected = null;
        InventoryManager.i.DeselectItems();
        var position = inventory.gameObject.Position();
        PartyManager.i.currentCharacter.GetComponent<Stats>().RefreshCharacter(position);
        InventoryManager.i.UpdateInventory(position);
    }

    public void ChangeCharacterInventory(Inventory inventory, EquipmentType type, ItemAbstract itemReplace) {
        string reference = type.ToString();
        if (type == EquipmentType.trinket) { reference += trinketNumber; }
        var field =inventory.GetType().GetField(reference);
        field.SetValue(inventory, itemReplace);
    }

    public void RemoveItem(Inventory inventory) {
        ChangeCharacterInventory(inventory, equipmentType, null);
        if (inventory.items.Count >= globalValues.maxItems) {
            item.Drop(inventory.gameObject.Position());
        }
        else { inventory.AddItem(item); }

        item = null;
        image.sprite = defaultSprite;
    }

    public void SetItem(ItemAbstract item) {
        this.item = item;
        if (item) {
            if (item.tile) {
                image.sprite = item.tile.sprite; return;
            }

        }
        image.sprite = defaultSprite;
    }

    public void EquipItemSelected(Inventory inventory,ItemAbstract itemSelected) {
        
        if (!inventory.items.Contains(itemSelected)) { return; }
        if(itemSelected is Equipment) {
            var equipment = itemSelected as Equipment;
            if(equipment.equipmentType != equipmentType) { return; }
            ChangeCharacterInventory(inventory, equipment.equipmentType, itemSelected);
        }

        if (itemSelected is Weapon) {
            if (equipmentType == EquipmentType.mainHand) { ChangeCharacterInventory(inventory, EquipmentType.mainHand, itemSelected); }
            if (equipmentType == EquipmentType.offHand) { ChangeCharacterInventory(inventory, EquipmentType.offHand, itemSelected); }
        }


        SetItem(itemSelected);
        inventory.RemoveItem(itemSelected);
    }

    public void EnableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(item, true);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
