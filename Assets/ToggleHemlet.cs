using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleHemlet : MonoBehaviour
{
    public void Toggle() {
        var currentCharacter = PartyManager.i.currentCharacter;
        var options = currentCharacter.GetComponent<CCOptions>();
        options.hideHelmet = !options.hideHelmet;
        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
    }
}
