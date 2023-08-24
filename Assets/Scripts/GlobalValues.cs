
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

    [Header("Test Objects")]
    //public List<GameObject> partyPrefabs = new List<GameObject>();
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
    public Tile generalTile;
    [HideInInspector] public Vector3Int NullValue = new Vector3Int(-1, -1, 0);

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

    [Header("Loot")]
    public List<LootPool> items = new();
    public List<LootPool> traits = new();

    public WaitSeconds GetWaitSeconds(float time) {
        waitSeconds.waitTime = time;
        return waitSeconds;
    }

    public ItemAbstract GetRandomLootItem() {
        var floor = items[0];
        int i = Random.Range(0, floor.items.Count);
        return floor.items[i];
    }

    public ItemAbstract GetRandomLootTrait() {
        var floor = traits[0];
        int i = Random.Range(0, floor.items.Count);
        return floor.items[i];
    }
}
[System.Serializable]
public class LootPool {
    public List<ItemAbstract> items = new();
}
