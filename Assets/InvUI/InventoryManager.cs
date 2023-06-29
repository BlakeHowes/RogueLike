
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager i;
    public Tilemap inventoryTilemap;
    public int width;
    public int height;
    public GameObject inventoryLayout;
    public GameObject equipmentLayout;

    public Sprite mainHandSprite;
    public Sprite offHandSprite;
    public Sprite helmetSprite;
    public Sprite armourSprite;
    public Sprite trinketSprite;

    public Vector3Int characterOffset;
    public void Awake() {
        i = this;
    }

    public void DeselectItems() {
        foreach (Transform child in inventoryLayout.transform) {
            child.gameObject.GetComponent<Image>().color = Color.white;            
        }
        MouseManager.i.itemSelected = null;
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

    public void AddSprite(Sprite sprite,CCPalette palette, Texture2D baseTexture,Vector3Int offset) {
        PasteSprite(ColourReplacer.i.ColourizeSprite(sprite, palette), baseTexture, offset);
    }

    public void AddSpriteMasked(Sprite sprite, CCPalette palette, Texture2D baseTexture, Vector3Int offset, bool mask) {
        if (mask) { PasteSpriteMask(ColourReplacer.i.ColourizeSprite(sprite, palette).texture, baseTexture, baseTexture, offset); return; }
        PasteSprite(ColourReplacer.i.ColourizeSprite(sprite, palette), baseTexture, offset);
    }
    public void CreateCharacterSprite(GameObject character) {
        character.TryGetComponent(out CCOptions options);
        Inventory inventory = character.GetComponent<Inventory>();
        if (!options) { return; }
        var armour = inventory.armour;
        var helmet = inventory.helmet;
        if (options.body == null) return;
        var colouredBody = ColourReplacer.i.ColourizeSprite(options.body, options.bodyPalette);
        Texture2D baseTexture = duplicateTexture(colouredBody.texture);
        Vector3Int headOffset = options.headOffset + characterOffset;
        if (options.race.extraPartHead) { AddSprite(options.race.extraPartHead, options.bodyPalette, baseTexture, headOffset);}
        if (options.race.extraPartBody) { AddSprite(options.race.extraPartBody, options.bodyPalette, baseTexture, Vector3Int.zero); }
        if (options.face) { AddSprite(options.face, options.facePalette, baseTexture, headOffset); }

        var hide = false;
        if (helmet) { var helmetEqupment = helmet as Equipment; hide = helmetEqupment.hideHair; }
        if (options.feature) { AddSpriteMasked(options.feature, options.featurePalette, baseTexture, headOffset,hide); }
        if (options.hair) { AddSpriteMasked(options.hair, options.hairPalette, baseTexture, headOffset,hide); }

        if (armour) { Equipment armourItem = armour as Equipment; 
            baseTexture = PasteSprite(armourItem.wornSprite, baseTexture, characterOffset); }
        if (helmet != null) {baseTexture = PasteSprite(helmet.tile.sprite, baseTexture, options.headOffset+ characterOffset); }

        if (inventory.mainHand) {var weapon = inventory.mainHand as Weapon;
            baseTexture = PasteSprite(weapon.tile.sprite, baseTexture, weapon.heldOffset+ characterOffset);}
        if (inventory.offHand) {
            Vector3Int offset = new Vector3Int(-10, 0);
            if(inventory.offHand is Equipment) {
                Equipment equipment = inventory.offHand as Equipment;
                baseTexture = PasteSprite(equipment.tile.sprite, baseTexture, equipment.wornOffset + characterOffset);
            }
            if (inventory.offHand is Weapon) {
                Weapon weapon = inventory.offHand as Weapon;
                baseTexture = PasteSprite(weapon.tile.sprite, baseTexture, weapon.heldOffset + characterOffset + offset);
            }
        }
            

        var sprite = Sprite.Create(baseTexture, new Rect(0, 0, baseTexture.width, baseTexture.height), new Vector2(0.5f, 0.3125f), 16);
        sprite.name = character.name + " Generated";
        character.GetComponent<SpriteRenderer>().sprite = sprite;
    }
    
    public void UpdateEquipmentGO(GameObject go,ItemAbstract item) {
        if (!go) { return; }
        if (item) { go.GetComponent<SpriteRenderer>().sprite = item.tile.sprite;return; }
        go.GetComponent<SpriteRenderer>().sprite = null;
    }

    public void CheckHideOffhand(Inventory inventory) {
        if (!inventory.mainHand) { equipmentLayout.transform.GetChild(1).gameObject.SetActive(true); return; }
        if (inventory.mainHand) {
            var weapon = inventory.mainHand as Weapon;
            if (!weapon.twoHanded) {
                equipmentLayout.transform.GetChild(1).gameObject.SetActive(true);
                return;
            }
            if (inventory.offHand) { equipmentLayout.transform.GetChild(1).GetComponent<EquipmentSlot>().RemoveItem(inventory); }
            equipmentLayout.transform.GetChild(1).gameObject.SetActive(false);
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

    public void UpdateInventory() {
        var character = PartyManager.i.currentCharacter;
        var inventory = character.GetComponent<Inventory>();
        UpdateEquipmentSlots(inventory);
        CheckHideOffhand(inventory);
        UpdateInvetorySlots(inventory);
        CreateCharacterSprite(character);
        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
        GameUIManager.i.CreateSkills();
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
