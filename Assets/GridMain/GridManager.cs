using Panda;
using System;
using System.Collections;
using System.Collections.Generic;
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
    private SurfaceAbstract[,] mechGrid;
    private SurfaceAbstract[,] surfaceGrid;
    private ItemAbstract[,] itemGrid;
    private GameObject[,] goGrid;

    [NonSerialized] public mechMethods mechMethods;
    [NonSerialized] public itemMethods itemMethods;
    [NonSerialized] public GoMethod goMethods;

    //NPC tick
    public List<PandaBehaviour> NPCBehaviours = new List<PandaBehaviour>();

    // Tilemaps
    public Tilemap mechTilemap;
    public Tilemap surfaceTilemap; 
    public Tilemap itemTilemap;
    public Tilemap goTilemap;
    public Tilemap fogTilemap;
    public Tilemap miniTilemap;
    public Tilemap walkableTilemap;
    public Vector3Int NullValue = new Vector3Int(-1, -1, 0);

    //TEST OBJECTS
    public List<GameObject> partyPrefabs = new List<GameObject>();
    public TileBase fog;
    public TileBase bigFog;
    public TileBase fogWall;
    public TileBase fogSemi;
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

    public List<ItemAbstract> itemsInActionStack = new List<ItemAbstract>();

    public void StartStack() {
        MouseManager.i.disableMouse = true;
    }
    public IEnumerator Stack() {
        foreach(ItemAbstract item in itemsInActionStack) {
            //yield return StartCoroutine(item.Action);
        }
       yield return null;
    }

    public void EndStack() {
        MouseManager.i.disableMouse = false;
    }

    public void Awake() {
        i = this;
       
        assets = new AssetManager();
        tools = new GridTools();
        Initialize();
        //mechMethods = new mechMethods(mechGrid, assets, mechTilemap);
        itemMethods = new itemMethods(itemGrid, assets, itemTilemap);
        goMethods = new GoMethod(goGrid,assets,goTilemap,walkableTilemap);
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

    public void mechFloorTick() {
        Vector3Int position = Vector3Int.zero;
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                position.x = x; position.y = y;
                if (mechGrid[x, y]) mechGrid[x, y].Call(position);
                if (surfaceGrid[x, y]) surfaceGrid[x, y].Call(position);
            }
        }
    }

    public void SpawnParty() {
        var position = FindEntrance();
        GameObject dontDestroyOnLoad = GameObject.Find("DontdestroyOnLoadAccessor");
        if (dontDestroyOnLoad == null) { goto DebugSpawn; }
        GameObject[] partyFromLastScene = DontdestroyOnLoadAccessor.Instance.GetAllRootsOfDontDestroyOnLoad();
        if (partyFromLastScene.Length > 0) {
            foreach (GameObject character in partyFromLastScene) {
                GameObject clone = null;
                if (character.TryGetComponent<Stats>(out Stats stats)) {
                    if (stats == null || character.activeSelf == false) { continue; }
                    clone = goMethods.SpawnFloodFill(position, character);
                    PartyManager.i.AddPartyMember(clone);
                    if (clone.TryGetComponent<CharacterCreator>(out CharacterCreator cc)) {
                        if (cc == null) { continue; }
                        Destroy(cc);
                        Destroy(clone.GetComponent<CharacterCreator>());
                    }
                }
            }
            return;
        }
        DebugSpawn:
        foreach (GameObject character in partyPrefabs) {
            var clone = goMethods.SpawnFloodFill(position, character);
            PartyManager.i.AddPartyMember(clone);  
        }
    }

    void OnDrawGizmosSelected() {
        // Draw a semitransparent red cube at the transforms position
        Gizmos.color = new Color(1, 1, 1, 0.2f);
        Gizmos.DrawCube(new Vector3(width/2, height/2), new Vector3(width, height));
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
        UpdateGame();
        GameUIManager.i.actionPointsText.text = partyPrefabs[0].GetComponent<Stats>().actionPointsBase.ToString();
        ClearFog();
        ClearSemiFog();
        foreach (var party in PartyManager.i.party) {
            party.GetComponent<NPCSearch>().Search();
        }
    }

    public void CreateFog() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                fogTilemap.SetTile(pos, bigFog);
            }
        }
    }

    public void ClearFog() {
       
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                if (!fogTilemap.GetTile(pos)) 
                    fogTilemap.SetTile(pos, fogSemi);
            } 
        }


        /*
        foreach (GameObject member in party) {
            if(member == null) { continue; }
            var position = member.position();
            tools.FloodFill(position, goTilemap, fogTilemap, outerFogFill, fogWall,outerFogDistance);
        }
        */
        var party = PartyManager.i.party;
        foreach (GameObject member in party) {
            if (member == null) { continue; }
            var position = member.position();
            tools.FloodFill(position, goTilemap, fogTilemap,1000 ,fogSemi,1000);
        }
    }
    public void ClearFogDoor(Vector3Int position) {
        /*
   for (int x = 0; x < width; x++) {
       for (int y = 0; y < height; y++) {
           var pos = new Vector3Int(x, y);
           if (!fogTilemap.GetTile(pos))
               fogTilemap.SetTile(pos, fogSemi);
       }
   }



   foreach (GameObject member in party) {
       if(member == null) { continue; }
       var position = member.position();
       tools.FloodFill(position, goTilemap, fogTilemap, outerFogFill, fogWall,outerFogDistance);
   }
   */
        tools.FloodFill(position, goTilemap, fogTilemap, 1000, fogSemi, 1000);
    }

    public void ClearSemiFog() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var pos = new Vector3Int(x, y);
                if (!fogTilemap.GetTile(pos))
                    fogTilemap.SetTile(pos, fogSemi);
            }
        }
        var party = PartyManager.i.party;
        foreach (GameObject member in party) {
            if (member == null) { continue; }
            var position = member.position();
            if(position == NullValue) { continue; }
            tools.FloodFill(position, goTilemap, fogTilemap, fogFill, null, fogDistance);
        }
    }

    public void SpawnCharacter(GameObject character, Vector3Int position, Color colour) {
        var clone = Instantiate(character);
        goGrid[position.x, position.y] = clone;
        clone.transform.position = new Vector3(position.x + 0.5f, position.y + 0.5f, 0);
        PartyManager.i.AddPartyMember(clone);
        clone.GetComponent<SpriteRenderer>().color = colour;
        InventoryManager.i.UpdateSpriteFromItems(clone.GetComponent<Inventory>());
    }

    public GameObject[,] GetGoGrid() {
        return goGrid;
    }

    public SurfaceAbstract GetOrSpawnSurface(Vector3Int position) {
        var item = surfaceGrid[position.x, position.y];
        if (item) { return item; }
        var tile = surfaceTilemap.GetTile<Tile>(position);
        if (!tile) { return null; }
        var prefab = Instantiate(assets.TiletoSurface(tile));
        if (!prefab) { return null; }
        surfaceGrid[position.x, position.y] = prefab;
        return prefab;
    }

    public void RemoveSurface(Vector3Int position) {
        surfaceGrid[position.x, position.y] = null;
        surfaceTilemap.SetTile(position, null);
    }

    public SurfaceAbstract GetOrSpawnMech(Vector3Int position) {
        var item = mechGrid[position.x, position.y];
        if (item) { return item; }
        var tile = mechTilemap.GetTile<Tile>(position);
        if (!tile) { return null; }
        var prefab = assets.TiletoMech(tile);
        if (!prefab) { return null; }
        mechGrid[position.x, position.y] = prefab;
        return prefab;
    }

    public void InstantiateGosMechsSurfacesAroundCharacters() {
        int size = 12;
        var party = PartyManager.i.party;
        var checkPos = Vector3Int.zero;
        foreach (GameObject member in party) {
            var pos = member.position();
            for (int x = pos.x - size; x < pos.x + size; x++) {
                for (int y = pos.y + size; y >= pos.y - size; y--) {
                    checkPos.x = x;checkPos.y = y;
                    if (walkableTilemap.GetTile(checkPos)) {
                        GetOrSpawnSurface(checkPos);
                        GetOrSpawnMech(checkPos);
                        goMethods.GetGameObjectOrSpawnFromTile(checkPos);
                    }
                }
            }
        }
    }

    public void UpdateGame() {
        InstantiateGosMechsSurfacesAroundCharacters();
        graphics.UpdateEverything();
        GameUIManager.i.actionPointsText.text = PartyManager.i.currentCharacter.GetComponent<Stats>().actionPoints.ToString();
        InventoryManager.i.UpdateInventory();
    }

    public void TickGame() {
        var currentCharacter = PartyManager.i.currentCharacter;
        foreach (GameObject member in PartyManager.i.party) {
            if(member)
            member.GetComponent<NPCSearch>().Search();
        }
        foreach (var player in PartyManager.i.party) {
            if (!player) { continue; }
            var position = player.position(); //CHANGE THIS TO NOT BE SUPER SLOW
            if (player.GetComponent<Stats>().state == PartyManager.State.Combat) { 
                if(player == currentCharacter) {
                    player.GetComponent<Inventory>().CallTraitsAndStatusEffects(position, position, ItemAbstract.Signal.Tick);
                }
                continue; 
            }
            player.GetComponent<Inventory>().CallTraitsAndStatusEffects(position, position, ItemAbstract.Signal.Tick);
            player.GetComponent<Inventory>().CallTraitsAndStatusEffects(position, position, ItemAbstract.Signal.StartOfTurn);
        }
        foreach (PandaBehaviour behaviour in NPCBehaviours) {
            if (!behaviour) { continue; }
            var position = behaviour.gameObject.position(); //CHANGE THIS TO NOT BE SUPER SLOW
            if (PartyManager.i.enemyParty.Contains(behaviour.gameObject)) {
                if (behaviour.gameObject == currentCharacter) {
                    behaviour.GetComponent<Inventory>().CallTraitsAndStatusEffects(position, position, ItemAbstract.Signal.Tick);
                }
                continue; 
            }
            behaviour.GetComponent<Inventory>().CallTraitsAndStatusEffects(position, position, ItemAbstract.Signal.Tick);
            behaviour.GetComponent<Inventory>().CallTraitsAndStatusEffects(position, position, ItemAbstract.Signal.StartOfTurn);
            behaviour.tickOn = BehaviourTree.UpdateOrder.Update;
        }
        mechFloorTick();
        UpdateGame();
    }

    public bool FogTile(Vector3Int position) {
        if(fogTilemap.GetTile(position) == fog) {
            return true;
        }
        return false;
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
