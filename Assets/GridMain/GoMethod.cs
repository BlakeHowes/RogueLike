using UnityEngine;
using UnityEngine.Tilemaps;
using System.Collections.Generic;

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
            Debug.LogError(tile.name + " cannot be found in assets at " + position);
            return null;
        }

        var clone = GridManager.i.InstantiateGo(prefab);
        SetGameObject(position, clone);
        clone.GetComponent<Stats>().InitializeCharacter();
        clone.transform.position = position + new Vector3(0.5f, 0.5f);
        goTilemap.SetTile(position, null);

        return clone;
    }

    public void SetGameObject(Vector3Int position, GameObject gameobject) {
        if (!position.IsWalkable()) { return; }
        goGrid[position.x, position.y] = gameobject;
    }

    public GameObject GetGameObject(Vector3Int position) {
        if (position.InBounds()) {
            return goGrid[position.x, position.y];
        }
        return null;
    }

    public bool IsInSight(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        foreach (var cell in cells) {
            var go = cell.GameObjectGo();
            if (go) {
                if(go.CompareTag("Door")) {
                    if(cell != cells[cells.Count - 1]) {
                        return false;
                    }
                }
            }
            if (FloorManager.i.IsWall(cell)) { return false; }
        }
        return true;
    }

    public bool IsInSightObsticalFree(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        foreach (var cell in cells) {
            if (!FloorManager.i.IsWalkable(cell)) { return false; }
            if(cell.GameObjectGo() && cell != Position) { return false; }
        }
        return true;
    }

    public Vector3Int FirstGameObjectInSight(Vector3Int Position, Vector3Int Origin,List<string> tags) {
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
                if (!tags.Contains(character.tag)) { continue; }
                return cell;
            }
            previousPos = cell;
        }
        return Position;
    }

    public Vector3Int FirstGameObjectInSight(Vector3Int Position, Vector3Int Origin,string ignoreTag) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (!floorTilemap.GetTile(cell)) { return previousPos; }

            if (goTilemap.GetTile(cell) != null || GetGameObject(cell) != null) {
                var character = GetGameObjectOrSpawnFromTile(cell);
                if (character == null) { continue; }
                if (ignoreTag == character.tag) { continue; }
                return cell;
            }
            previousPos = cell;
        }
        return Position;
    }

    public Vector3Int FirstGameObjectInSight(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (!floorTilemap.GetTile(cell)) { return previousPos; }

            if (goTilemap.GetTile(cell) != null || GetGameObject(cell) != null) {
                var character = GetGameObjectOrSpawnFromTile(cell);
                if (character == null) { continue; }
                return cell;
            }
            previousPos = cell;
        }
        return Position;
    }

    public Vector3Int ClosestFreeCellToPosition(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        if (cells.Count == 0) {return Origin;}

        for (int i = cells.Count-1; i > 0; i--) {
            if (FloorManager.i.IsWalkable(cells[i]) && !cells[i].GameObjectGo()) {
                return cells[i];
            }
        }

        return Origin;
    }

    public Vector3Int PositionBeforeHittingGameObjectOrUnwalkableCell(Vector3Int Position, Vector3Int Origin) {
        var cells = GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        var previousPos = Origin;
        if (cells.Count == 0) {
            return Origin;
        }
        foreach (var cell in cells) {
            if (!FloorManager.i.IsWalkable(cell)) { return previousPos; }

            if (goTilemap.GetTile(cell) != null || GetGameObject(cell) != null) {
                var character = GetGameObjectOrSpawnFromTile(cell);
                if (character == null) { continue; }
                return previousPos;
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

    public List<GameObject> GameObjectsInSight(int range,Vector3Int origin, List<string> tags) {
        List<GameObject> characters = new List<GameObject>();
        var seenGos =GridManager.i.tools.Circle(range, origin);
        foreach(var positionInCircle in seenGos) {
            if (FloorManager.i.IsWall(positionInCircle)) { continue; }
            var character = goGrid[positionInCircle.x, positionInCircle.y];
            if (character == null) { continue; }
            if(tags.Contains(character.tag) && IsInSight(origin,positionInCircle)) {
                characters.Add(character);
            }
        }
        return characters;
    }

    public List<GameObject> GameObjectsInSight(int range, Vector3Int origin) {
        List<GameObject> characters = new List<GameObject>();
        var seenGos = GridManager.i.tools.Circle(range, origin);
        foreach (var positionInCircle in seenGos) {
            if (FloorManager.i.IsWall(positionInCircle)) { continue; }
            var character = goGrid[positionInCircle.x, positionInCircle.y];
            if (character == null) { continue; }
            if (IsInSight(origin, positionInCircle)) {
                characters.Add(character);
            }
        }
        return characters;
    }

    public List<Vector3Int> PositionsInSight(int range, Vector3Int origin) {
        List<Vector3Int> positions = new List<Vector3Int>();
   
        var cirlce = GridManager.i.tools.Circle(range, origin);
        if (range == 1) { cirlce = GridManager.i.tools.MeeleeRange(origin); }

        foreach (var positionInCircle in cirlce) {
            if (IsInSight(positionInCircle, origin)) {
                positions.Add(positionInCircle);
            }
        }
        return positions;
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

    public GameObject FindClosestGameObject(int range, Vector3Int origin, List<string> tags) {
        var visibility = GridManager.i.tools.Circle(range, origin);
        float closestDistace = float.MaxValue;
        GameObject closestTarget = null;
        foreach (Vector3Int pos in visibility) {
            if(pos == origin) { continue; }
            var target = GetGameObject(pos);
            if (target == null || FloorManager.i.IsWall(pos)) { continue; }

            if (tags.Contains(target.tag)) {
                var distance = Vector3Int.Distance(origin, pos);
                if (distance < closestDistace) {
                    closestDistace = distance;
                    closestTarget = target;
                }
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
        if (!gameobject) { return globalValues.NullValue; }
        var goWorldPositionOnGrid = gameobject.transform.position.FloorToInt();
        if (GetGameObject(goWorldPositionOnGrid) == gameobject) {
            return goWorldPositionOnGrid; 
        }


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


    public GameObject Spawn(Vector3Int position, GameObject prefab) {

        if (prefab == null || !position.IsWalkable()) {
            return null;
        }
        var clone = GridManager.i.InstantiateGo(prefab);
        SetGameObject(position, clone);
        clone.transform.position = position + new Vector3(0.5f, 0.5f, 0);
        clone.GetComponent<Stats>().InitializeCharacter();
        return clone;
    }

    Vector3Int[] checkPositions = new Vector3Int[]{
            new Vector3Int(1, 1),
            new Vector3Int(0, 1),
            new Vector3Int(-1, 1),
            new Vector3Int(1, 0),
            new Vector3Int(-1, 0),
            new Vector3Int(1, -1),
            new Vector3Int(0, -1),
            new Vector3Int(-1, -1),
        };

    public Vector3Int GetRandomOffset() {
        return checkPositions[Random.Range(0, checkPositions.Length-1)];
    }

    public GameObject SpawnFloodFill(Vector3Int position,GameObject prefab) {
        if(GetGameObjectOrSpawnFromTile(position) == null) {
            var clone = Spawn(position, prefab);
            return clone;
        }
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        cellstocheck.Enqueue(position);
        int breaker = 0;
        Vector3Int pos = position + GetRandomOffset();

        if (!pos.GameObjectSpawn() && pos.IsWalkable()) {
            var clone = Spawn(pos, prefab);
            return clone;
        }

        while (cellstocheck.TryDequeue(out var checkpos)) {

            breaker++;
            if (breaker > 1000) {
                Debug.Log("Flood fill break");
                break;
            }

            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
                for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
                    pos.x = x;
                    pos.y = y;
                    if (!pos.IsWalkable()) { continue; }
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

    public Vector3Int FindFloodFillCellForGo(Vector3Int position) {
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
                    if (!FloorManager.i.IsWalkable(pos)) { continue; }
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
