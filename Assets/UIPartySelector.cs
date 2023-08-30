using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPartySelector : MonoBehaviour
{
    public GameObject selectedGO;
    public void OnEnable() {
        var party = PartyManager.i.party;
        foreach(Transform child in transform) {
            child.gameObject.SetActive(false);
        }
        int i = 0;
        HideIconHighlights();
        bool clicked = false;
        var currentTurnCharacter = PartyManager.i.currentCharacter;
        foreach (var member in party) {
            if (!member) { continue; }
            if (!member.CompareTag("Party")) { continue; }
            var go = transform.GetChild(i).gameObject;
            go.SetActive(true);
            go.GetComponent<PartyIcon>().SetIcon(member);
            if(member == currentTurnCharacter) { go.GetComponent<PartyIcon>().Click(); clicked = true; }
           i++;
        }
        if (!clicked) { transform.GetChild(0).gameObject.GetComponent<PartyIcon>().Click(); }
    }

    public void HideIconHighlights() {
        foreach (Transform child in transform) {
            child.GetChild(1).gameObject.SetActive(false);
        }
    }
}
