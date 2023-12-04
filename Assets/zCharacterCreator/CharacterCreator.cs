using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;


public class CharacterCreator : MonoBehaviour {
    public static CharacterCreator i;
    public GameObject currentCharacter;
    public CCOptions options;
    public Transform editLayout;
    public Transform selectLayout;
    public List<GameObject> characters,charactersToEnable = new List<GameObject>();
    private Vector3 origionalPosition;
    public Transform traitLayout;
    public Transform editPosition;
    public enum PaletteButtonType {
        Body,
        Hair,
        Face,
        Feature
    }

    public void Awake() {
        i = this;
    }

    public void OnEnable() {
        Manager.coins = 0;
        Manager.GetGlobalValues().OnStartOfRun();
        int i = 2;
        var paletteButtonsInLayout = editLayout.Find("Hair").Find("PaletteLayout");
        CreatePaletteButtons(paletteButtonsInLayout, CCAssets.i.hairPalettes, PaletteButtonType.Hair);
        var paletteButtonsInLayout2 = editLayout.Find("Face").Find("PaletteLayout");
        CreatePaletteButtons(paletteButtonsInLayout2, CCAssets.i.hairPalettes, PaletteButtonType.Face);
        foreach (var character in characters) {
            if (!character.activeSelf) { continue; }
            RandomAppearence(character);
            currentCharacter = character;
            options = character.GetComponent<CCOptions>();
            var inventory = character.GetComponent<Inventory>();
            inventory.mainHand = options.loadout.mainHand;
            inventory.offHand = options.loadout.offHand;
            inventory.helmet = options.loadout.helmet;
            inventory.armour = options.loadout.armour;
            CharacterSpriteGenerator.CreateCharacterSprite(currentCharacter);
            RefreshContent(character, false);
            i++;
        }

    }

    public void QuickStart() {
        int i = 1;
        foreach(var character in characters) {
            if (!character.activeSelf) { continue; }
            RandomAppearence(character);
            currentCharacter = character;
            options = character.GetComponent<CCOptions>();
            NextLoadout(i);
            i++;
        }
        Manager.LoadNextScene();
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
        character.transform.position = editPosition.position;
        editLayout.gameObject.SetActive(true);
        selectLayout.gameObject.SetActive(false);
        RefreshContent(character,false);
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
        foreach (ItemAbstract item in options.loadout.traits) {
            traits.Add(item);
        }
        ShowDescriptionForTraits();

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
        RefreshContent(currentCharacter, true);
        CheckBodyPalette();
    }

    public void ShowDescriptionForTraits() {
        var prefab = Manager.GetGlobalValues().traitUIEventPrefab;
        var inventory = currentCharacter.GetComponent<Inventory>();
        foreach (Transform child in traitLayout.transform) {
            Destroy(child.gameObject);
        }
        foreach(ItemAbstract item in inventory.traits ){
            var uiElements = TraitUIGenerator.CreateAbilityDescriptions(item.abilities,options.gameObject, item);
            foreach (var element in uiElements) {
                element.transform.SetParent(traitLayout);
                element.transform.localScale = new Vector3(1,1,1);
            }
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

        RefreshContent(currentCharacter,false);
    }
    public void NextGender(int direction) {
        options.body = CCAssets.i.NextOption(direction, CCAssets.i.bodies, options.body);
        RefreshContent(currentCharacter,false);
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

    public void RefreshContent(GameObject character, bool defaultValues) {
        var paletteButtonsInLayout = editLayout.Find("Race").Find("PaletteLayout");
        options = character.GetComponent<CCOptions>();
        if(options.body.name != "Undead")CreatePaletteButtons(paletteButtonsInLayout, options.race.bodyPalettes, PaletteButtonType.Body);
        CheckBodyPalette();
        if (defaultValues) {
            options.bodyPalette = paletteButtonsInLayout.GetChild(0).gameObject.GetComponent<PaletteButton>().palette;

            if (options.race.features.Count > 0) {
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
        }



        var traits = character.GetComponent<Inventory>().traits;
        traits.Clear();
        foreach (ItemAbstract item in options.race.permanentTraits) {
            traits.Add(item);
        }
        foreach (ItemAbstract item in options.loadout.traits) {
            traits.Add(item);
        }
        if (options.body.name == "Undead") {
            foreach (ItemAbstract item in CCAssets.i.undeadTraits) {
                traits.Add(item);
            }
        }
        ShowDescriptionForTraits();

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
