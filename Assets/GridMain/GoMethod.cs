using UnityEngine;
using UnityEngine.Tilemaps;
using System.Collections.Generic;
public class GoMethod
{
    private GameObject[,] goGrid;
    private AssetManager assets;
    private Tilemap goTilemap;
    public GoMethod(GameObject[,] goGrid, AssetManager assets,Tilemap goTilemap) {
        this.goGrid = goGrid;
        this.assets = assets;
        this.goTilemap = goTilemap;
    }

    public GameObject GetGameObjectOrSpawnFromTile(Vector3Int position) {

        var gameobject = goGrid[position.x, position.y];
        if (gameobject != null) {return gameobject;}

        var tile = goTilemap.GetTile(position);
        if (tile == null) { return null; }

        var prefab = assets.TiletoGameObject(tile);
        if (prefab == null) {return null;}

        var clone = GridManager.i.InstantiateGameObject(prefab);
        clone.GetComponent<SpriteRenderer>().sprite = goTilemap.GetSprite(position);
        SetGameObject(position, clone);

        if (assets.IsWall(tile)) {
            SetGameObject(position + new Vector3Int(0, 1), clone);
            SetGameObject(position + new Vector3Int(0, 2), clone);
        }

        clone.transform.position = position + new Vector3(0.5f, 0.5f);
        goTilemap.SetTileFlags(position, TileFlags.None);
        goTilemap.SetColor(position, Color.clear);
        return clone;
    }

    public GameObject Spawn(Vector3Int position,GameObject prefab) {
        if (prefab == null) {
            return null;
        }
        var clone = GridManager.i.InstantiateGameObject(prefab);
        SetGameObject(position, clone);
        clone.transform.position = position + new Vector3(0.5f, 0.5f);
        goTilemap.SetTile(position,clone.GetComponent<Stats>().tile);
        goTilemap.SetTileFlags(position, TileFlags.None);
        goTilemap.SetColor(position, Color.clear);
        return clone;
    }

    public void SetGameObject(Vector3Int position, GameObject gameobject) {
        goGrid[position.x, position.y] = gameobject;
    }

    public GameObject GetGameObject(Vector3Int position) {
        return goGrid[position.x, position.y];
    }

    public Vector3Int FirstGameObjectInSight(Vector3Int Position,Vector3Int Origin) {
        var faction = Origin.gameobjectSpawn().GetComponent<Stats>().faction;
        var cells =GridManager.i.tools.BresenhamLine(Origin.x, Origin.y, Position.x, Position.y);
        if (cells.Count == 0) {
            return Position;
        }
        foreach (var cell in cells) { 
            if(goTilemap.GetTile(cell)!= null || GetGameObject(cell) != null) {
                //Debug.Log("found gameobject in sight line "+cell);
                GetGameObjectOrSpawnFromTile(cell);
                var cellFaction = cell.gameobjectGO().GetComponent<Stats>().faction;
                if (cellFaction == faction) {
                    continue;
                }
                if(faction == PartyManager.Faction.Party&& cellFaction == PartyManager.Faction.Enemy) {
                    continue;
                }
                return cell;
            }
        }
        return Position;
    }

    public bool IsInSight(Vector3Int position,Vector3Int target) {
        var gameobjectInSight =FirstGameObjectInSight(target, position);
        if (gameobjectInSight == target) {
            return true;
        }
        return false;
    }

    public List<GameObject> GameObjectsInSight(int range,Vector3Int position, PartyManager.Faction faction) {
        List<GameObject> characters = new List<GameObject>();
        var seenGos =GridManager.i.tools.Circle(range, position);
        foreach(var positionInCircle in seenGos) {
            var character = goGrid[positionInCircle.x, positionInCircle.y];
            if (character == null) { continue; }
            if(character.GetComponent<Stats>().faction == faction) {
                characters.Add(character);
            }
        }
        return characters;
    }

    public GameObject FindClosestGameObject(int range, Vector3Int position, PartyManager.Faction faction) {
        var visibility = GridManager.i.tools.Circle(range, position);
        float closestDistace = float.MaxValue;
        GameObject closestTarget = null;
        foreach (Vector3Int pos in visibility) {
            var target = GetGameObject(pos);
            if (target != null) {
                if (target.GetComponent<Stats>().faction == faction) {
                    var distance = Vector3Int.Distance(position, pos);
                    if (distance < closestDistace) {
                        closestDistace = distance;
                        closestTarget = target;
                    }
                }
            }
        }
        return closestTarget;
    }

    public GameObject RemoveGameObject(Vector3Int position) {
        var gameobject = GetGameObject(position);
        if(gameobject != null) {
            SetGameObject(position, null);
            goTilemap.SetTile(position, null);
            return gameobject;
        }
        Debug.LogError("Could Not Remove GameObject From " + position);
        return null;
    }

    public Vector3Int FindGameObjectOnGrid(GameObject gameobject) {
        for (int x = 0; x < GridManager.i.width; x++) {
            for (int y = 0; y < GridManager.i.height; y++) {
                if (goGrid[x, y] == gameobject) {
                    return new Vector3Int(x, y, 0);
                }
            }
        }
        Debug.LogError("Could not find "+gameobject+" on goGrid ");
        return Vector3Int.zero;
    }

    public GameObject SpawnFloodFill(Vector3Int position,GameObject prefab) {
        if(GetGameObjectOrSpawnFromTile(position) == null) {
            var clone =Spawn(position, prefab);
            return clone;
        }
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        cellstocheck.Enqueue(position);
        int breaker = 0;
        var checkpos = position;
        var tools = GridManager.i.tools;
        while (cellstocheck.TryDequeue(out checkpos)) {

            breaker++;
            if (breaker > 1000) {
                Debug.Log("Flood fill break");
                break;
            }

            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
                for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
                    Vector3Int pos = new Vector3Int(x, y);
                    if (tools.InBounds(pos)) {
                        if (x == checkpos.x && y == checkpos.y) {
                            continue;
                        }
                    }
                    var tile = goTilemap.GetTile(pos);
                    if (tile == null&& GetGameObject(pos) == null) {
                        var clone = Spawn(pos, prefab);
                        return clone;
                    }
                    if (assets.IsCharacter(tile)) {
                        Debug.Log("enqueue0");
                        cellstocheck.Enqueue(pos);
                    }
                }
            }
        }
    return null;
    }
}
