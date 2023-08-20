using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.TextCore.Text;
using static UnityEngine.ParticleSystem;


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
        Face,
        Feature
    }

    public void Awake() {
        i = this;
    }

    public void QuickStart() {
        int i = 1;
        foreach(var character in characters) {
            RandomAppearence(character);
            currentCharacter = character;
            options = character.GetComponent<CCOptions>();
            NextLoadout(i);
            i++;
        }
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
        var paletteFeatureButtons = editLayout.Find("Feature").Find("PaletteLayout");
        CreatePaletteButtons(paletteFeatureButtons, character.GetComponent<CCOptions>().race.featurePalettes, PaletteButtonType.Feature);
        UpdateLabels();
        ShowDescriptionForTraits(character);
    }

    public void RandomizeCharacter(GameObject character) {
        RandomAppearence(character);
        CharacterSpriteGenerator.CreateCharacterSprite(character);
    }

    public void RandomAppearence(GameObject character) {
        var assets = CCAssets.i;
        options = character.GetComponent<CCOptions>();
        options.race = assets.races[Random.Range(0, assets.races.Count)];
        options.bodyPalette = options.race.bodyPalettes[Random.Range(0,options.race.bodyPalettes.Count)];

        var traits = character.GetComponent<Inventory>().traits;
        traits.Clear();
        foreach (ItemAbstract item in options.race.permanentTraits) {
            traits.Add(item);
        }
        ShowDescriptionForTraits(character);

        options.hair = assets.hairs[Random.Range(0, assets.hairs.Count)];
        options.hairPalette = assets.hairPalettes[Random.Range(0, assets.hairPalettes.Count)];
        options.face = assets.faces[Random.Range(0, assets.faces.Count)];
        options.facePalette = assets.facePalettes[Random.Range(0, assets.facePalettes.Count)];
        options.body = assets.bodies[Random.Range(0, 2)];
        CreatePaletteButtons(editLayout.Find("Race").Find("PaletteLayout"), character.GetComponent<CCOptions>().race.bodyPalettes, PaletteButtonType.Body);
        if(options.race.features.Count > 0) {
            options.feature = options.race.features[Random.Range(0, options.race.features.Count)];
            options.featurePalette = options.race.featurePalettes[Random.Range(0, options.race.featurePalettes.Count)];
        }
        else {
            options.feature = null;
            options.featurePalette = null;
        }

        UpdateLabels();

        //UNDEAD
        var undeadRoll = Random.Range(1, 7);
        if(undeadRoll == 4) { 
            options.body = assets.bodies[2];
            options.bodyPalette = CCAssets.i.undeadPalettes[Random.Range(0, CCAssets.i.undeadPalettes.Count)];
        }

        CharacterSpriteGenerator.CreateCharacterSprite(character);
    }

    public void Start() {
        foreach (GameObject character in characters) {
            options = character.GetComponent<CCOptions>();
            options.hairPalette = FirstPaletteInLayout("Hair", PaletteButtonType.Hair, CCAssets.i.hairPalettes);
            options.facePalette = FirstPaletteInLayout("Face", PaletteButtonType.Face, CCAssets.i.facePalettes);
            options.featurePalette = FirstPaletteInLayout("Feature", PaletteButtonType.Feature, options.race.featurePalettes);
            foreach (ItemAbstract item in options.race.permanentTraits) {
                character.GetComponent<Inventory>().traits.Add(item);
            }
            RefreshContent(character);
        }
    }

    public void UpdateLabels() {
        editLayout.Find("Hair").Find("Label").GetComponent<TextMeshProUGUI>().text = options.hair.name;
        editLayout.Find("Face").Find("Label").GetComponent<TextMeshProUGUI>().text = options.face.name;
        editLayout.Find("Race").Find("Label").GetComponent<TextMeshProUGUI>().text = options.race.name;
        editLayout.Find("Loadout").Find("Label").GetComponent<TextMeshProUGUI>().text = options.loadout.name;
        editLayout.Find("Gender").Find("Label").GetComponent<TextMeshProUGUI>().text = options.body.name;

        var layout = editLayout.Find("Feature");
        if (options.feature) {
            layout.gameObject.SetActive(true);
            layout.Find("Label").GetComponent<TextMeshProUGUI>().text = options.feature.name; }
        else {
            layout.gameObject.SetActive(false);
        }

    }

    public CCPalette FirstPaletteInLayout(string contentName,PaletteButtonType type,List<CCPalette> palettes) {
        var paletteButtonsInLayout = editLayout.Find(contentName).Find("PaletteLayout");
        CreatePaletteButtons(paletteButtonsInLayout, palettes, type);
        return paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;
    }

    public void NextRace(int direction) {
        options.race = CCAssets.i.NextOption(direction,CCAssets.i.races, options.race);
        var traits = currentCharacter.GetComponent<Inventory>().traits;
        traits.Clear();
        foreach (ItemAbstract item in options.race.permanentTraits) { 
            traits.Add(item);
        }
        RefreshContent(currentCharacter);
        CheckBodyPalette();
    }

    public void ShowDescriptionForTraits(GameObject character) {
        traitDescription.text = "";
        foreach(ItemAbstract item in character.GetComponent<Inventory>().traits) {
            //traitDescription.text += item.Description() + "\n";
        }
    }

    public void NextFace(int direction) {
        options.face = CCAssets.i.NextOption(direction, CCAssets.i.faces, options.face);
        UpdateLabels();
        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
    }

    public void NextLoadout(int direction) {
        options.loadout = CCAssets.i.NextOption(direction, CCAssets.i.loadouts, options.loadout);
        var inventory =currentCharacter.GetComponent<Inventory>();
        inventory.mainHand = options.loadout.mainHand;
        inventory.offHand = options.loadout.offHand;
        inventory.helmet = options.loadout.helmet;
        inventory.armour = options.loadout.armour;

        int i = 1;
        foreach(var item in options.loadout.trinkets) {
            var trinket = inventory.GetType().GetField("trinket" + i);
            trinket.SetValue(inventory, item);
            i++;
        }

        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
        UpdateLabels();
    }
    public void NextGender(int direction) {
        options.body = CCAssets.i.NextOption(direction, CCAssets.i.bodies, options.body);
        UpdateLabels();
        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
        CheckBodyPalette();
    }

    public void CheckBodyPalette() {
        if (options.body.name == "Undead") {
            if (CCAssets.i.undeadPalettes.Contains(options.bodyPalette)) { return; }
            var paletteButtonsInLayout = editLayout.Find("Race").Find("PaletteLayout");
            CreatePaletteButtons(paletteButtonsInLayout, CCAssets.i.undeadPalettes, PaletteButtonType.Body);
            options.bodyPalette = paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;
            CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
        }
        if (options.body.name == "Male" || options.body.name == "Female") {
            if (!CCAssets.i.undeadPalettes.Contains(options.bodyPalette)) { return; }
            var paletteButtonsInLayout = editLayout.Find("Race").Find("PaletteLayout");
            CreatePaletteButtons(paletteButtonsInLayout, options.race.bodyPalettes, PaletteButtonType.Body);
            options.bodyPalette = paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;
            CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
        }
    }

    public void NextFeatures(int direction) {
        if(options.race.features.Count <= 0) { return; }
        options.feature = CCAssets.i.NextOption(direction, options.race.features, options.feature);
        UpdateLabels();
        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
    }

    public void NextHair(int direction) {
        options.hair = CCAssets.i.NextOption(direction, CCAssets.i.hairs, options.hair);
        UpdateLabels();
        CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
    }

    public void RefreshContent(GameObject character) {
        ShowDescriptionForTraits(character);
        var paletteButtonsInLayout = editLayout.Find("Race").Find("PaletteLayout");
        CreatePaletteButtons(paletteButtonsInLayout, options.race.bodyPalettes,PaletteButtonType.Body);
        options.bodyPalette = paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;

        if(options.race.features.Count > 0) {
            options.feature = options.race.features[0];
            options.featurePalette = FirstPaletteInLayout("Feature", PaletteButtonType.Feature, options.race.featurePalettes);
            var paletteFeatureButtons = editLayout.Find("Feature").Find("PaletteLayout");
            CreatePaletteButtons(paletteFeatureButtons, options.race.featurePalettes, PaletteButtonType.Feature);
            options.featurePalette = paletteFeatureButtons.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;
        }
        else {
            options.feature = null;
            options.featurePalette = null;
        }

        CharacterSpriteGenerator.CreateCharacterSprite(character);
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
                    paletteButton.gameObject.GetComponent<PaletteButton>().SetPalette(palette);
                    break;
                }
            }
        }
    }
}
