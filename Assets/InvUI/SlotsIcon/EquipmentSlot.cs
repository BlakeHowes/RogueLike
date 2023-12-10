using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using static ItemStatic;
public class EquipmentSlot : MonoBehaviour {
    public EquipmentType equipmentType;
    public ItemAbstract item;
    Image image;
    Sprite defaultSprite;
    private GlobalValues globalValues;
    public string trinketNumber;
    bool isMouseHoveringOverThisUIElement;
    public void Awake() {
        globalValues = Manager.GetGlobalValues();
        image = GetComponent<Image>();
        defaultSprite = image.sprite;

    }
    public void Equip() {
        var itemSelected = MouseManager.i.itemSelected;
        var currentCharacter = PartyManager.i.currentCharacter;
        var inventory = currentCharacter.GetComponent<Inventory>();
        if (item) { RemoveItem(inventory); }
        if (itemSelected) { EquipItemSelected(inventory,itemSelected); }
        MouseManager.i.itemSelected = null;
        InventoryManager.i.DeselectItems();
        var position = inventory.gameObject.Position();

        InventoryManager.i.UpdateInventory(currentCharacter);
        PartyManager.i.currentCharacter.GetComponent<Stats>().RefreshCharacter(position);
        CharacterSpriteGenerator.CreateCharacterSprite(inventory.gameObject);
        GameUIManager.i.uiTilemap.ClearAllTiles();
    }

    public void Equip(ItemAbstract itemToEquip) {
        var currentCharacter = PartyManager.i.currentCharacter;
        var inventory = currentCharacter.GetComponent<Inventory>();
        if (item) { RemoveItem(inventory); }
        if (itemToEquip) { EquipItemSelected(inventory, itemToEquip); }
        InventoryManager.i.DeselectItems();
        var position = inventory.gameObject.Position();

        InventoryManager.i.UpdateInventory(currentCharacter);
        PartyManager.i.currentCharacter.GetComponent<Stats>().RefreshCharacter(position);
        CharacterSpriteGenerator.CreateCharacterSprite(inventory.gameObject);
        GameUIManager.i.uiTilemap.ClearAllTiles();
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
            item.Drop(inventory.gameObject.Position(),true);
        }
        else { inventory.AddItem(item); }

        item = null;
        image.sprite = defaultSprite;
        if(isMouseHoveringOverThisUIElement) {
            GameUIManager.i.tooltipGameObject.SetActive(false); 
        }
    }

    public void SetItem(ItemAbstract item) {
        this.item = item;
        if (!gameObject.transform.parent.transform.parent.gameObject.activeSelf){ return; }
        if (item) {
            if (item.tile) {
                image.sprite = item.tile.sprite; return;
            }

        }
        if(image)image.sprite = defaultSprite;
    }

    public void EquipItemSelected(Inventory inventory,ItemAbstract itemSelected) {
        if(itemSelected is not Equipment && itemSelected is not Weapon) { return; }
        if(itemSelected is Equipment) {
            var equipment = itemSelected as Equipment;
            if(equipment.equipmentType != equipmentType) { return; }
            ChangeCharacterInventory(inventory, equipment.equipmentType, itemSelected);
            SetItem(itemSelected);
            inventory.RemoveItem(itemSelected);
            return;
        }

        if (itemSelected is Weapon) {
            var weapon = itemSelected as Weapon;
            if(equipmentType != EquipmentType.mainHand && equipmentType != EquipmentType.offHand) { return; }
            if(equipmentType == EquipmentType.offHand && weapon.twoHanded) { return; }
            if (equipmentType == EquipmentType.mainHand) { ChangeCharacterInventory(inventory, EquipmentType.mainHand, itemSelected); }
            if (equipmentType == EquipmentType.offHand) { ChangeCharacterInventory(inventory, EquipmentType.offHand, itemSelected); }
        }


        SetItem(itemSelected);
        inventory.RemoveItem(itemSelected);
    }

    public void EnableToolTip() {
        isMouseHoveringOverThisUIElement = true;
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(item, true);
    }

    public void DisableToolTip() {
        isMouseHoveringOverThisUIElement = false;
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
