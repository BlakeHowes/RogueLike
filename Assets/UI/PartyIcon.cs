using UnityEngine;
using UnityEngine.UI;

public class PartyIcon : MonoBehaviour
{
    GameObject character;
    public Vector2 offset;
    public void SetIcon(GameObject character) {
        this.character = character;
        var image = transform.GetChild(0).GetComponent<Image>();
        image.sprite = character.GetComponent<SpriteRenderer>().sprite;
        image.color = character.GetComponent<SpriteRenderer>().color;
    }

    public void Click() {
        if (!PartyManager.i.partyMemberTurnTaken.Contains(character)) {
            PartyManager.i.currentCharacter = character;
            InventoryManager.i.UpdateInventory();
        }
    }
}
