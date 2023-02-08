
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.TextCore.Text;
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
    public Sprite helmetSprite;
    public Sprite armourSprite;
    public Sprite trinketSprite;

    public Vector3 mainHandOffset = new Vector3(0.6f,0.499f,0);
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

    Texture2D duplicateTexture(Texture2D source) {
        var texture = new Texture2D(source.width, source.height);
        texture.SetPixels(source.GetPixels());
        texture.filterMode = FilterMode.Point;
        texture.Apply();
        return texture;
    }

    public Texture2D PasteSprite(Sprite source, Texture2D target,Vector3Int offset) {
        var targetWidth = target.width;
        var targetHeight = target.height;
        Texture2D sourceTex = source.texture;
        for (int x = 0; x < sourceTex.width; x++) {
            for (int y = 0; y < sourceTex.height; y++) {
                if (x < targetWidth && y < targetHeight && x >= 0 && y >= 0) {
                    var colour = sourceTex.GetPixel(x, y);
                    if(colour.a >= 1.0f) {
                        target.SetPixel(x + offset.x, y + offset.y, colour);
                    }
                }
            }
        }
        target.Apply();
        return target;
    }

    public void CreateCharacterSprite(GameObject character) {
        character.TryGetComponent(out CCOptions options);
        if (!options) { return; }

        var inventory = character.GetComponent<Inventory>();
        var armour = inventory.armour;
        var helmet = inventory.helmet;
        if (options.body == null) return;
        var colouredBody = ColourReplacer.i.ColourizeSprite(options.body, options.bodyPalette);
        Debug.Log("After Colourizer");
        Texture2D baseTexture = duplicateTexture(colouredBody.texture);
        
        if (options.face) {
            var colouredFace = ColourReplacer.i.ColourizeSprite(options.face, options.facePalette);
            baseTexture = PasteSprite(colouredFace, baseTexture, options.headOffset); 
        }
        if (helmet) {
            var helmetEqupment = helmet as Equipment;
            if (helmetEqupment.hideHair) { goto skipHair; }
        }
        if (options.hair != null) {
            var colouredHair = ColourReplacer.i.ColourizeSprite(options.hair, options.hairPalette);
            baseTexture = PasteSprite(colouredHair, baseTexture, options.headOffset);
        }
        skipHair:
        if (armour) {
            Equipment armourItem = armour as Equipment;
            baseTexture = PasteSprite(armourItem.wornSprite, baseTexture, Vector3Int.zero);
        }
        if (helmet != null) {
            baseTexture = PasteSprite(helmet.tile.sprite, baseTexture, options.headOffset);
        }

        var sprite = Sprite.Create(baseTexture, new Rect(0, 0, baseTexture.width, baseTexture.height), new Vector2(0.5f, 0.125f), 16);
        sprite.name = character.name + " Generated";
        character.GetComponent<SpriteRenderer>().sprite = sprite;
    }

    private void CreateEquipmentSprite(string slotName,GameObject character,Vector3 offset) {
        var clone = new GameObject(slotName);
        var rend = clone.AddComponent<SpriteRenderer>();
        clone.transform.SetParent(character.transform);
        clone.transform.position = character.transform.position + offset;
    }

    private void UpdateEquipmentSprites(Inventory inventory) {
        if(inventory.transform.childCount == 0) {
            CreateEquipmentSprite("MainHandSprite", inventory.gameObject, mainHandOffset);
            CreateEquipmentSprite("OffHandSprite", inventory.gameObject, new Vector3(-0.42f, 0.35f, 0));
        }
        if (inventory.gameObject.transform.childCount <= 0) { return; }
        var mainhandgameobject = inventory.transform.Find("MainHandSprite");
        var offHandGameObject = inventory.transform.Find("OffHandSprite");
        UpdateEquipmentGO(mainhandgameobject.gameObject, inventory.mainHand);
        if (inventory.mainHand) {
            var weapon = inventory.mainHand as Weapon;
            if (weapon.duelWield) { UpdateEquipmentGO(offHandGameObject.gameObject, inventory.mainHand); return; }
        }
        UpdateEquipmentGO(offHandGameObject.gameObject, inventory.offHand);
    }

    public void UpdateEquipmentGO(GameObject go,ItemAbstract item) {
        if (!go) { return; }
        if (item) { go.GetComponent<SpriteRenderer>().sprite = item.tile.sprite;return; }
        go.GetComponent<SpriteRenderer>().sprite = null;
    }

    public void AddType(ItemAbstract item,ItemAbstract.Type slotType) {
        switch (slotType) {
            case ItemAbstract.Type.Consumable: break;
            case ItemAbstract.Type.Weapon: PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand = item; break;
            case ItemAbstract.Type.OffHand: PartyManager.i.currentCharacter.GetComponent<Inventory>().offHand = item; break;
            case ItemAbstract.Type.Helmet: PartyManager.i.currentCharacter.GetComponent<Inventory>().helmet = item; break;
            case ItemAbstract.Type.Armour: PartyManager.i.currentCharacter.GetComponent<Inventory>().armour = item; break;
            case ItemAbstract.Type.Trinket: PartyManager.i.currentCharacter.GetComponent<Inventory>().trinkets.Add(item); break;
        }
    }

    public void RemoveType(ItemAbstract item, ItemAbstract.Type slotType) {
        switch (slotType) {
            case ItemAbstract.Type.Consumable: break;
            case ItemAbstract.Type.Weapon: PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand = null; break;
            case ItemAbstract.Type.OffHand: PartyManager.i.currentCharacter.GetComponent<Inventory>().offHand = null; break;
            case ItemAbstract.Type.Helmet: PartyManager.i.currentCharacter.GetComponent<Inventory>().helmet = null; break;
            case ItemAbstract.Type.Armour: PartyManager.i.currentCharacter.GetComponent<Inventory>().armour = null; break;
            case ItemAbstract.Type.Trinket: PartyManager.i.currentCharacter.GetComponent<Inventory>().trinkets.Remove(item); break;
        }
    }

    public void UpdateSpriteFromItems(Inventory inventory) {
        if (inventory.showWeapons) { UpdateEquipmentSprites(inventory); };
        if (inventory.showArmour) { CreateCharacterSprite(inventory.gameObject); };
    }

    public void UpdateInventory() {
        
        //Equipment
        foreach (Transform child in equipmentLayout.transform) {
            Destroy(child.gameObject);
        }
        var character = PartyManager.i.currentCharacter;
        var inventory = character.GetComponent<Inventory>();
        //Main Hand
        var mainHandItem = inventory.mainHand;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform,mainHandSprite,mainHandItem,ItemAbstract.Type.Weapon);
        //Off Hand
        var offHandItem = inventory.offHand;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, offHandSprite, offHandItem, ItemAbstract.Type.OffHand);
        //Armour
        var helmet = inventory.helmet;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, helmetSprite, helmet, ItemAbstract.Type.Helmet);
        //Trinket 1
        var armour = inventory.armour;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, armourSprite, armour, ItemAbstract.Type.Armour);
        //Trinket 1

        int trinkettotal = 4;
        ItemAbstract trinket = null;
        for (int t = 0; t < trinkettotal; t++) {
            if (inventory.trinkets.Count > t) {
                trinket = inventory.trinkets[t];
            }
            CreateButton(equipmentButtonPrefab, equipmentLayout.transform, trinketSprite, trinket, ItemAbstract.Type.Trinket);
            trinket = null;
        }
        UpdateSpriteFromItems(inventory);

        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
        GameUIManager.i.CreateSkills();
        //Items
        foreach (Transform child in inventoryLayout.transform) {
            Destroy(child.gameObject);
        }
        var items = character.GetComponent<Inventory>().items;      
        int i = 0;
        int totalItems = items.Count;
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                if (i == totalItems) {
                    return;
                }
                if (!items[i]) { items.RemoveAt(i); return; }
                var buttonclone =Instantiate(inventoryButtonPrefab);
                buttonclone.transform.SetParent(inventoryLayout.transform, false);
                buttonclone.GetComponent<InventorySlot>().AddItem(items[i]);
                buttonclone.GetComponent<Image>().sprite = items[i].tile.sprite;
                buttonclone.GetComponent<Image>().color = items[i].tile.color;
                i++;
            }
        }
        
    }
}
