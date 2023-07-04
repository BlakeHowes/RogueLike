using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PaletteButton : MonoBehaviour
{
    public CCPalette palette;
    public string paletteOptionName;
    
    public void SetPalette(CCPalette palette) {
        this.palette = palette;
        GetComponent<Image>().color = palette.midColour;
    }

    public void ClickPalette() {
        var currentCharacter = CharacterCreator.i.currentCharacter;
        var options = currentCharacter.GetComponent<CCOptions>();

        var field = options.GetType().GetField(paletteOptionName);
        field.SetValue(options, palette);

        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
    }
}
