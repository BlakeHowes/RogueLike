using UnityEngine;
using UnityEngine.Tilemaps;
using System.Collections.Generic;
using UnityEngine.UIElements;

public class GoMethod
{
    private GameObject[,] goGrid;
    private AssetManager assets;
    private Tilemap goTilemap;
    private Tilemap floorTilemap;
    private GlobalValues globalValues;
    public GoMethod(GameObject[,] goGrid, AssetManager assets,Tilemap goTilemap,Tilemap floorTilemap,GlobalValues globalValues) {
        this.goGrid = goGrid;
        this.assets = assets;
        this.goTilemap = goTilemap;
        this.floorTilemap = floorTilemap;
        this.globalValues = globalValues;
    }

    public GameObject GetGameObjectOrSpawnFromTile(Vector3Int position) {
        if (!position.InBounds() || !position.IsWalkable()) { return null; }
        var gameobject = goGrid[position.x, position.y];
        if (gameobject != null) {return gameobject;}
        var tile = goTilemap.GetTile(position);
        if (tile == null) { return null; }
        var prefab = assets.TiletoGameObject(tile);
        if (prefab == null) {
            goTilemap.SetTileFlags(position, TileFlags.None);
            goTilemap.SetColor(position, Color.red);
            return null;}

        var clone = GridManager.i.InstantiateGo(prefab);
        //clone.GetComponent<SpriteRenderer>().sprite = goTilemap.GetSprite(position);
        SetGameObject(position, clone);
        clone.GetComponent<Stats>().RecalculateStats(position);
        clone.transform.position = position + new Vector3(0.5f, 0.5f);
        goTilemap.SetTile(position, null);

        return clone;
    }

    public GameObject Spawn(Vector3Int position,GameObject prefab) {
       
        if (prefab == null || !position.IsWalkable()) {
            return null;
        }
        var clone = GridManager.i.InstantiateGo(prefab);
        SetGameObject(position, clone);
        clone.transform.position = position + new Vector3(0.5f, 0.5f,0);
        //goTilemap.SetTile(position,clone.GetComponent<Stats>().tile);
        //goTilemap.SetTileFlags(position, TileFlags.None);
        //goTilemap.SetColor(position, Color.clear);
        return clone;
    }

    public void SetGameObject(Vector3Int position, GameObject gameobject) {
        if (!position.IsWalkable()) { return; }
        goGrid[position.x, position.y] = gameobject;
    }

    public GameObject GetGameObject(Vector3Int position) {
        if (position.InBounds() && position.IsWalkable()) {
            return goGrid[position.x, position.y];
        }
        return null;
    }

