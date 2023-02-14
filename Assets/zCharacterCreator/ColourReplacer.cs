using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColourReplacer : MonoBehaviour
{
    public static ColourReplacer i;
    public CCPalette greyScalePalette;
    public void Awake() {
        i = this;
    }

    public Sprite ColourizeSprite(Sprite sprite,CCPalette palette) {
        if (!sprite) { return null; }
        if(palette == null) { palette = greyScalePalette; }
        var texture = new Texture2D(sprite.texture.width,sprite.texture.height);
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
        return Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), sprite.pivot,16);
    }
}
