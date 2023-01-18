using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.Tilemaps;
using static UnityEditor.PlayerSettings;

public class GridManager : MonoBehaviour {
    public static GridManager i;

    public GridGraphics graphics;
    public AssetManager assets;
    public GridTools tools;
    //private MapGenerator mapgenerator;

    public int width;
    public int height;

    //Grid data
    private SurfaceAbstract[,] mechGrid;
    private SurfaceAbstract[,] surfaceGrid;
    private ItemAbstract[,] itemGrid;
    private GameObject[,] goGrid;

    [NonSerialized] public mechMethods mechMethods;
    [NonSerialized] public itemMethods itemMethods;
    [NonSerialized] public GoMethod goMethods;

    // Tilemaps
    public Tilemap mechTilemap;
    public Tilemap surfaceTilemap; 
    public Tilemap itemTilemap;
    public Tilemap goTilemap;
    public Tilemap fogTilemap;
    public Tilemap miniTilemap;
    public Vector3Int NullValue = new Vector3Int(-1, -1, 0);

    //TEST OBJECTS
    public List<GameObject> partyPrefabs = new List<GameObject>();
    public TileBase fog;
    public TileBase fogWall;
    public TileBase entrance;
    public Tile miniWall;
    public Tile miniSpace;
    public Tile miniDoor;
    public Tile miniParty;
    public Tile goTile;
    public int fogFill;
    public int outerFogFill;
    public float fogDistance;
    public float outerFogDistance;

    public void Awake() {
        i = this;
       
        assets = new AssetManager();
        tools = new GridTools();
        Initialize();
        //mechMethods = new mechMethods(mechGrid, assets, mechTilemap);
        itemMethods = new itemMethods(itemGrid, assets, itemTilemap);
        goMethods = new GoMethod(goGrid,assets,goTilemap);
        graphics = new GridGraphics(width, height, mechGrid, surfaceGrid, goGrid, itemGrid, goTilemap, itemTilemap, mechTilemap, surfaceTilemap, goTile);
    }

    public void Initialize() {
        //Initialize grids
        mechGrid = new SurfaceAbstract[width, height];
        surfaceGrid = new SurfaceAbstract[width, height];
        itemGrid = new ItemAbstract[width, height];
        goGrid = new GameObject[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                mechGrid[x, y] = null;
                surfaceGrid[x, y] = null;
                itemGrid[x, y] = null;
                goGrid[x, y] = null;
            }
        }
    }

    public void Tick() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                Vector3Int position = new Vector3Int(x, y);
                if (mechGrid[x, y]) mechGrid[x, y].Call(position);
                if (surfaceGrid[x, y]) surfaceGrid[x, y].Call(position);
            }
        }
    }

    public void SpawnParty() {
        var position = FindEntrance();
        Debug.Log("Entrance" + position);
        foreach (GameObject character in partyPrefabs) {
            var clone =goMethods.SpawnFloodFill(position, character);
            PartyManager.i.AddPartyMember(clone);   
        }
    }

    public Vector3Int FindEntrance() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                if(mechTilemap.GetTile(pos) == entrance) {
                    return pos;
                }
            }
        }
        Debug.LogError("CANT FIND ENTRANCE");
        return Vector3Int.zero;
    }

    //TEST START
    public void Start() {
        CreateFog();
        SpawnParty();
        //SpawnCharacter(playerPrefab, new Vector3Int(24, 8),Color.white);
        //SpawnCharacter(playerPrefab2, new Vector3Int(25, 8), Color.white);
        UpdateGame();
        GameUIManager.i.actionPointsText.text = partyPrefabs[0].GetComponent<Stats>().baseActionPoints.ToString();
    }

    public void CreateFog() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                fogTilemap.SetTile(pos, fog);
            }
        }
    }

    public void ClearFog() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                if (!fogTilemap.GetTile(pos)) 
                    fogTilemap.SetTile(pos, fogWall);
            } 
        }
        var party = PartyManager.i.party;
        foreach (GameObject member in party) {
            var position = member.position();
            tools.FloodFill(position, goTilemap, fogTilemap, outerFogFill, fogWall,outerFogDistance);
        }
        foreach (GameObject member in party) {
            var position = member.position();
            tools.FloodFill(position, goTilemap, fogTilemap, fogFill, null,fogDistance);
        }
    }

    public void SpawnCharacter(GameObject character, Vector3Int position, Color colour) {
        var clone = Instantiate(character);
        goGrid[position.x, position.y] = clone;
        clone.transform.position = new Vector3(position.x + 0.5f, position.y + 0.5f, 0);
        PartyManager.i.AddPartyMember(clone);
        clone.GetComponent<SpriteRenderer>().color = colour;
        InventoryManager.i.UpdateEquipmentSprites(clone.GetComponent<Inventory>());
    }

    public GameObject[,] GetGoGrid() {
        return goGrid;
    }


    public void UpdateGame() {
        int size = 23;
        var party = PartyManager.i.party;
        foreach (GameObject member in party) {
            var pos = member.position();
            for (int x = pos.x-size; x < pos.x + size; x++) {
                for (int y = pos.y + size; y >= pos.y - size; y--) {
                    var checkPos = new Vector3Int(x, y);
                    if (checkPos.inbounds()) {
                        goMethods.GetGameObjectOrSpawnFromTile(checkPos);
                    }
                }
            }
        }

        ClearFog();
        Tick();
        //mechMethods.ActivateMechanisms(); //IDK ABOUT THIS
        //PartyManager.i.FindEnemies();//IDK ABOUT THIS
        //UPDATING GRAPHICAL CHANGES
        graphics.UpdateEverything();
        //graphics.UpdateGameObjects(width, height, goGrid, goTilemap);

        GameUIManager.i.actionPointsText.text = Actions.i.actionPoints.ToString();

        InventoryManager.i.UpdateInventory();

        //if(PartyManager.i.state == PartyManager.State.Combat) {
        //    var position = PartyManager.i.currentCharacter.position();
       //    var range = Actions.i.CalculateRange(position, null);
        //    GameUIManager.i.ShowRange(position, range);
       // }
       // else {
       //     GameUIManager.i.groundUI.ClearAllTiles();   
      //  }
        //Camera Position Update
    }

    public bool FogTile(Vector3Int position) {
        if(fogTilemap.GetTile(position) == fog) {
            return true;
        }
        return false;
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
        var clone = Instantiate(go,transform);
        clone.name = go.name;
        return clone;
    }
}
