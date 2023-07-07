using Panda;
using Panda.Examples.PlayTag;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UIElements;
using static ItemStatic;

public class GridManager : MonoBehaviour {
    public static GridManager i;

    public GridGraphics graphics;
    public AssetManager assets;
    public GridTools tools;

    [Header("Dimentions")]
    public GlobalValues globalValues;

    //Grid data
    private MechAbstract[,] mechGrid;
    private Surface[,] surfaceGrid;
    private ItemAbstract[,] itemGrid;
    private GameObject[,] goGrid;

    [NonSerialized] public mechMethods mechMethods;
    [NonSerialized] public itemMethods itemMethods;
    [NonSerialized] public GoMethod goMethods;

    [Header("Tilemaps")]
    public Tilemap mechTilemap;
    public Tilemap surfaceTilemap; 
    public Tilemap itemTilemap;
    public Tilemap goTilemap;
    public Tilemap fogTilemap;
    public Tilemap floorTilemap;
    public Tilemap shadowTilemap;

    public List<ItemAbstract> itemsInActionStack = new List<ItemAbstract>();
    public bool enumeratingStack;

    public void Awake() {
        i = this;

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
                    character.TryGetComponent<PandaBehaviour>(out PandaBehaviour behaviour);
                    if (behaviour) {
                        var state = behaviour.GetComponent<Stats>().state;
                        if (state == PartyManager.State.Idle)
                            behaviour.tickOn = BehaviourTree.UpdateOrder.Update;
                    }
                    CallTickAndStartOfTurn(position, character.GetComponent<Inventory>(), currentCharacter, character.GetComponent<Stats>().state);
                }

