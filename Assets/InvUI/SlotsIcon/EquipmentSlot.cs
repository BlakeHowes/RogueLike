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

    public string trinketNumber;
    public void Awake() {
        image = GetComponent<Image>();
        defaultSprite = image.sprite;
    }
    public void Equip() {
        var itemSelected = MouseManager.i.itemSelected;
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
        if (item) { RemoveItem(inventory); }
        if (itemSelected) { EquipItemSelected(inventory,itemSelected); }
        InventoryManager.i.UpdateInventory();
        MouseManager.i.itemSelected = null;
        InventoryManager.i.DeselectItems();
    }

    public void ChangeCharacterInventory(Inventory inventory, EquipmentType type, ItemAbstract itemReplace) {
        string reference = type.ToString();
        if (type == EquipmentType.trinket) { reference += trinketNumber; }
        var field =inventory.GetType().GetField(reference);
        field.SetValue(inventory, itemReplace);
    }

    public void RemoveItem(Inventory inventory) {
        ChangeCharacterInventory(inventory, equipmentType, null);
        if (inventory.items.Count >= inventory.maxItems) {
            item.Drop(inventory.gameObject.position());
        }
        else { inventory.AddItem(item); }

        item = null;
        image.sprite = defaultSprite;
    }

    public void SetItem(ItemAbstract item) {
        this.item = item;
        if (item) { image.sprite = item.tile.sprite;return; }
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