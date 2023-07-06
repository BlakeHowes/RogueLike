using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GlobalValues : ScriptableObject
{
    [Header("Main")]
    public int width;
    public int height;

    [Header("Test Objects")]
    public List<GameObject> partyPrefabs = new List<GameObject>();
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
    [NonSerialized] public Vector3Int NullValue = new Vector3Int(-1, -1, 0);

    [Header("Inventory")]
    public int maxItems = 9;

    [Header("Pathing")]
    public int maxPathLength;
    [Range(0, 0.5f)] public float walkSpeed;
    [Range(0, 0.5f)] public float repeatSpeed;
    [Range(0, 5000f)] public float Hardness;
    [Range(0, 100)] public float Dampening;

    [Header("UI")]
    public GameObject healthBarPrefab;
    public GameObject hitNumberPrefab;
    public Tile mouseHighlight;
    public Color partyHightlightColour = Color.white;
    public Color enemyHightlightColour = Color.white;
    public Color passiveHightlightColour = Color.white;
    public Color interactableHightlightColour = Color.white;
    public Material outlineMaterial;
    public Material enemyoutlineMaterial;
    public Material normalMaterial;
    public Material hitMaterial;
    public GameObject skillSlotPrefab;
    public TileBase rangeTile;
    public Sprite defaultSkillSprite;
    public GameObject gameOverLayout;
    public GameObject partyIconPrefab;
}
