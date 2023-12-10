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
    public List<SkillSlot> skillSlots = new List<SkillSlot>();
    public List<ItemAbstract> skills = new List<ItemAbstract>();
    public List<ItemAbstract> partyInventory = new();
    Inventory currentInventory;
    public GlobalValues globalValues;
    public bool throwItem;
    public void Awake() {
        i = this;
        globalValues = Manager.GetGlobalValues();
    }

    public GameObject InstantiateGo(GameObject go) {
        var clone = Instantiate(go);
        clone.name = go.name;
        return clone;
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

    public void EquipItem(ItemAbstract item) {
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
        List<EquipmentSlot> slots = new List<EquipmentSlot>();
        foreach (Transform child in equipmentLayout.transform) { slots.Add(child.GetComponent<EquipmentSlot>()); }
        if (item is Weapon) {
            var weapon = item as Weapon;
            if(!inventory.mainHand || weapon.twoHanded || inventory.offHand) {
                slots[0].Equip(item);
                return;
            }
            if (inventory.mainHand) { if (inventory.GetMainHandAsWeapon().twoHanded) { slots[0].Equip(item); return; } }
            slots[1].Equip(item);
            return;
        }
        if(item is Equipment) {
            var equipment = item as Equipment;
            switch (equipment.equipmentType) {
                case ItemStatic.EquipmentType.offHand:
                    if (inventory.mainHand) { if (inventory.GetMainHandAsWeapon().twoHanded) { slots[0].RemoveItem(inventory); } }
                    slots[1].Equip(item); return;
                case ItemStatic.EquipmentType.helmet: slots[2].Equip(item);  return;
                case ItemStatic.EquipmentType.armour: slots[3].Equip(item);  return;
                case ItemStatic.EquipmentType.trinket:
                    if (!slots[4].item) { slots[4].Equip(item); return; }
                    if (!slots[5].item) { slots[5].Equip(item); return; }
                    if (!slots[6].item) { slots[6].Equip(item); return; }
                    if (!slots[7].item) { slots[7].Equip(item); return; }
                    slots[4].Equip(item);  return;
            }
        }
    }

    public void UpdateEquipmentSlots(Inventory inventory) {
        if (equipmentLayout == null) { equipmentLayout= LayoutReferences.i.equipmentLayout; }
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
        var items = inventory.items;
        if (globalValues.usePartyInventory) {
            items = partyInventory;
            inventoryLength = partyInventory.Count;
        }

        if (inventoryLayout == null) { inventoryLayout = LayoutReferences.i.inventoryLayout; }

        foreach (Transform slot in inventoryLayout.transform) {
            if (i < inventoryLength) {
                var item = items[i];
                if (!item) { continue; }
                slot.GetComponent<InventorySlot>().AddItem(item); 
                slot.gameObject.SetActive(true);
            } 
            else { slot.gameObject.SetActive(false); }
            i++;
        }
    }

    public void UpdateSkillSlotGraphics() {
        foreach (SkillSlot slot in skillSlots) {
            slot.UpdateGraphic();
        }
    }

    public void CreateSkillSlots(Inventory inventory) {
        int i = 0;
        int skillsLength = inventory.skills.Count;
        foreach (SkillSlot slot in skillSlots) {
            if (i < skillsLength) {
                var skill = inventory.skills[i];
                if (!skill) { continue; }
                slot.AddSkill(skill as Skill);
                slot.gameObject.SetActive(true);
            }
            else { slot.ResetGraphic(); }
            i++;
        }
    }

    public void UpdateInventory(GameObject character) { //THIS HAPPENS A LOT
        var inventory = character.GetComponent<Inventory>();
        var position = character.Position();
        UpdateEquipmentSlots(inventory);
        CheckHideOffhand(inventory);
        UpdateInvetorySlots(inventory);
        //CharacterSpriteGenerator.CreateCharacterSprite(character);
        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
        CreateSkills(inventory,position); //THIS HAPPENS A LOT
    }

    public void AddSkill(Skill skill) {
        currentInventory.skills.Add(skill);
    }

    public void CreateSkills(Inventory inventory, Vector3Int position) {
        inventory.skills.Clear();
        currentInventory = inventory;
        inventory.CallEquipment(position, position, ItemStatic.CallType.AddSkillToHotbar);
        CreateSkillSlots(inventory);
        foreach(var item in inventory.traits) {
            if(item is not Skill) { continue; }
            if (inventory.skills.Contains(item)) { continue; }
            inventory.skills.Add(item);
        }
    }
}
