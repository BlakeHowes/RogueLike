using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;


public class CharacterCreator : MonoBehaviour {
    public static CharacterCreator i;
    public GameObject currentCharacter;
    public CCOptions options;
    public Transform editLayout;
    public Transform selectLayout;
    public List<GameObject> characters,charactersToEnable = new List<GameObject>();
    private Vector3 origionalPosition;
    public Vector3 editPosition;
    public TextMeshProUGUI traitDescription;
    public enum PaletteButtonType {
        Body,
        Hair,
        Face
    }

    public void Awake() {
        i = this;
    }

    public void CharacterSelect() {
        currentCharacter.transform.position = origionalPosition;
        foreach (GameObject member in characters) {
            if(charactersToEnable.Contains(member))
            member.SetActive(true);
        }
        editLayout.gameObject.SetActive(false);
        selectLayout.gameObject.SetActive(true);
    }

    public void ToggleCharacter(GameObject character) {
        character.SetActive(!character.activeSelf);
    }

    public void CharacterEdit(GameObject character) {
        charactersToEnable.Clear();
        foreach(GameObject member in characters) {
            if (member.activeSelf) { charactersToEnable.Add(member); }
            member.SetActive(false);
        }
        origionalPosition = character.transform.position;
        currentCharacter = character;
        options = currentCharacter.GetComponent<CCOptions>();
        character.SetActive(true);
        character.transform.position = editPosition;
        editLayout.gameObject.SetActive(true);
        selectLayout.gameObject.SetActive(false);
    }

    public void RandomizeCharacter(GameObject character) {
        options = character.GetComponent<CCOptions>();
        RandomAppearence();
        InventoryManager.i.CreateCharacterSprite(character);
    }

    public void RandomAppearence() {
        var assets = CCAssets.i;
        options.race = assets.races[Random.Range(0, assets.races.Count)];
        options.bodyPalette = options.race.skinColours[Random.Range(0,options.race.skinColours.Count)];
        options.hair = assets.hairs[Random.Range(0, assets.hairs.Count)];
        options.hairPalette = assets.hairPalettes[Random.Range(0, assets.hairPalettes.Count)];
        options.face = assets.faces[Random.Range(0, assets.faces.Count)];
        options.facePalette = assets.facePalettes[Random.Range(0, assets.facePalettes.Count)];
        options.body = assets.bodies[Random.Range(0, assets.bodies.Count)];
        CreatePaletteButtons(editLayout.Find("Race").Find("PaletteLayout"), currentCharacter.GetComponent<CCOptions>().race.skinColours, PaletteButtonType.Body);
        UpdateLabels();
        InventoryManager.i.CreateCharacterSprite(currentCharacter);
    }

    public void Start() {
        options = currentCharacter.GetComponent<CCOptions>();
        options.hairPalette = FirstPaletteInLayout("Hair", PaletteButtonType.Hair, CCAssets.i.hairPalettes);
        options.facePalette = FirstPaletteInLayout("Face", PaletteButtonType.Face, CCAssets.i.facePalettes);
        foreach(GameObject character in characters) {
            options = character.GetComponent<CCOptions>();
            options.hairPalette = FirstPaletteInLayout("Hair", PaletteButtonType.Hair, CCAssets.i.hairPalettes);
            options.facePalette = FirstPaletteInLayout("Face", PaletteButtonType.Face, CCAssets.i.facePalettes);
            RefreshContent(character);
        }
    }

    public void UpdateLabels() {
        editLayout.Find("Hair").Find("Label").GetComponent<TextMeshProUGUI>().text = options.hair.name;
        editLayout.Find("Face").Find("Label").GetComponent<TextMeshProUGUI>().text = options.face.name;
        editLayout.Find("Race").Find("Label").GetComponent<TextMeshProUGUI>().text = options.race.name;
        editLayout.Find("Loadout").Find("Label").GetComponent<TextMeshProUGUI>().text = options.loadout.name;
        editLayout.Find("Gender").Find("Label").GetComponent<TextMeshProUGUI>().text = options.body.name;
    }

    public CCPalette FirstPaletteInLayout(string contentName,PaletteButtonType type,List<CCPalette> palettes) {
        var paletteButtonsInLayout = editLayout.Find(contentName).Find("PaletteLayout");
        CreatePaletteButtons(paletteButtonsInLayout, palettes, type);
        return paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;
    }

    public void NextRace(int direction) {
        options.race = CCAssets.i.NextOption(direction,CCAssets.i.races, options.race);
        var traits = currentCharacter.GetComponent<Inventory>().permanentTraits;
        traits.Clear();
        foreach (ItemAbstract item in options.race.permanentTraits) { 
            traits.Add(item);
        }
        RefreshContent(currentCharacter);
    }

    public void ShowDescriptionForTraits() {
        traitDescription.text = "";
        foreach(ItemAbstract item in currentCharacter.GetComponent<Inventory>().permanentTraits) {
            traitDescription.text += item.Description() + "\n";
        }
    }

    public void NextFace(int direction) {
        options.face = CCAssets.i.NextOption(direction, CCAssets.i.faces, options.face);
        UpdateLabels();
        InventoryManager.i.CreateCharacterSprite(currentCharacter);
    }

    public void NextLoadout(int direction) {
        options.loadout = CCAssets.i.NextOption(direction, CCAssets.i.loadouts, options.loadout);
        var inventory =currentCharacter.GetComponent<Inventory>();
        inventory.mainHand = options.loadout.mainHand;
        inventory.offHand = options.loadout.offHand;
        inventory.helmet = options.loadout.helmet;
        inventory.armour = options.loadout.armour;
        inventory.trinkets.Clear();
        foreach(ItemAbstract trinket in options.loadout.trinkets) {
            inventory.trinkets.Add(trinket);
        }
        InventoryManager.i.UpdateSpriteFromItems(inventory);
        UpdateLabels();
    }

    public void NextGender(int direction) {
        options.body = CCAssets.i.NextOption(direction, CCAssets.i.bodies, options.body);
        UpdateLabels();
        InventoryManager.i.CreateCharacterSprite(currentCharacter);
    }

    public void NextHair(int direction) {
        options.hair = CCAssets.i.NextOption(direction, CCAssets.i.hairs, options.hair);
        UpdateLabels();
        InventoryManager.i.CreateCharacterSprite(currentCharacter);
    }

    public void RefreshContent(GameObject character) {
        ShowDescriptionForTraits();
        var paletteButtonsInLayout = editLayout.Find("Race").Find("PaletteLayout");
        CreatePaletteButtons(paletteButtonsInLayout, character.GetComponent<CCOptions>().race.skinColours,PaletteButtonType.Body);
        options.bodyPalette = paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;
        InventoryManager.i.CreateCharacterSprite(character);

        UpdateLabels();
    }

    public void CreatePaletteButtons(Transform paletteButtonsInLayout, List<CCPalette> palettes,PaletteButtonType type) {
        
        foreach (Transform palette in paletteButtonsInLayout) {
            palette.gameObject.SetActive(false);
        }
        foreach (CCPalette palette in palettes) {
            foreach (Transform paletteButton in paletteButtonsInLayout) {
                if (!paletteButton.gameObject.activeSelf) {
                    paletteButton.gameObject.SetActive(true);
                    var button = paletteButton.gameObject.GetComponent<PaletteButton>();
                    button.SetPalette(palette,type);
                    break;
                }
            }
        }
    }
}
