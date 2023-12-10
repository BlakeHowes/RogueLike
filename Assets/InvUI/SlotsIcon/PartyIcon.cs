using UnityEngine;
using UnityEngine.UI;

public class PartyIcon : MonoBehaviour
{
    GameObject character;
    public Vector2Int offset;
    public bool abilitySelection;
    public Color turnTakenColour;
    Image image;
    Image background;
    Stats stats;
    public bool setCharacter = true;
    public void OnEnable() {
        Manager.OnSwitchCharacter += OnSwitchCharacter;
    }

    public void OnDisable() {
        Manager.OnSwitchCharacter -= OnSwitchCharacter;
    }

    public void OnSwitchCharacter(GameObject currentCharacter, GameObject previousCharacter) {
        if(currentCharacter == character) {
            transform.GetChild(1).gameObject.SetActive(true);
        }
        else {
            transform.GetChild(1).gameObject.SetActive(false);
        }
    }

    public void GreyOutImage() {
        if (!image) { image = transform.GetChild(0).GetComponent<Image>(); }
        image.color = turnTakenColour;

        if (!background) { background = GetComponent<Image>(); }
        if (!stats) { stats = character.GetComponent<Stats>(); }
        var colour = Color.black;
        if (stats.state == PartyManager.State.Combat) {
            colour = Color.red;
        }
        background.color = colour;
    }

    public void ResetImageColor() {
        if (!image) { image = transform.GetChild(0).GetComponent<Image>(); }
        image.color = Color.white;


        if (!background) { background = GetComponent<Image>(); }
        if (!stats) { stats = character.GetComponent<Stats>(); }
        var colour = Color.black;
        if (stats.state == PartyManager.State.Combat) {
            colour = Color.red;
        }
        background.color = colour;
    }
    public void SetIcon(GameObject character) {
        if(character == null) {
            Destroy(gameObject);
            return;
        }
        this.character = character;
        if (character == null) { 
            return;
        }
        if (!image) { image = transform.GetChild(0).GetComponent<Image>(); }
        var characterSprite = character.GetComponent<SpriteRenderer>().sprite;
        var characterTexture = characterSprite.texture;
        var cropOffset = new Vector2Int(characterTexture.width/2 - 8, characterTexture.height - 16);
        if (characterTexture.width == 80) {
            cropOffset = offset;
        }
        var texture = CharacterSpriteGenerator.CropTexture(characterTexture, image.sprite, cropOffset);
        Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2Int(texture.width / 2, texture.height / 2), 16);
        if(texture.name == "MissingSprite") {
            sprite = characterSprite; 
        }
        image.sprite = sprite;
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
        }
        if (!setCharacter) { return; }
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
