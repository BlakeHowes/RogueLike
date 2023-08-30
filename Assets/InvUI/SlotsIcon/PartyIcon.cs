using UnityEngine;
using UnityEngine.UI;

public class PartyIcon : MonoBehaviour
{
    GameObject character;
    public Vector2 offset;
    public bool abilitySelection;
    public void SetIcon(GameObject character) {
        if(character == null) {
            Destroy(gameObject);
            return;
        }
        this.character = character;
        if (character == null) { 
            return;
        }
        var image = transform.GetChild(0).GetComponent<Image>();
        image.sprite = character.GetComponent<SpriteRenderer>().sprite;
        image.color = character.GetComponent<SpriteRenderer>().color;
    }

    public void Click() {
        if (Camera.main == null) { return; }
        if(character == null) { Destroy(gameObject); return; }
        Camera.main.GetComponent<SmoothCamera>().resetFollow();
        MouseManager.i.itemSelected = null;
        /*
        if(PartyManager.i.state == PartyManager.State.Idle) {
            PartyManager.i.partyMemberTurnTaken.Clear();
        }
        */
        if (abilitySelection) {
            var selector = transform.parent.gameObject.GetComponent<UIPartySelector>();
            selector.selectedGO = character;
            selector.HideIconHighlights();
            EnableHighlight();
            return;
        }
        if (!PartyManager.i.partyMemberTurnTaken.Contains(character)) {
            PartyManager.i.SetCurrentCharacter(character);
        }
    }

    public GameObject GetCharacter() {
        return character;
    }

    public void EnableHighlight() {
        transform.GetChild(1).gameObject.SetActive(true);
    }

    public void DisableHighlight() {
        transform.GetChild(1).gameObject.SetActive(false);
    }
}
