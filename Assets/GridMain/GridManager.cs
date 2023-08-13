using Panda;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Burst;
using UnityEngine;
using UnityEngine.Tilemaps;
using static ItemStatic;

public class GridManager : MonoBehaviour {
    public static GridManager i;
    public List<GameObject> partyPrefabs = new List<GameObject>();
    public GridGraphics graphics;
    public AssetManager assets;
    public GridTools tools;

    private GlobalValues globalValues;

    //Grid data
    private MechAbstract[,] mechGrid;
    private Surface[,] surfaceGrid;
    private ItemAbstract[,] itemGrid;
    private GameObject[,] goGrid;
    private int[,] fogMap;

    [NonSerialized] public mechMethods mechMethods;
    [NonSerialized] public itemMethods itemMethods;
    [NonSerialized] public GoMethod goMethods;

    [Header("Tilemaps")]
    public Tilemap mechTilemap;
    public Tilemap surfaceTilemap; 
    public Tilemap itemTilemap;
    public Tilemap goTilemap;
    public Tilemap fogTilemap;
    public Tilemap fogDarkTilemap;
    public Tilemap floorTilemap;
    public Tilemap shadowTilemap;

    public List<ItemAbstract> itemsInActionStack = new List<ItemAbstract>();
    public bool enumeratingStack;
    public int lootCounter = 1;
    public void Awake() {
        i = this;
        globalValues = Manager.GetGlobalValues();
        assets = new AssetManager();
        tools = new GridTools(globalValues);
        Initialize();
        mechMethods = new mechMethods(mechGrid, assets, mechTilemap);
        itemMethods = new itemMethods(itemGrid, assets, itemTilemap,globalValues);
        goMethods = new GoMethod(goGrid, assets, goTilemap, floorTilemap, globalValues);
        graphics = new GridGraphics(globalValues.width, globalValues.height, mechGrid, surfaceGrid, goGrid, itemGrid, goTilemap, itemTilemap, mechTilemap, surfaceTilemap, shadowTilemap, globalValues);
        ExtensionMethods.SetReferences();
    }

