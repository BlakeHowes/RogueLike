
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
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

    public Vector3 mainHandOffset;
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
        RenderTexture renderTex = RenderTexture.GetTemporary(source.width,source.height,0,RenderTextureFormat.Default,RenderTextureReadWrite.Linear);
        Graphics.Blit(source, renderTex);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = renderTex;
        Texture2D readableText = new Texture2D(source.width, source.height);
        readableText.ReadPixels(new Rect(0, 0, renderTex.width, renderTex.height), 0, 0);
        readableText.filterMode = FilterMode.Point;
        readableText.Apply();
        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(renderTex);
        return readableText;
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

    public void CreateCharacterSprite(GameObject character,ItemAbstract armour,ItemAbstract helmet) {
        var stats = character.GetComponent<Stats>();
        var baseSprite = stats.baseSprite;
        if (baseSprite == null) return;
        Texture2D baseTexture = duplicateTexture(baseSprite.texture);
        if (helmet != null) {
            baseTexture = PasteSprite(helmet.tile.sprite, baseTexture, new Vector3Int(1, 18));
        }
        else {
            if (stats.baseHair != null)
                baseTexture = PasteSprite(stats.baseHair, baseTexture, new Vector3Int(1, 18));
        }

        if (armour != null) {
            Equipment armourItem = armour as Equipment;
            baseTexture = PasteSprite(armourItem.wornSprite, baseTexture, new Vector3Int(1,1));
        }
        var sprite = Sprite.Create(baseTexture, new Rect(0, 0, 18, 34), new Vector2(0.5f, 0.125f), 16);
        sprite.name = character.name + " Generated";
        character.GetComponent<SpriteRenderer>().sprite = sprite;
    }

    public void CreateEquipmentSprite(string slotName,GameObject character,Vector3 offset) {
        var clone = new GameObject(slotName);
        var rend = clone.AddComponent<SpriteRenderer>();
        clone.transform.SetParent(character.transform);
        clone.transform.position = character.transform.position + offset;
    }

    public void UpdateEquipmentSprites(Inventory inventory) {
        if(inventory.transform.childCount == 0) {
            CreateEquipmentSprite("MainHandSprite", inventory.gameObject, mainHandOffset);
            CreateEquipmentSprite("OffHandSprite", inventory.gameObject, new Vector3(-0.42f, 0.35f, 0));
        }
        Debug.Log("Inventory Sprites Made");
        if (inventory.gameObject.transform.childCount >0) {
            var mainhandgameobject = inventory.transform.Find("MainHandSprite");
            if(mainhandgameobject != null) {
                if (inventory.mainHand != null) {
                    mainhandgameobject.GetComponent<SpriteRenderer>().sprite = inventory.mainHand.tile.sprite;
                }
                else {
                    mainhandgameobject.GetComponent<SpriteRenderer>().sprite = null;
                }
            }

            var offHandGameObject = inventory.transform.Find("OffHandSprite");
            if(offHandGameObject != null) {
                if (inventory.offHand != null) {
                    offHandGameObject.GetComponent<SpriteRenderer>().sprite = inventory.offHand.tile.sprite;
                }
                else {
                    offHandGameObject.GetComponent<SpriteRenderer>().sprite = null;
                }
            }
        }
        
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

    public void UpdateInventory() {
        //Equipment
        foreach (Transform child in equipmentLayout.transform) {
            Destroy(child.gameObject);
        }
        var character =PartyManager.i.currentCharacter;
        var inventory = character.GetComponent<Inventory>();
        //Main Hand
        var mainHandItem = inventory.mainHand;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform,mainHandSprite,mainHandItem,ItemAbstract.Type.Weapon);
        //Off Hand
        var offHandItem = inventory.offHand;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, offHandSprite, offHandItem, ItemAbstract.Type.OffHand);
        //Armour
        var helmet = inventory.helmet;
        CreateButton(equipmentButtonPrefab, equipmentLayout.transform, armourSprite, helmet, ItemAbstract.Type.Helmet);
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

        UpdateEquipmentSprites(inventory);
        CreateCharacterSprite(character, armour, helmet);
        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
        //Items
        foreach (Transform child in inventoryLayout.transform) {
            Destroy(child.gameObject);
        }
        var items = PartyManager.i.GetCurrentTurnCharacter().GetComponent<Inventory>().items;
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
            Debug.Log(mod + "MODD");
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