                if (mechGrid[x, y]) mechGrid[x, y].Call(position, MechStatic.Signal.Tick);
                if (surfaceGrid[x, y]) surfaceGrid[x, y].Call(position);
            }
        }
        StartStack();

        int meezie = 0;
        while(meezie < 10) {
            MeezieCall(meezie);
            meezie++;
        }
    }

    public void MeezieCall(int meezie) {
        if(meezie == 6) {
            Debug.Log("beezie");
        }
    }

    public void CallTickAndStartOfTurn(Vector3Int position, Inventory invetory, GameObject currentCharacter, PartyManager.State state) {
        if (state == PartyManager.State.Combat) {
            if (invetory.gameObject == currentCharacter) {
                invetory.CallTraitsAndStatusEffects(position, position, Signal.Tick);
            }
            return;
        }
        invetory.CallTraitsAndStatusEffects(position, position, Signal.Tick);
        invetory.CallTraitsAndStatusEffects(position, position, Signal.StartOfTurn);
    }

    public void StartStack() {
        MouseManager.i.disableMouse = true;
        if (itemsInActionStack.Count == 0) { EndStack(); return; }
        enumeratingStack = true;
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
        if (currentCharacter.GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
            return;
        }
        foreach (var party in PartyManager.i.party) {
            if (party) { party.GetComponent<NPCSearch>().Search(); }
        }
        MouseManager.i.disableMouse = false;
        MouseManager.i.EndOfActionFinal();
        UpdateGame();
    }

    public void UpdateGame() {
        var currentCharacter = PartyManager.i.currentCharacter;
        if (!currentCharacter) { return; }

        if (currentCharacter.activeSelf) {
            if (PartyManager.i.party.Contains(currentCharacter)) {
                InstantiateGosMechsSurfacesAroundCharacters();
                GameUIManager.i.actionPointsText.text = currentCharacter.GetComponent<Stats>().actionPoints.ToString();
            }
            InventoryManager.i.UpdateInventory();
        }

        ClearSemiFog();
        graphics.UpdateEverything();
    }

    public void AddToStack(ItemAbstract item) {
        itemsInActionStack.Add(Instantiate(item));
    }

    public void InsertToStack(ItemAbstract item) {
        itemsInActionStack.Insert(0, Instantiate(item));
    }


    public ItemAbstract ParentInStack(ItemAbstract item) {
        bool found = false;
        foreach (ItemAbstract itemInStack in itemsInActionStack) {
            if (itemInStack == item) { found = true; continue; }
            if (found) { if (itemInStack is Weapon || itemInStack is Skill || item is Item) return itemInStack; }
        }
        return null;
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
        GameObject dontDestroyOnLoad = GameObject.Find("DontdestroyOnLoadAccessor");
        if (dontDestroyOnLoad == null) { goto DebugSpawn; }
        GameObject[] partyFromLastScene = DontdestroyOnLoadAccessor.Instance.GetAllRootsOfDontDestroyOnLoad();
        if (partyFromLastScene.Length > 0) {
            foreach (GameObject character in partyFromLastScene) {
                if (character.TryGetComponent(out Stats stats)) {
                    if (stats == null || character.activeSelf == false) { continue; }
                    var pos =goMethods.FindFloodFillCellForGo(position, character);
                    goMethods.SetGameObject(pos, character);
                    character.transform.position = pos + new Vector3(0.5f,0.5f);
                    PartyManager.i.AddPartyMember(character);
                }
            }
            return;
        }
        DebugSpawn:
        foreach (GameObject character in globalValues.partyPrefabs) {
            var clone = goMethods.SpawnFloodFill(position, character);
            PartyManager.i.AddPartyMember(clone);
            clone.transform.parent = null;
        }
    }

    void OnDrawGizmosSelected() {
        // Draw a semitransparent red cube at the transforms position
        Gizmos.color = new Color(1, 0.2f, 0.2f, 0.3f);
        Gizmos.DrawCube(new Vector3(globalValues.width /2, globalValues.height /2), new Vector3(globalValues.width, globalValues.height));
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
        CreateFog();
        SpawnParty();
        UpdateGame();
        GameUIManager.i.actionPointsText.text = globalValues.partyPrefabs[0].GetComponent<Stats>().actionPointsBase.ToString();
        ClearFog();
        ClearSemiFog();
       
        foreach (var party in PartyManager.i.party) {
            if(party)
            party.GetComponent<NPCSearch>().Search();
        }
        if (PartyManager.i.currentCharacter == null) { fogTilemap.gameObject.SetActive(false); }
        GameUIManager.i.UpdatePartyIcons(PartyManager.i.party);
    }

    public void CreateFog() {
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                var pos = new Vector3Int(x, y);
                fogTilemap.SetTile(pos, globalValues.bigFog);
            }
        }
    }

    public void ClearFog() {
       
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                var pos = new Vector3Int(x, y);
                if (!fogTilemap.GetTile(pos)) 
                    fogTilemap.SetTile(pos, globalValues.fogSemi);
            } 
        }

        var party = PartyManager.i.party;
        foreach (GameObject member in party) {
            if (member == null) { continue; }
            var position = member.Position();
            tools.FloodFill(position, goTilemap, fogTilemap,1000 , globalValues.fogSemi,1000);
        }
    }
    public void ClearFogDoor(Vector3Int position) {
        tools.FloodFill(position, goTilemap, fogTilemap, 1000, globalValues.fogSemi, 1000);
        ClearSemiFog();
    }

    public void ClearSemiFog() {
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                var pos = new Vector3Int(x, y);
                if (!fogTilemap.GetTile(pos))
                    fogTilemap.SetTile(pos, globalValues.fogSemi);
            }
        }
        var party = PartyManager.i.party;
        int i = 0;
        foreach (GameObject member in party) {
            if (member == null) { continue; }
            var position = member.Position();
            if(position == globalValues.NullValue) { continue; }
            tools.FloodFill(position, goTilemap, fogTilemap, globalValues.fogFill, null, globalValues.fogDistance);
            i++;
        }
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
            var combined = surfaceFound.Combine(position, surface);
            if (combined) { Debug.Log("Combined true"); return; }
        }
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
        mechGrid[position.x, position.y] = prefab;
        prefab.Call(position, MechStatic.Signal.OnEnable);
        return prefab;
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
                    if (floorTilemap.GetTile(checkPos)) {
                        GetOrSpawnSurface(checkPos);
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
