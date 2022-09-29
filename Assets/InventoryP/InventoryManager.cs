
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager i;
    public Tilemap inventoryTilemap;
    public int width;
    public int height;

    public GameObject inventoryButtonPrefab;
    public GameObject inventoryLayout;

    public GameObject equipmentLayout;
    public GameObject equipmentButtonPrefab;

    public Sprite mainHandSprite;
    public Sprite offHandSprite;
    public Sprite armourSprite;
    public Sprite trinketSprite;
    public void Awake() {
        i = this;
    }

    public void ResetSelectionColours() {
        foreach (Transform child in inventoryLayout.transform) {
            child.gameObject.GetComponent<Image>().color = Color.white;
        }
    }

    public void DeselectItems() {
        foreach (Transform child in inventoryLayout.transform) {
            child.gameObject.GetComponent<Image>().color = Color.white;            
        }
        MouseManager.i.itemSelected = null;
    }

    public void CreateButton(GameObject prefab,Transform parent,Sprite sprite,ItemAbstract item,ItemAbstract.Type type) {
        var equipmentclone = Instantiate(prefab, parent);
        equipmentclone.GetComponent<Image>().sprite = sprite;
        equipmentclone.GetComponent<InventorySlot>().slotType = type;
        equipmentclone.GetComponent<InventorySlot>().defaultImage = sprite;
        if (item != null) {
            equipmentclone.GetComponent<InventorySlot>().item = item;
            equipmentclone.GetComponent<Image>().sprite = item.tile.sprite;
        }
    }

    public void CreateEquipmentSprite(string slotName,GameObject character,Vector3 offset) {
        var clone = new GameObject(slotName);
        var rend = clone.AddComponent<SpriteRenderer>();
        clone.transform.SetParent(character.transform);
        clone.transform.position = character.transform.position + offset;
    }

    public void UpdateEquipmentSprites(Inventory inventory) {
        if(inventory.transform.childCount == 0) {
            CreateEquipmentSprite("MainHandSprite", inventory.gameObject, new Vector3(0.6f, 0.74f, 0));
            CreateEquipmentSprite("OffHandSprite", inventory.gameObject, new Vector3(-0.42f, 0.35f, 0));
        }
        Debug.Log("Inventory Sprites Made");
        if (inventory.gameObject.transform.childCount >0) {
            var mainhandgameobject = inventory.transform.Find("MainHandSprite").gameObject;
            if (inventory.mainHand != null) {
                mainhandgameobject.GetComponent<SpriteRenderer>().sprite = inventory.mainHand.tile.sprite;}
            else {
                mainhandgameobject.GetComponent<SpriteRenderer>().sprite = null;}

            var offHandGameObject = inventory.transform.Find("OffHandSprite").gameObject;
            if (inventory.offHand != null) {
                offHandGameObject.GetComponent<SpriteRenderer>().sprite = inventory.offHand.tile.sprite;
            }
            else {
                offHandGameObject.GetComponent<SpriteRenderer>().sprite = null;
            }

        }

    }

    public void AddType(ItemAbstract item,ItemAbstract.Type slotType) {
        switch (slotType) {
            case ItemAbstract.Type.Consumable: break;
            case ItemAbstract.Type.Weapon: PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand = item; break;
            case ItemAbstract.Type.OffHand: PartyManager.i.currentCharacter.GetComponent<Inventory>().offHand = item; break;
            case ItemAbstract.Type.Armour: PartyManager.i.currentCharacter.GetComponent<Inventory>().armour = item; break;
            case ItemAbstract.Type.Trinket: PartyManager.i.currentCharacter.GetComponent<Inventory>().trinket1 = item; break;
        }
        PartyManager.i.currentCharacter.GetComponent<Stats>().RecalculateStats();
    }

    public void RemoveType(ItemAbstract item, ItemAbstract.Type slotType) {
        switch (slotType) {
            case ItemAbstract.Type.Consumable: break;
            case ItemAbstract.Type.Weapon: PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand = null; break;
            case ItemAbstract.Type.OffHand: PartyManager.i.currentCharacter.GetComponent<Inventory>().offHand = null; break;
            case ItemAbstract.Type.Armour: PartyManager.i.currentCharacter.GetComponent<Inventory>().armour = null; break;
            case ItemAbstract.Type.Trinket: PartyManager.i.currentCharacter.GetComponent<Inventory>().trinket1 = null; break;
        }
        PartyManager.i.currentCharacter.GetComponent<Stats>().RecalculateStats();
    }

    public void UpdateInventory() {
        //Equipment
        foreach (Transform child in equipmentLayout.transform) {
            Destroy(child.gameObject);
        }
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>();
        //Main Hand
        var mainHandItem = inventory.mainHand;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform,mainHandSprite,mainHandItem,ItemAbstract.Type.Weapon);
        //Off Hand
        var offHandItem = inventory.offHand;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, offHandSprite, offHandItem, ItemAbstract.Type.OffHand);
        //Armour
        var armour = inventory.armour;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, armourSprite, armour, ItemAbstract.Type.Armour);
        //Trinket 1
        var trinket1 = inventory.trinket1;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, trinketSprite, trinket1, ItemAbstract.Type.Trinket);
        //Trinket 2
        var trinket2 = inventory.trinket2;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, trinketSprite, trinket1, ItemAbstract.Type.Trinket);

        UpdateEquipmentSprites(inventory);

        //Items
        foreach (Transform child in inventoryLayout.transform) {
            Destroy(child.gameObject);
        }
        var items = PartyManager.i.currentCharacter.GetComponent<Inventory>().items;
        int i = 0;
        int totalItems = items.Count;
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                if (i == totalItems) {
                    return;
                }
                var buttonclone =Instantiate(inventoryButtonPrefab);
                buttonclone.transform.SetParent(inventoryLayout.transform, false);
                buttonclone.GetComponent<InventorySlot>().AddItem(items[i]);
                buttonclone.GetComponent<Image>().sprite = items[i].tile.sprite;
                buttonclone.GetComponent<Image>().color = items[i].tile.color;
                i++;
            }
        }
    }


    //Maybe Move this later
    public void ApplyModifiers(List<ItemAbstract> Modifiers,Vector3Int position,Vector3Int origin) {
        List<ItemAbstract> missingmods = new List<ItemAbstract>();
        foreach (ItemAbstract mod in Modifiers) {
            if (mod == null) {
                missingmods.Add(mod);
                continue;
            }
            mod.Call(position, origin);
        }
        foreach (ItemAbstract mod in missingmods) {
            Modifiers.Remove(mod);
        }
    }
}
