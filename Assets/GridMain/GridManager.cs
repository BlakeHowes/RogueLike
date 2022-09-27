using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GridManager : MonoBehaviour {
    public static GridManager i;

    public GridGraphics graphics;
    public AssetManager assets;
    public GridTools tools;
    //private MapGenerator mapgenerator;

    public int width;
    public int height;

    //Grid data
    private ItemAbstract[,] mechGrid;
    private ItemAbstract[,] itemGrid;
    private GameObject[,] goGrid;

    [NonSerialized] public mechMethods mechMethods;
    [NonSerialized] public itemMethods itemMethods;
    [NonSerialized] public GoMethod goMethods;

    // Tilemaps
    public Tilemap mechTilemap;
    public Tilemap itemTilemap;
    public Tilemap goTilemap;

    public Vector3Int NullValue = new Vector3Int(-1, -1, 0);

    //TEST OBJECTS
    public GameObject playerPrefab;

    public void Awake() {
        i = this;
        graphics = new GridGraphics();
        assets = new AssetManager();
        tools = new GridTools();
        Initialize();
        mechMethods = new mechMethods(mechGrid, assets, mechTilemap);
        itemMethods = new itemMethods(itemGrid, assets, itemTilemap);
        goMethods = new GoMethod(goGrid,assets,goTilemap);
    }

    public void Initialize() {
        //Initialize grids
        //Mechanism Grid
        mechGrid = new ItemAbstract[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                mechGrid[x, y] = null;
            }
        }
        //Item Grid
        itemGrid = new ItemAbstract[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                itemGrid[x, y] = null;
            }
        }
        //GO Grid
        goGrid = new GameObject[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                goGrid[x, y] = null;
            }
        }
    }

    //TEST START
    public void Start() {
        SpawnCharacter(playerPrefab, new Vector3Int(24, 8),Color.magenta);
        SpawnCharacter(playerPrefab, new Vector3Int(25, 8), Color.yellow);
        SpawnCharacter(playerPrefab, new Vector3Int(25, 9), Color.blue);
        SpawnCharacter(playerPrefab, new Vector3Int(25, 10), Color.white);
        PartyManager.i.UpdatePartyIcons();
        UpdateGame();
    }

    public void SpawnCharacter(GameObject character,Vector3Int position,Color colour) {
        var clone = Instantiate(character);
        goGrid[position.x, position.y] = clone;
        clone.transform.position = new Vector3(position.x+0.5f, position.y+0.5f, 0);
        PartyManager.i.AddPartyMember(clone);
        clone.GetComponent<SpriteRenderer>().color = colour;
    }

    public GameObject[,] GetGoGrid() {
        return goGrid;
    }


    public void UpdateGame() {
        Vector3Int camerapos = Camera.main.transform.position.FloorToInt();
        mechMethods.ActivateMechanisms(); //IDK ABOUT THIS
        PartyManager.i.FindEnemies();//IDK ABOUT THIS
        //UPDATING GRAPHICAL CHANGES
        graphics.UpdateItemAbstracts(width, height, itemGrid, itemTilemap);
        graphics.UpdateItemAbstracts(width, height, mechGrid, mechTilemap);
        //graphics.UpdateGameObjects(width, height, goGrid, goTilemap);

        GameUIManager.i.actionPointsText.text = Actions.i.actionPoints.ToString();

        InventoryManager.i.UpdateInventory();

        //Camera Position Update
    }

    public void CreateEnemies() { //THIS WILL BE REPLACED BY PALETTEMANAGER AND BE SEARCHED AROUND THE PLAYER ONLY
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y, 0);
                var tile = goTilemap.GetTile<Tile>(pos);
                if (tile != null) {
                    var enemy = assets.TiletoGameObject(tile);
                    if (enemy.GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
                        goMethods.GetGameObjectOrSpawnFromTile(pos);
                    }
                }
            }
        }
    }

    public ItemAbstract InstantiateItem(ItemAbstract item) {
        var clone = Instantiate(item);
        clone.name = item.name;
        return clone;
    }

    public GameObject InstantiateGameObject(GameObject go) {
        var clone = Instantiate(go);
        clone.name = go.name;
        return clone;
    }
}
