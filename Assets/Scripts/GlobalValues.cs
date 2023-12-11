
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Tilemaps;
using static ItemStatic;
public class GlobalValues : ScriptableObject
{
    [Header("Main")]
    public int width;
    public int height;
    public float itemHeight;
    public float shadowHeight;
    public float itemAnimationSpeed;
    public float itemAnimationHeight;
    public bool disableDevHotkeys;
    public float onHitNudgeAmount =1;
    public float onAttackNudgeAmount =1;
    public bool mobileSettings;
    public bool usePartyInventory;

    [Header("Fog")]
    public Tile shadowTile;
    public TileBase fog;
    public TileBase bigFog;
    public TileBase fogWall;
    public TileBase fogSemi;
    public TileBase entrance;
    public int fogFill;
    public int outerFogFill;
    public float fogDistance;
    public float outerFogDistance;

    [Header("Character")]
    public Tile generalTile;
    public StatusEffect summonSickness;
    [HideInInspector] public Vector3Int NullValue = new Vector3Int(-1, -1, 0);

    public TextAsset defaultEnemyBehaviour;
    public TextAsset defaultEPassiveBehaviour;
    public TextAsset defaultSummonBehaviour;

    public GameObject characterLightPrefab;
    public float lightAlphaCurrentCharacter;
    public float lightAlphaNonSelectedCharacter;

    [Header("Inventory")]
    public int maxItems = 9;
    public StatusEffect stun;
    public ActionContainer spinningThrowProjectile;
    public ActionContainer straightThrowProjectile;
    public ActionContainer dropItem;

    [Header("Elemets")]
    public List<ActionPointElement> actionPointElements;
    public List<ActionPointElement> actionPointElementsPoolForTraits;
    public TextAsset comboCSV;
    public string[,] surfaceResult;

    [Header("Pathing")]
    public int maxPathLength;
    public float stepAnimationHeight;
    public float stepAnimationSpeed;
    [Range(0, 0.5f)] public float walkSpeed;
    [Range(0, 1f)] public float repeatSpeed;
    [Range(0, 5000f)] public float stepHardness;
    [Range(0, 100)] public float stepDampening;
    [Range(0, 5000f)] public float Hardness;
    [Range(0, 100)] public float Dampening;

    [Header("Actions")]
    public WaitSeconds waitSeconds;

    [Header("UI")]
    public GameObject healthBarPrefab;
    public GameObject hitNumberPrefab;
    public Tile mouseHighlight;
    public Color partyHightlightColour = Color.white;
    public Color enemyHightlightColour = Color.white;
    public Color passiveHightlightColour = Color.white;
    public Color interactableHightlightColour = Color.white;
    public Color fadedColour = Color.white;
    public Material currentCharacterMaterial;
    public Material partyMaterial;
    public Material summonMaterial;
    public Material enemyoutlineMaterial;
    public Material normalMaterial;
    public Material hitMaterial;
    public GameObject skillSlotPrefab;
    public TileBase rangeTile;
    public Sprite defaultSkillSprite;
    public GameObject gameOverLayout;
    public GameObject partyIconPrefab;
    public GameObject traitUIEventPrefab;
    public GameObject traitUIDescriptionPrefab;
    public Sprite normalActionPointSprite;
    public Sprite walkActionPointSprite;

    [Header("Loot")]
    public List<ItemAbstract> propItems = new();
    public List<ItemAbstract> enemyItems = new();
    public List<ItemAbstract> Trinkets = new();
    public List<ItemAbstract> Equipment = new();
    public List<ItemAbstract> traitItems = new();
    public List<Trait> traits;
    public List<ItemAbstract> chosenItems = new List<ItemAbstract>();
    public WaitSeconds GetWaitSeconds(float time) {
        waitSeconds.waitTime = time;
        return waitSeconds;
    }

    private T[,] Make2DArray<T>(T[] input, int height, int width) {
        T[,] output = new T[height, width];
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                output[i, j] = input[i * width + j];
            }
        }
        return output;
    }

    public string getResultingSurface(string surface1,string surface2) {
        int row = 0;
        int col = 0;
        int length = 3;
        for (int i = 0; i < length; i++) {
            if(surface1.Equals(surfaceResult[i, 0])) {
                row = i;
                break;
            }
        }
        for (int i = 0; i < length; i++) {
            if (surface2 == surfaceResult[0, i]) {
                col = i;
                break;
            }
        }
        return surfaceResult[row, col];
    }

    public void OnStartOfRun() {
        var surfaces = Regex.Split(comboCSV.text, "[,\n]");
        for (int i2 = 0; i2 < surfaces.Length; i2++) {
            surfaces[i2] = surfaces[i2].Trim();
        }
        var length = surfaces.Length;
        int size = Mathf.FloorToInt(Mathf.Sqrt(surfaces.Length));
        surfaceResult = new string[size, size];
        surfaceResult = Make2DArray(surfaces, size, size);
        chosenItems.Clear();
    }

    public ItemAbstract GetRandomLootItem(LootGenerator.LootGroup lootGroup) {
        List<ItemAbstract> items = new();
        List<ItemAbstract> availableItems = new();
        switch (lootGroup) {
            case LootGenerator.LootGroup.None: return null;
            case LootGenerator.LootGroup.Props: items = propItems; break;
            case LootGenerator.LootGroup.Enemies: items = enemyItems; break;
            case LootGenerator.LootGroup.Trinkets: items = Trinkets; break;
            case LootGenerator.LootGroup.TraitItems: items = traitItems; break;
            case LootGenerator.LootGroup.Equipment: items = Equipment; break;
        }
        foreach (var item in items) {
            if (!chosenItems.Contains(item)) {
                availableItems.Add(item); 
            }
        }
        if (availableItems.Count == 0) { availableItems = items; }
        var itemSelected = availableItems[Random.Range(0, availableItems.Count)];
        if(itemSelected == null) { return null; }
        if(lootGroup != LootGenerator.LootGroup.Props && lootGroup != LootGenerator.LootGroup.Enemies) {
            chosenItems.Add(itemSelected);
        }

        return GridManager.i.InstantiateItem(itemSelected);
    }


    public List<Trait> GetThreeRandomTraits(CharacterClass characterClass) {
        List<Trait> availableTraits = new();
        List<Trait> selectedTraits = new();
        for (int i = 0; i < traits.Count; i++) {
            var trait = traits[i];
            if (trait.characterClass != characterClass) { continue; }
            if (chosenItems.Contains(trait)) { continue; }
            availableTraits.Add(trait);
        }
        for (int i = 0; i < 3; i++) {
            Trait randomTrait = null;
            if (availableTraits.Count > 0) {
                randomTrait = availableTraits[Random.Range(0, availableTraits.Count)];
                availableTraits.Remove(randomTrait);
            }
            else {
                randomTrait = traits[Random.Range(0, traits.Count)];
            }

            selectedTraits.Add(randomTrait);
        }


        return selectedTraits;
    }
}
