using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class LoadoutSwitch : MonoBehaviour
{
    public TextMeshProUGUI label;
    public void NextLoadout(GameObject character) {
        CharacterCreator.i.currentCharacter = character;
        CharacterCreator.i.options = character.GetComponent<CCOptions>();
        CharacterCreator.i.NextLoadout(1);
        label.text = character.GetComponent<CCOptions>().loadout.name;
    }

    public void PreviousLoadout(GameObject character) {
        CharacterCreator.i.currentCharacter = character;
        CharacterCreator.i.options = character.GetComponent<CCOptions>();
        CharacterCreator.i.NextLoadout(-1);
        label.text = character.GetComponent<CCOptions>().loadout.name;
    }
}
