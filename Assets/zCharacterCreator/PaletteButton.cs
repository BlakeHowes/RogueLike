using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PaletteButton : MonoBehaviour
{
    public CCPalette palette;
    public CharacterCreator.PaletteButtonType type;
    
    public void SetPalette(CCPalette palette, CharacterCreator.PaletteButtonType type) {
        this.palette = palette;
        this.type = type;
        GetComponent<Image>().color = palette.midColour;
    }

    public void ClickPalette() {
        var currentCharacter = CharacterCreator.i.currentCharacter;
        var options = currentCharacter.GetComponent<CCOptions>();

        if (type == CharacterCreator.PaletteButtonType.Body) {
            options.bodyPalette = palette;
        }
        if (type == CharacterCreator.PaletteButtonType.Hair) {
            options.hairPalette = palette;
        }
        if (type == CharacterCreator.PaletteButtonType.Face) {
            options.facePalette = palette;
        }
        InventoryManager.i.UpdateSpriteFromItems(currentCharacter.GetComponent<Inventory>());
    }
}
