using Unity.VisualScripting;
using UnityEditor;
using UnityEditor.Presets;
using UnityEngine;
public static class CharacterSpriteGenerator {
    public static Vector3Int characterOffset = new Vector3Int(31, 15, 0);
    public static Texture2D PasteSpriteMask(Texture2D source, Texture2D target, Texture2D mask, Vector3Int offset) {
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

    public static Texture2D CropTexture(Texture2D texture, Sprite sprite) {
        if(sprite.rect.size == texture.Size()) { return sprite.texture; }
        var rect = sprite.textureRect;
        Color[] colours = texture.GetPixels(Mathf.FloorToInt(rect.xMin), Mathf.FloorToInt(rect.yMin), Mathf.FloorToInt(rect.size.x), Mathf.FloorToInt(rect.size.y));
        Texture2D croppedTexture = new Texture2D(Mathf.FloorToInt(rect.size.x), Mathf.FloorToInt(rect.size.y));
        croppedTexture.filterMode = FilterMode.Point;
        croppedTexture.SetPixels(colours);
        croppedTexture.Apply();
        return croppedTexture;
    }

    private static void AddSprite(Sprite sprite, CCPalette palette, Texture2D baseTexture, Vector3Int offset) {
        PasteSprite(ColourizeSprite(sprite, palette), baseTexture, offset);
    }

    private static void AddSpriteMasked(Sprite sprite, CCPalette palette, Texture2D baseTexture, Vector3Int offset, bool mask) {
        if (mask) { PasteSpriteMask(ColourReplacer.i.ColourizeSprite(sprite, palette).texture, baseTexture, baseTexture, offset); return; }
        PasteSprite(ColourizeSprite(sprite, palette), baseTexture, offset);
    }

    private static Texture2D duplicateTexture(Texture2D source) {
        var texture = new Texture2D(source.width, source.height);
        texture.SetPixels(source.GetPixels());
        texture.filterMode = FilterMode.Point;
        texture.Apply();
        return texture;
    }

    private static Texture2D PasteSprite(Sprite source, Texture2D target, Vector3Int offset) {
        var targetWidth = target.width;
        var targetHeight = target.height;
        var texture = CropTexture(source.texture, source);
        for (int x = 0; x < texture.width; x++) {
            for (int y = 0; y < texture.height; y++) {
                if (x < targetWidth && y < targetHeight && x >= 0 && y >= 0) {
                    var colour = texture.GetPixel(x, y);
                    if (colour.a >= 1.0f) {
                        target.SetPixel(x + offset.x, y + offset.y, colour);
                    }
                }
            }
        }
        target.Apply();
        return target;
    }

    public static Sprite CreateCharacterSprite(GameObject character) {
        character.TryGetComponent(out CCOptions options);
        Inventory inventory = character.GetComponent<Inventory>();
        if (!options) { return null; }
        var armour = inventory.armour;
        var helmet = inventory.helmet;
        if (options.body == null) options.body = character.GetComponent<SpriteRenderer>().sprite;
        var colouredBody = ColourizeSprite(options.body, options.bodyPalette);
        Texture2D baseTexture = duplicateTexture(colouredBody.texture);
        Vector3Int headOffset = options.headOffset + characterOffset;
        if (options.race.extraPartHead) { AddSprite(options.race.extraPartHead, options.bodyPalette, baseTexture, headOffset); }
        if (options.race.extraPartBody) { AddSprite(options.race.extraPartBody, options.bodyPalette, baseTexture, Vector3Int.zero); }
        if (options.face) { AddSprite(options.face, options.facePalette, baseTexture, headOffset); }

        var hide = false;
        if (helmet) { var helmetEqupment = helmet as Equipment; hide = helmetEqupment.hideHair; }
        if (options.feature) { AddSpriteMasked(options.feature, options.featurePalette, baseTexture, headOffset, hide); }
        if (options.hair) { AddSpriteMasked(options.hair, options.hairPalette, baseTexture, headOffset, hide); }

        if (armour) {
            Equipment armourItem = armour as Equipment;
            baseTexture = PasteSprite(armourItem.wornSprite, baseTexture, characterOffset);
        }
        if (helmet != null) { baseTexture = PasteSprite(helmet.tile.sprite, baseTexture, options.headOffset + characterOffset); }

        if (inventory.mainHand) {
            var weapon = inventory.mainHand as Weapon;
            baseTexture = PasteSprite(weapon.tile.sprite, baseTexture, weapon.heldOffset + characterOffset);
        }
        if (inventory.offHand) {
            Vector3Int offset = new Vector3Int(-10, 0);
            if (inventory.offHand is Equipment) {
                Equipment equipment = inventory.offHand as Equipment;
                baseTexture = PasteSprite(equipment.tile.sprite, baseTexture, equipment.wornOffset + characterOffset);
            }
            if (inventory.offHand is Weapon) {
                Weapon weapon = inventory.offHand as Weapon;
                baseTexture = PasteSprite(weapon.tile.sprite, baseTexture, weapon.heldOffset + characterOffset + offset);
            }
        }
        var sprite = Sprite.Create(baseTexture, new Rect(0, 0, baseTexture.width, baseTexture.height), new Vector2(0.5f, 0.3125f), 16);
        sprite.name = inventory.gameObject.name + " Generated";
        if(sprite)character.GetComponent<SpriteRenderer>().sprite = sprite;
        return sprite;
    }
    public static Sprite CreateCharacterIconTexture(CCOptions options, Inventory inventory) {
        if (!options) { return null; }
        var armour = inventory.armour;
        var helmet = inventory.helmet;
        var offset = new Vector3Int(0, 0);

        Sprite body = Resources.Load<Sprite>("Character Creator/Bodies/" + options.body.name +"Icon");
        Debug.Log("Character Creator/Bodies/" + options.body.name + "Icon");
       
        var colouredBody = ColourizeSprite(body, options.bodyPalette);
        Texture2D baseTexture = duplicateTexture(colouredBody.texture);
        Vector3Int headOffset = options.headOffset + offset;
        if (options.race.extraPartHead) { AddSprite(options.race.extraPartHead, options.bodyPalette, baseTexture, headOffset); }
        if (options.race.extraPartBody) { AddSprite(options.race.extraPartBody, options.bodyPalette, baseTexture, Vector3Int.zero); }
        if (options.face) { AddSprite(options.face, options.facePalette, baseTexture, headOffset); }

        var hide = false;
        if (helmet) { var helmetEqupment = helmet as Equipment; hide = helmetEqupment.hideHair; }
        if (options.feature) { AddSpriteMasked(options.feature, options.featurePalette, baseTexture, headOffset, hide); }
        if (options.hair) { AddSpriteMasked(options.hair, options.hairPalette, baseTexture, headOffset, hide); }

        if (armour) {
            Equipment armourItem = armour as Equipment;
            baseTexture = PasteSprite(armourItem.wornSprite, baseTexture, offset);
        }
        if (helmet != null) { baseTexture = PasteSprite(helmet.tile.sprite, baseTexture, options.headOffset + offset); }
        var sprite = Sprite.Create(baseTexture, new Rect(0, 0, baseTexture.width, baseTexture.height), new Vector2(0.5f, 0.125f), 16);
        sprite.name = inventory.gameObject.name + " Generated";
        return sprite;
    }

    public static void SaveTextureToFolder(Texture2D texture) {
        byte[] bytes = texture.EncodeToPNG();
        var seed = Random.Range(1.11111f, 1000f);
        System.Random psudoRandom = new System.Random(seed.GetHashCode());
        string filenameandlocation = "/Resources/GameObjects/2 Sprites/"+ seed.ToString() + ".png";
        System.IO.File.WriteAllBytes(Application.dataPath + filenameandlocation, bytes);
        AssetDatabase.Refresh();
    }

    public static Sprite ColourizeSprite(Sprite sprite, CCPalette palette) {
        CCPalette greyScalePalette = Resources.Load("Character Creator/GreyScalePalette") as CCPalette;
        if (!sprite) { return null; }
        if (palette == null) { palette = greyScalePalette; }
        var texture = new Texture2D(sprite.texture.width, sprite.texture.height);
        texture.SetPixels(sprite.texture.GetPixels());
        texture.Apply();
        for (int x = 0; x < texture.width; x++) {
            for (int y = 0; y < texture.height; y++) {
                var pixelColour = texture.GetPixel(x, y);
                if (pixelColour == greyScalePalette.lightestColour) {
                    texture.SetPixel(x, y, palette.lightestColour); continue;
                }
                if (pixelColour == greyScalePalette.lightColour) {
                    texture.SetPixel(x, y, palette.lightColour); continue;
                }
                if (pixelColour == greyScalePalette.midColour) {
                    texture.SetPixel(x, y, palette.midColour); continue;
                }
                if (pixelColour == greyScalePalette.darkColour) {
                    texture.SetPixel(x, y, palette.darkColour); continue;
                }
                if (pixelColour == greyScalePalette.darkestColour) {
                    texture.SetPixel(x, y, palette.darkestColour); continue;
                }
            }
        }
        texture.Apply();
        return Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), sprite.pivot, 16);
    }
}
