
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GlobalValues : ScriptableObject
{
    [Header("Main")]
    public int width;
    public int height;
    public float onHitNudgeAmount =1;
    public float onAttackNudgeAmount =1;

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

    public float lightAlphaCurrentCharacter;
    public float lightAlphaNonSelectedCharacter;

    [Header("Inventory")]
    public int maxItems = 9;



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
    public Material outlineMaterial;
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

    [Header("Loot")]
    public List<LootPool> propItems = new();
    public List<LootPool> enemyItems = new();
    public List<LootPool> chestItems = new();
    public List<LootPool> traits = new();

    public WaitSeconds GetWaitSeconds(float time) {
        waitSeconds.waitTime = time;
        return waitSeconds;
    }

    public void CloneLoot() {
        foreach(var floor in propItems) {
            floor.CreateCopy();
        }

        foreach (var floor in traits) {
            floor.CreateCopy();
        }
    }

    public ItemAbstract GetRandomLootItem(LootGenerator.LootGroup lootGroup) {
        switch (lootGroup) {
            case LootGenerator.LootGroup.None: return null;
            case LootGenerator.LootGroup.Props: return propItems[0].GetItem();
            case LootGenerator.LootGroup.Enemies: return enemyItems[0].GetItem();
            case LootGenerator.LootGroup.Chests: return chestItems[0].GetItem();
        }
        return null;
    }

    public ItemAbstract GetRandomLootTrait() {
        var floor = traits[0];
        return floor.GetItem();
    }
}
[System.Serializable]
public class LootPool {
    public List<ItemAbstract> items = new();
    private List<ItemAbstract> itemsCopy = new();

    public void CreateCopy() {
        itemsCopy.Clear();
        foreach (var item in items) {
            itemsCopy.Add(item);
        }
    }
    public ItemAbstract GetItem() {
        if (itemsCopy.Count < 1) { CreateCopy(); }
        var item = itemsCopy[Random.Range(0, itemsCopy.Count)];
        itemsCopy.Remove(item);
        return item;
    }
}