    public Vector3Int FirstGameObjectInSightIncludingAllies(Vector3Int Position,Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (cell.IsWall()) { return previousPos; }
            previousPos = cell;
        }
        return Position;
    }

    public Vector3Int FirstGameObjectInSight(Vector3Int Position, Vector3Int Origin) {
        var faction = Origin.GameObjectSpawn().GetComponent<Stats>().faction; 
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (!floorTilemap.GetTile(cell)) { return previousPos; }

            if (goTilemap.GetTile(cell) != null || GetGameObject(cell) != null) {
                var character = GetGameObjectOrSpawnFromTile(cell);
                if(character == null) { continue; }
                var cellFaction = character.GetComponent<Stats>().faction;
                if (cellFaction == faction) { continue; }
                return cell;
            }
            previousPos = cell;
        }
        return Position;
    }

    public Vector3Int ThrownItemLocation(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (!FloorManager.i.IsWalkable(Position)) { return previousPos; }

            if (goTilemap.GetTile(cell) != null || GetGameObject(cell) != null) {
                var character = GetGameObjectOrSpawnFromTile(cell);
                if (character == null) { continue; }
                return previousPos;
            }
            previousPos = cell;
        }
        return Position;
    }

    public Vector3Int FirstLightBlockingThingInSight(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (cell.IsWall()) { return previousPos; }

            if (goTilemap.GetTile(cell) != null || GetGameObject(cell) != null) {
                var character = GetGameObjectOrSpawnFromTile(cell);
                if (character == null) { continue; }
                if (!character.GetComponent<Stats>().blocksLight) { continue; };
                return cell;
            }
            previousPos = cell;
        }
        return Position;
    }

    public bool IsInSight(Vector3Int position,Vector3Int target) {
        var gameobjectInSight = FirstLightBlockingThingInSight(target, position);
        if (gameobjectInSight == target) {
            return true;
        }
        return false;
    }

    public bool IsBehindLightBlocker(Vector3Int position, Vector3Int target) {
        var gameobjectInSight = FirstLightBlockingThingInSight(target, position);
        if (gameobjectInSight == target) {
            return true;
        }
        return false;
    }

    public List<GameObject> GameObjectsInRange(int range,Vector3Int position, PartyManager.Faction faction) {
        List<GameObject> characters = new List<GameObject>();
        var seenGos =GridManager.i.tools.Circle(range, position);
        foreach(var positionInCircle in seenGos) {
            if (!floorTilemap.GetTile(positionInCircle)) { continue; }
            var character = goGrid[positionInCircle.x, positionInCircle.y];
            if (character == null) { continue; }
            if(character.GetComponent<Stats>().faction == faction) {
                characters.Add(character);
            }
        }
        return characters;
    }

    public List<Vector3Int> GameObjectsInAreaAccountingForWalls(int range, Vector3Int position) {
        List<Vector3Int> characters = new List<Vector3Int>();
        var seenGos = GridManager.i.tools.Circle(range, position);
        if (position.GameObjectGo()) {
            characters.Add(position);
        }
        foreach (var positionInCircle in seenGos) {
            if (!floorTilemap.GetTile(positionInCircle)) { continue; }
            var character = goGrid[positionInCircle.x, positionInCircle.y];
            if (character == null) { continue; }
            if (PathingManager.i.IsPathableIgnoringGameobjects(positionInCircle,position)) {
                characters.Add(positionInCircle);
            }
        }
        return characters;
    }

    public List<GameObject> GameObjectsInSightExcludingAllies(int range, Vector3Int position, PartyManager.Faction faction) {
        List<GameObject> characters = new List<GameObject>();
        var seenGos = GridManager.i.tools.Circle(range, position);
        foreach (var positionInCircle in seenGos) {
            var character = goGrid[positionInCircle.x, positionInCircle.y];
            if (character == null || !floorTilemap.GetTile(position)) { continue; }
            if (!IsBehindLightBlocker(position, positionInCircle)) { continue; }
            if (character.GetComponent<Stats>().faction == faction) {
                characters.Add(character);
            }
        }
        return characters;
    }

    public bool IsGameObjectInRange(int range, Vector3Int position,GameObject target) {
        var seenGos = GridManager.i.tools.Circle(range, position);
        foreach (var positionInCircle in seenGos) {
            if(target == goGrid[positionInCircle.x, positionInCircle.y]) {
                return true;
            }
        }
        return false;
    }

    public GameObject FindClosestGameObject(int range, Vector3Int position, PartyManager.Faction faction, bool inSight) {
        var visibility = GridManager.i.tools.Circle(range, position);
        float closestDistace = float.MaxValue;
        GameObject closestTarget = null;
        foreach (Vector3Int pos in visibility) {
            var target = GetGameObject(pos);
            if (target == null || !floorTilemap.GetTile(position)) { continue; }
            if (inSight) { if (!IsInSight(position, pos)) { continue; } }
            if (target.GetComponent<Stats>().faction != faction) { continue; }
            var distance = Vector3Int.Distance(position, pos);
            if (distance < closestDistace) {
                closestDistace = distance;
                closestTarget = target;
            }
        }
        return closestTarget;
    }

    public GameObject RemoveGameObject(Vector3Int position) {
        var gameobject = GetGameObject(position);
        if(gameobject != null || !floorTilemap.GetTile(position)) {
            SetGameObject(position, null);
            goTilemap.SetTile(position, null);
            return gameobject;
        }
        Debug.LogError("Could Not Remove GameObject From " + position);
        return null;
    }

    public Vector3Int FindGameObjectOnGrid(GameObject gameobject) {
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                if (goGrid[x, y] == gameobject) {
                    return new Vector3Int(x, y, 0);
                }
            }
        }
        //Debug.LogError("Could not find "+gameobject+" on goGrid cell ");
        return globalValues.NullValue;
    }

    public GameObject SpawnFloodFill(Vector3Int position,GameObject prefab) {
        if(GetGameObjectOrSpawnFromTile(position) == null) {
            var clone = Spawn(position, prefab);
            return clone;
        }
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        cellstocheck.Enqueue(position);
        int breaker = 0;
        var checkpos = position;
        var tools = GridManager.i.tools;
        Vector3Int pos = Vector3Int.zero;
        while (cellstocheck.TryDequeue(out checkpos)) {

            breaker++;
            if (breaker > 1000) {
                Debug.Log("Flood fill break");
                break;
            }

            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
                for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
                    pos.x = x;
                    pos.y = y;
                    if (!floorTilemap.GetTile(pos)) { continue; }
                    if (x == checkpos.x && y == checkpos.y) { continue; }

                    if (!pos.GameObjectSpawn()) {
                        var clone = Spawn(pos, prefab);
                        return clone;
                    }
                    cellstocheck.Enqueue(pos);
                }
            } 
        }
    return null;
    }

    public Vector3Int FindFloodFillCellForGo(Vector3Int position, GameObject prefab) {
        if (GetGameObjectOrSpawnFromTile(position) == null) {
            return position;
        }
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        cellstocheck.Enqueue(position);
        int breaker = 0;
        var checkpos = position;
        var tools = GridManager.i.tools;
        Vector3Int pos = Vector3Int.zero;
        while (cellstocheck.TryDequeue(out checkpos)) {
            breaker++;
            if (breaker > 1000) {
                Debug.Log("Flood fill break");
                break;
            }
            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
                for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
                    pos.x = x;
                    pos.y = y;
                    if (!floorTilemap.GetTile(pos)) { continue; }
                    if (x == checkpos.x && y == checkpos.y) { continue; }

                    if (!pos.GameObjectSpawn()) {
                        return pos;
                    }
                    cellstocheck.Enqueue(pos);
                }
            }
        }
        return globalValues.NullValue;
    }
}
