using FunkyCode;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterLight : MonoBehaviour
{
    private Light2D light2D;
    private GlobalValues globalValues;
    public void OnEnable() {
        PartyManager.i.OnSwitchCharacter += OnSwitchCharacter;
        globalValues = Manager.GetGlobalValues();
        light2D = GetComponent<Light2D>();
        OnSwitchCharacter(PartyManager.i.currentCharacter,gameObject);
    }

    public void OnDisable() {
        PartyManager.i.OnSwitchCharacter -= OnSwitchCharacter;
    }

    public void OnSwitchCharacter(GameObject currentCharacter, GameObject previousCharacter) {
        if (!currentCharacter) { return; }
        if(!currentCharacter.CompareTag("Party")) { return; }
        if (transform.parent.gameObject == currentCharacter) { 
            light2D.color.a = globalValues.lightAlphaCurrentCharacter;
        }
        else {
            light2D.color.a = globalValues.lightAlphaNonSelectedCharacter;
        }
    }
}
