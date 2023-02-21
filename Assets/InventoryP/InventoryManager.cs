
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

    public Vector3Int characterOffset;
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
            if(item.tile)
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

    public Texture2D PasteSpriteMask(Texture2D source, Texture2D target,Texture2D mask, Vector3Int offset) {
        var targetWidth = target.width;
        var targetHeight = target.height;
        for (int x = 0; x < source.width; x++) {
            for (int y = 0; y < source.height; y++) {
                if (x > targetWidth || y > targetHeight || x < 0 || y < 0) { continue; }
                if (mask.GetPixel(x + offset.x, y + offset.y).a == 0) { continue; }
                var colour = source.GetPixel(x, y);
                if (colour.a >= 1.0f) { target.SetPixel(x + offset.x, y + offset.y, colour); }
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
        Texture2D baseTexture = duplicateTexture(colouredBody.texture);

        if (options.race.extraPartHead) {
            var colouredPart = ColourReplacer.i.ColourizeSprite(options.race.extraPartHead, options.bodyPalette);
            baseTexture = PasteSprite(colouredPart, baseTexture, options.headOffset + characterOffset);
        }

        if (options.race.extraPartBody) {
            var colouredPart = ColourReplacer.i.ColourizeSprite(options.race.extraPartBody, options.bodyPalette);
            baseTexture = PasteSprite(colouredPart, baseTexture, Vector3Int.zero);
        }

        if (options.face) {
            var colouredFace = ColourReplacer.i.ColourizeSprite(options.face, options.facePalette);
            baseTexture = PasteSprite(colouredFace, baseTexture, options.headOffset+ characterOffset); 
        }
        if (helmet) {
            var helmetEqupment = helmet as Equipment;
            if (helmetEqupment.hideHair) {
                if (options.feature) {
                    var colouredFeature = ColourReplacer.i.ColourizeSprite(options.feature, options.featurePalette);
                    PasteSpriteMask(colouredFeature.texture, baseTexture, options.body.texture, options.headOffset + characterOffset);
                }
                if (options.hair) {
                    var colouredHair = ColourReplacer.i.ColourizeSprite(options.hair, options.hairPalette);
                    PasteSpriteMask(colouredHair.texture, baseTexture, options.body.texture, options.headOffset + characterOffset);
                    goto skipHairAndFeatureWithoutMask;
                }
            }
        }

        if (options.feature) {
            var colouredFeature = ColourReplacer.i.ColourizeSprite(options.feature, options.featurePalette);
            PasteSprite(colouredFeature, baseTexture, options.headOffset + characterOffset);
        }

        if (options.hair != null) {
            var colouredHair = ColourReplacer.i.ColourizeSprite(options.hair, options.hairPalette);
            baseTexture = PasteSprite(colouredHair, baseTexture, options.headOffset+ characterOffset);
        }
        skipHairAndFeatureWithoutMask:
        if (armour) {
            Equipment armourItem = armour as Equipment;
            baseTexture = PasteSprite(armourItem.wornSprite, baseTexture, characterOffset);
        }
        if (helmet != null) {
            baseTexture = PasteSprite(helmet.tile.sprite, baseTexture, options.headOffset+ characterOffset);
        }
        if (inventory.mainHand) {
            var weapon = inventory.mainHand as Weapon;
            baseTexture = PasteSprite(weapon.tile.sprite, baseTexture, weapon.heldOffset+ characterOffset);
            var offset = weapon.heldOffset - new Vector3Int(10, 0, 0);
            if (weapon.duelWield) { baseTexture = PasteSprite(weapon.tile.sprite, baseTexture, offset + characterOffset); }
        }
        if (inventory.offHand) {
            Equipment offHandItem = inventory.offHand as Equipment;
            baseTexture = PasteSprite(offHandItem.tile.sprite, baseTexture, offHandItem.wornOffset + characterOffset);
        }

        var sprite = Sprite.Create(baseTexture, new Rect(0, 0, baseTexture.width, baseTexture.height), new Vector2(0.5f, 0.3125f), 16);
        sprite.name = character.name + " Generated";
        character.GetComponent<SpriteRenderer>().sprite = sprite;
    }
    /*
    private void CreateEquipmentSprite(string slotName,GameObject character) {
        var clone = new GameObject(slotName);
        var rend = clone.AddComponent<SpriteRenderer>();
        clone.transform.SetParent(character.transform);
    }

    private void UpdateEquipmentSprites(Inventory inventory) {
        if(inventory.transform.childCount == 0) {
            CreateEquipmentSprite("MainHandSprite", inventory.gameObject);
            CreateEquipmentSprite("OffHandSprite", inventory.gameObject);
        }
        if (inventory.gameObject.transform.childCount <= 0) { return; }
        var mainhandgameobject = inventory.transform.Find("MainHandSprite");
        var offHandGameObject = inventory.transform.Find("OffHandSprite");
        UpdateEquipmentGO(mainhandgameobject.gameObject, inventory.mainHand);
        if (inventory.offHand) {
            var offHand = inventory.offHand as Equipment;
            offHandGameObject.transform.position = inventory.gameObject.transform.position + offHand.wornOffset;
        }
        if (inventory.mainHand) {
            var weapon = inventory.mainHand as Weapon;
            mainhandgameobject.transform.position = inventory.gameObject.transform.position + weapon.heldOffset;
            if (weapon.duelWield) { UpdateEquipmentGO(offHandGameObject.gameObject, inventory.mainHand); return; }
        }
        UpdateEquipmentGO(offHandGameObject.gameObject, inventory.offHand);
    }
    */
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
        CreateCharacterSprite(inventory.gameObject);
    }

    public void UpdateInventory() {
        
        //Equipment
        foreach (Transform child in equipmentLayout.transform) {
            Destroy(child.gameObject);
        }
        var character = PartyManager.i.currentCharacter;
        var inventory = character.GetComponent<Inventory>();

        CreateButton(equipmentButtonPrefab, equipmentLayout.transform,mainHandSprite, inventory.mainHand, ItemAbstract.Type.Weapon);

        //Two handed item hack
        if (inventory.mainHand) {
            var weapon = inventory.mainHand as Weapon;
            if (weapon.duelWield || weapon.twoHanded) {
                if (inventory.offHand) {
                    inventory.AddItem(inventory.offHand);
                    inventory.offHand = null;
                }
                goto SkipOffhand;
            }
        }
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, offHandSprite, inventory.offHand, ItemAbstract.Type.OffHand);
        SkipOffhand:
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, helmetSprite, inventory.helmet, ItemAbstract.Type.Helmet);
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, armourSprite, inventory.armour, ItemAbstract.Type.Armour);

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
        foreach(var item in inventory.items) {
            var buttonclone = Instantiate(inventoryButtonPrefab,inventoryLayout.transform);
            buttonclone.GetComponent<InventorySlot>().AddItem(item);
        }
    }

    public ItemAbstract GetWeaponOrSkill(Vector3Int position) {
        ItemAbstract item = null;
        if (MouseManager.i.itemSelected) { return MouseManager.i.itemSelected; }
        var go = position.gameobjectGO();
        if (!go) { return null; }
        item = go.GetComponent<Inventory>().mainHand;
        return item;
    }
}