    public void Initialize() {
        //Initialize grids
        mechGrid = new MechAbstract[globalValues.width, globalValues.height];
        surfaceGrid = new Surface[globalValues.width, globalValues.height];
        itemGrid = new ItemAbstract[globalValues.width, globalValues.height];
        goGrid = new GameObject[globalValues.width, globalValues.height];
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                mechGrid[x, y] = null;
                surfaceGrid[x, y] = null;
                itemGrid[x, y] = null;
                goGrid[x, y] = null;
            }
        }
    }

    public void TickGame() {
        var currentCharacter = PartyManager.i.currentCharacter;
        Vector3Int position = Vector3Int.zero;
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                position.x = x;
                position.y = y;
                GameObject character = goGrid[x, y];
                if (character) {
                    character.TryGetComponent<PandaBehaviour>(out PandaBehaviour panda);
                    if (panda) {
                        var state = panda.GetComponent<Stats>().state;
                        if (state == PartyManager.State.Idle)
                            panda.tickOn = BehaviourTree.UpdateOrder.Update;
                    }
                    CallTickAndStartOfTurn(position, character.GetComponent<Inventory>(), currentCharacter, character.GetComponent<Stats>().state);
                }

                if (mechGrid[x, y]) mechGrid[x, y].Call(position, MechStatic.Signal.Tick);
                if (surfaceGrid[x, y]) surfaceGrid[x, y].Call(position);
            }
        }
        StartStack();
    }

    public void CallTickAndStartOfTurn(Vector3Int position, Inventory invetory, GameObject currentCharacter, PartyManager.State state) {
        if (state == PartyManager.State.Combat) {
            if (invetory.gameObject == currentCharacter) {
                invetory.CallTraitsAndStatusEffects(position, position, Signal.Tick,invetory.gameObject);
            }
            return;
        }
        invetory.CallTraitsAndStatusEffects(position, position, Signal.Tick, invetory.gameObject);
        invetory.CallTraitsAndStatusEffects(position, position, Signal.OnSwitchFactionTurn, invetory.gameObject);
        invetory.ReduceCoolDowns();
    }

    public void StartStack() {
        if(DevHotkeys.i.suspendStack == true) { return; }

        MouseManager.i.disableMouse = true;
        if (itemsInActionStack.Count == 0) { EndStack(); return; }
        enumeratingStack = true;
        Debug.Log(itemsInActionStack.Count);
        StartCoroutine(Stack());
    }

    //After 4 hours I cannot find this bug so I am making a terrible hack
    //For some reason some items are being called multiple times
    List<ItemAbstract> itemsCheckedHack = new List<ItemAbstract> ();
    public IEnumerator Stack() {
        itemsCheckedHack.Clear();
        while (itemsInActionStack.Count > 0) {
            var item = itemsInActionStack[0];
            if (itemsCheckedHack.Contains(item)) { itemsInActionStack.Remove(item); continue; }
            itemsCheckedHack.Add(item);
            yield return StartCoroutine(item.Action());
            itemsInActionStack.Remove(item);
        }
        EndStack();
    }

    public void EndStack() {
        ClearInactiveGameObjects();
        var currentCharacter = PartyManager.i.currentCharacter;
        enumeratingStack = false;
        if (!currentCharacter) { return; }
        if (currentCharacter.tag == "Party") { MouseManager.i.disableMouse = false; }  

        if (currentCharacter.tag == "Enemy") {
            return;
        }

        foreach (var party in PartyManager.i.party) {
            if (party) { party.GetComponent<NPCSearch>().Search(); }
        }
        MouseManager.i.EndOfActionFinal();
        UpdateGame();
    }

    public void UpdateGame() {
        var currentCharacter = PartyManager.i.currentCharacter;
        if (!currentCharacter) { return; }

        if (currentCharacter.activeSelf) {
            if (PartyManager.i.party.Contains(currentCharacter)) {
                //InstantiateGosMechsSurfacesAroundCharacters();
                GameUIManager.i.actionPointsText.text = currentCharacter.GetComponent<Stats>().actionPoints.ToString();
                InventoryManager.i.UpdateInventory();
            }
        }

        ClearSemiFog();
        graphics.UpdateEverything();
    }

    public void AddToStack(ItemAbstract item) {
        if (item == null) {
            System.Diagnostics.StackTrace stackTrace = new System.Diagnostics.StackTrace();
            System.Reflection.MethodBase methodBase = stackTrace.GetFrame(1).GetMethod();
            Debug.LogError("Missing item from "+ methodBase.DeclaringType.Name + " Called by " + methodBase.Name);
        }

        Debug.Log(item.name + Time.deltaTime);
        itemsInActionStack.Add(Instantiate(item));
    }

    public void AddToStack(ItemAbstract item, bool instantiate) {
        if (item == null) {
            System.Diagnostics.StackTrace stackTrace = new System.Diagnostics.StackTrace();
            System.Reflection.MethodBase methodBase = stackTrace.GetFrame(1).GetMethod();
            Debug.LogError("Missing item from " + methodBase.DeclaringType.Name + " Called by " + methodBase.Name);
        }

        Debug.Log(item.name + Time.deltaTime);
        if (instantiate) { itemsInActionStack.Add(Instantiate(item)); return; }
        itemsInActionStack.Add(item);
    }

    public void InsertToStack(ItemAbstract item) {
        if (item == null) {
            System.Diagnostics.StackTrace stackTrace = new System.Diagnostics.StackTrace();
            System.Reflection.MethodBase methodBase = stackTrace.GetFrame(1).GetMethod();
            Debug.LogError("Missing item from " + methodBase.DeclaringType.Name + " Called by " + methodBase.Name);
        }
        itemsInActionStack.Insert(0, Instantiate(item));
    }

    public void ClearInactiveGameObjects() {
        List<GameObject> gosToRemove = new List<GameObject>();
        foreach (Transform child in transform) {
            if (!child.gameObject.activeSelf) { gosToRemove.Add(child.gameObject); }
        }
        while (gosToRemove.Count > 0) {
            var go = gosToRemove[0];
            gosToRemove.Remove(go);
            Destroy(go);
        }

    }

    public void SpawnParty() {
        var position = FindEntrance();
        if (position == Vector3Int.zero) { RoomGenerator.i.Generate(); return; }
        GameObject dontDestroyOnLoad = GameObject.Find("DontdestroyOnLoadAccessor");
        if (dontDestroyOnLoad == null) { goto DebugSpawn; }
        GameObject[] partyFromLastScene = DontdestroyOnLoadAccessor.Instance.GetAllRootsOfDontDestroyOnLoad();
        if (partyFromLastScene.Length > 0) {
            foreach (GameObject character in partyFromLastScene) {
                if (character.TryGetComponent(out Stats stats)) {
                    if (stats == null || character.activeSelf == false) { continue; }
                    var pos =goMethods.FindFloodFillCellForGo(position);
                    goMethods.SetGameObject(pos, character);
                    stats.InitializeCharacter();
                    character.transform.position = pos + new Vector3(0.5f,0.5f);
                    PartyManager.i.AddPartyMember(character);
                }
            }
            return;
        }
        DebugSpawn:
        foreach (GameObject character in partyPrefabs) {
            var clone = goMethods.SpawnFloodFill(position, character);
            var stats = clone.GetComponent<Stats>();
            stats.InitializeCharacter();
            PartyManager.i.AddPartyMember(clone);
            clone.transform.parent = null;
        }
    }

    void OnDrawGizmos() {
        return;
        //Draw a semitransparent red cube at the transforms position
        if (!globalValues) { return; }
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                if (fogMap[x,y] == 0) {
                    Gizmos.color = Color.red;
                    Gizmos.DrawCube(new Vector3(x+0.5f,y+0.5f),new Vector3(1,1));
                }
                if (fogMap[x, y] == 1) {
                    Gizmos.color = Color.yellow;
                    Gizmos.DrawCube(new Vector3(x + 0.5f, y + 0.5f), new Vector3(1, 1));
                }
                if (fogMap[x, y] == 2) {
                    Gizmos.color = Color.green;
                    Gizmos.DrawCube(new Vector3(x + 0.5f, y + 0.5f), new Vector3(1, 1));
                }
            }
        }

    }

    public Vector3Int FindEntrance() {
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                var pos = new Vector3Int(x, y);
                if(mechTilemap.GetTile(pos) == globalValues.entrance) {
                    return pos;
                }
            }
        }
        Debug.LogError("CANT FIND ENTRANCE");
        return Vector3Int.zero;
    }

    //TEST START
    public void Start() {
        TryGetComponent<RoomGenerator>(out RoomGenerator gen);
        if (!gen) { BeginGame(); }
    }

    public void BeginGame() {
        GenerateFogMap();
        CreateFog();
        SpawnParty();
        UpdateGame();
        GameUIManager.i.actionPointsText.text = partyPrefabs[0].GetComponent<Stats>().actionPointsBase.ToString();
        //ClearFog();
       

        foreach (var party in PartyManager.i.party) {
            if (party)
                party.GetComponent<NPCSearch>().Search();
        }
        if (PartyManager.i.currentCharacter == null) { fogTilemap.gameObject.SetActive(false); }
        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
        ClearFogDoor(PartyManager.i.party[0].Position());
        ClearSemiFog();
    }

    public void CreateFog() {
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                var pos = new Vector3Int(x, y);
                fogDarkTilemap.SetTile(pos, globalValues.bigFog);
                fogTilemap.SetTile(pos, globalValues.fogSemi);
            }
        }
    }

    public void ClearFogDoor(Vector3Int position) {
        tools.FloodFill(position, fogMap, 1000,null, fogDarkTilemap);
    }

    [BurstCompile]public void GenerateFogMap() {
        fogMap = new int[globalValues.width, globalValues.height];
        var offset =new Vector3Int(0, 1);
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = globalValues.height -1; y > 1; y--) {
                var pos = new Vector3Int(x, y);
                fogMap[x,y] = 0;
            
                if (floorTilemap.GetTile(pos)) {

                    fogMap[x, y] = 2;
                    if (!floorTilemap.GetTile(pos + offset)) {
                        fogMap[x, y + 1] = 2;
                        fogMap[x, y + 2] = 2;
                    }
                }
            }
        }

        for (int x = 0; x < globalValues.width; x++) {
            for (int y = globalValues.height - 1; y > 1; y--) {
                var pos = new Vector3Int(x, y);
                var tile = goTilemap.GetTile(pos);

                if (floorTilemap.GetTile(pos)) {
                    if (assets.IsDoor(tile)) {
                        SetFogMapTile(pos, 1);
                        SetFogMapTile(pos + new Vector3Int(0, 1), 1);
                        SetFogMapTile(pos + new Vector3Int(0, 2), 1);
                    }
                }
            }
        }
    }

    public void SetFogMapTile(Vector3Int position, int value) {
        fogMap[position.x, position.y] = value;
    }
    public HashSet<Vector3Int> tilesToFill = new HashSet<Vector3Int>();
    public HashSet<Vector3Int> tilesToFill2 = new HashSet<Vector3Int>();
    //This shit is 14 times faster now with the two hashsets!
    public void ClearSemiFog() {
        var fogTile = globalValues.fogSemi;
        tilesToFill.Clear();
        var party = PartyManager.i.party;
        int i = 0;
        foreach (GameObject member in party) {
            if (member == null) { continue; }
            var position = member.Position();
            if(position == globalValues.NullValue) { continue; }
            var circle = tools.Circle(6, position);
            foreach (var cell in circle) {
                if (!FogInSight(cell, position)) { continue; }
                if (!tilesToFill.Contains(cell)) { tilesToFill.Add(cell); }
            }
            i++;
        }
        foreach(var cell in tilesToFill2) {
            if (!tilesToFill.Contains(cell)) {
                fogTilemap.SetTile(cell, fogTile);
            }
        }
        tilesToFill2.Clear();

        foreach (var tile in tilesToFill) {
            if(fogTilemap.GetTile(tile))
            fogTilemap.SetTile(tile, null); 
        }
        foreach(var item in tilesToFill) {
            tilesToFill2.Add(item);
        }
    }

    public bool FogInSight(Vector3Int position, Vector3Int origin) {
        var line = tools.BresenhamLine(position.x, position.y, origin.x, origin.y);
        foreach (var cell in line) {
            if (fogMap[cell.x, cell.y] == 0) {
                return false;
            }
        }
        return true;
    }

    public void SpawnCharacter(GameObject character, Vector3Int position) {
        var clone = Instantiate(character);
        goGrid[position.x, position.y] = clone;
        clone.transform.position = new Vector3(position.x + 0.5f, position.y + 0.5f, 0);
        PartyManager.i.AddPartyMember(clone);
        CharacterSpriteGenerator.CreateCharacterSprite(clone);
    }

    public GameObject[,] GetGoGrid() {
        return goGrid;
    }

    public Surface GetOrSpawnSurface(Vector3Int position) {
        var item = surfaceGrid[position.x, position.y];
        if (item) { return item; }
        var tile = surfaceTilemap.GetTile(position);
        if (!tile) { return null; }
        var prefab = Instantiate(assets.TiletoSurface(tile));
        if (!prefab) { return null; }
        surfaceGrid[position.x, position.y] = prefab;
        return prefab;
    }

    public void CombineOrSetSurface(Vector3Int position, Surface surface) {
        var surfaceFound = surfaceGrid[position.x, position.y];
        if (surfaceFound) {
            surfaceFound.Combine(position, surface);
            return;
        }
        if(surface.duration.y == 0) { return; }
        surfaceTilemap.SetTile(position, surface.tile);
        var surfaceOnGround = GetOrSpawnSurface(position);
        surfaceOnGround.Call(position);
    }

    public bool CombineSurface(Vector3Int position, Surface surface) {
        var surfaceFound = surfaceGrid[position.x, position.y];
        if (surfaceFound) {
            var combined = surfaceFound.Combine(position, surface);
            if (combined) { return true; }
        }
        return false;
    }

    public void SetSurface(Vector3Int position,Surface surface) {
        RemoveSurface(position);
        if (surface == null) {
            surfaceTilemap.SetTile(position, null);
            return; }
        surfaceTilemap.SetTile(position, surface.tile);
        var surfaceOnGround = GetOrSpawnSurface(position);
        surfaceOnGround.Call(position);
    }

    public void RemoveSurface(Vector3Int position) {
        if(surfaceGrid[position.x, position.y]) { surfaceGrid[position.x, position.y].KillSurface(position); }
      
        surfaceGrid[position.x, position.y] = null;
        surfaceTilemap.SetTile(position, null);
    }

    public MechAbstract GetOrSpawnMech(Vector3Int position) {
        var item = mechGrid[position.x, position.y];
        if (item) { return item; }
        var tile = mechTilemap.GetTile(position);
        if (!tile) { return null; }
        var prefab = assets.TiletoMech(tile);
        if (!prefab) { return null; }
        var clone = Instantiate(prefab);
        mechGrid[position.x, position.y] = clone;
        clone.Call(position, MechStatic.Signal.OnEnable);
        return clone;
    }

    public void InstantiateCell(Vector3Int checkPos) {
        if (!tools.InBounds(checkPos)) { return; }
        if (floorTilemap.GetTile(checkPos)) {
            GetOrSpawnSurface(checkPos);
            itemMethods.GetItemOrSpawnFromTile(checkPos);
            GetOrSpawnMech(checkPos);
            goMethods.GetGameObjectOrSpawnFromTile(checkPos);
        }
    }

    public void InstantiateGosMechsSurfacesAroundCharacters() {
        int size = 12;
        var party = PartyManager.i.party;
        var checkPos = Vector3Int.zero;
        foreach (GameObject member in party) {
            var pos = member.Position();
            for (int x = pos.x - size; x < pos.x + size; x++) {
                for (int y = pos.y + size; y >= pos.y - size; y--) {
                   
                    checkPos.x = x;checkPos.y = y;
                    if (!tools.InBounds(checkPos)) { continue; }
                    if (floorTilemap.GetTile(checkPos)) {
                        GetOrSpawnSurface(checkPos);
                        itemMethods.GetItemOrSpawnFromTile(checkPos);
                        GetOrSpawnMech(checkPos);
                        goMethods.GetGameObjectOrSpawnFromTile(checkPos);
                    }
                }
            }
        }
    }


public bool FogTile(Vector3Int position) {
    if(fogTilemap.GetTile(position) == globalValues.fog) {
        return true;
    }
        return false;
    }

    public ItemAbstract InstantiateItem(ItemAbstract item) {
        var clone = Instantiate(item);
        clone.name = item.name;
        return clone;
    }

    public GameObject InstantiateGo(GameObject go) {
        var clone = Instantiate(go,transform);
        clone.name = go.name;
        return clone;
    }

    public GameObject InstantiateNonCharacterGameObject(GameObject go) {
        var clone = Instantiate(go);
        clone.name = go.name;
        return clone;
    }


}
