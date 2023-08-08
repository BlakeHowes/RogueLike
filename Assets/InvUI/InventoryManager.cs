
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager i;
    public GameObject inventoryLayout;
    public GameObject equipmentLayout;
    public GameObject skillLayout;
    public GameObject bagLayout;
    public List<ItemAbstract> skills = new List<ItemAbstract>();
    Inventory currentInventory;
    public void Awake() {
        i = this;
    }

    public void ToggleHideHelmet() {
        var currentCharacter = PartyManager.i.currentCharacter;
        var options = currentCharacter.GetComponent<CCOptions>();
        options.hideHelmet =!options.hideHelmet;
        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
    }

    public void DeselectItems() {
        foreach (Transform child in inventoryLayout.transform) {
            child.gameObject.GetComponent<Image>().color = Color.white;            
        }
        MouseManager.i.itemSelected = null;
    }
    
    public void UpdateEquipmentGO(GameObject go,ItemAbstract item) {
        if (!go) { return; }
        if (item) { go.GetComponent<SpriteRenderer>().sprite = item.tile.sprite;return; }
        go.GetComponent<SpriteRenderer>().sprite = null;
    }

    public void CheckHideOffhand(Inventory inventory) {
        if (!inventory.mainHand) { equipmentLayout.transform.GetChild(1).gameObject.SetActive(true); return; }

        var mainHand = inventory.GetMainHandAsWeapon();
        if (mainHand) {   
            if (!mainHand.twoHanded) {
                equipmentLayout.transform.GetChild(1).gameObject.SetActive(true);
                return;
            }
            if (inventory.offHand) { equipmentLayout.transform.GetChild(1).GetComponent<EquipmentSlot>().RemoveItem(inventory); }
            //equipmentLayout.transform.GetChild(1).gameObject.SetActive(false);
        }
    }

    public void UpdateEquipmentSlots(Inventory inventory) {
        List<EquipmentSlot> slots = new List<EquipmentSlot>();
        foreach (Transform child in equipmentLayout.transform) { slots.Add(child.GetComponent<EquipmentSlot>()); }
        slots[0].SetItem(inventory.mainHand);
        slots[1].SetItem(inventory.offHand);
        slots[2].SetItem(inventory.helmet);
        slots[3].SetItem(inventory.armour);
        slots[4].SetItem(inventory.trinket1);
        slots[5].SetItem(inventory.trinket2);
        slots[6].SetItem(inventory.trinket3);
        slots[7].SetItem(inventory.trinket4);
    }

    public void UpdateInvetorySlots(Inventory inventory) {
        int i = 0;
        int inventoryLength = inventory.items.Count;
        foreach(Transform slot in inventoryLayout.transform) {
            if (i < inventoryLength) {
                var item = inventory.items[i];
                if (!item) { continue; }
                slot.GetComponent<InventorySlot>().AddItem(item); 
                slot.gameObject.SetActive(true);
            } 
            else { slot.gameObject.SetActive(false); }
            i++;
        }
    }

    public void UpdateSkillSlotGraphics() {
        foreach (Transform slot in skillLayout.transform) {
            slot.gameObject.GetComponent<SkillSlot>().UpdateGraphic();
        }
    }

    public void CreateSkillSlots(Inventory inventory) {
        int i = 0;
        int skillsLength = inventory.skills.Count;
    
        foreach (Transform slot in skillLayout.transform) {
            var skillSlot = slot.GetComponent<SkillSlot>();
            if (i < skillsLength) {
                var skill = inventory.skills[i];
                if (!skill) { continue; }
                skillSlot.AddSkill(skill as Skill);
                slot.gameObject.SetActive(true);
            }
            else { skillSlot.ResetGraphic(); }
            i++;
        }
    }


    public void UpdateInventory() { //THIS HAPPENS A LOT
        var character = PartyManager.i.currentCharacter;
        var inventory = character.GetComponent<Inventory>();
        var position = character.Position();
        UpdateEquipmentSlots(inventory);
        CheckHideOffhand(inventory);
        UpdateInvetorySlots(inventory);
        //CharacterSpriteGenerator.CreateCharacterSprite(character);
        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
        CreateSkills(inventory,position); //THIS HAPPENS A LOT
    }

    public void AddSkill(ItemAbstract skill) {
        currentInventory.skills.Add(skill);
    }

    public void CreateSkills(Inventory inventory, Vector3Int position) {
        inventory.skills.Clear();
        currentInventory = inventory;
        inventory.CallEquipment(position, position, ItemStatic.Signal.CreateSkill);
        CreateSkillSlots(inventory);
        foreach(var item in inventory.traits) {
            if (inventory.skills.Contains(item)) { continue; }
            inventory.skills.Add(item);
        }
    }
}
