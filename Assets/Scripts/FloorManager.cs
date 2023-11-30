using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UIElements;

public class FloorManager : MonoBehaviour
{
    public static FloorManager i;
    private Tilemap floorTilemap;
    public Tile nonWalkable;
    private int[,] floorGrid;
    public void Awake() {
        i = this;
        floorTilemap = GetComponent<Tilemap>();
        var globalValues = Manager.GetGlobalValues();

        floorGrid = new int[globalValues.width, globalValues.height];
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                Vector3Int position = new Vector3Int(x, y);
                var tile = floorTilemap.GetTile(position);
                if (!floorTilemap.GetTile(position)) { floorGrid[x, y] = 0; continue; }
                if (tile == nonWalkable) { floorGrid[x, y] = 2; continue; }
                floorGrid[x, y] = 1;
            }
        }
    }
    //0 Wall
    //1 Walkable
    //2 NonWalkable (floor you cant walk on but can shoot over)

    public Vector3Int GetRandomWalkableFloorPosition() {
        var globalValues = Manager.GetGlobalValues();
        List<Vector3Int> walkableCells = new List<Vector3Int>();
        for (int x = 0; x < globalValues.width; x++) {
            for (int y = 0; y < globalValues.height; y++) {
                if (floorGrid[x,y] != 1) { continue; }
                 walkableCells.Add(new Vector3Int(x, y));
            }
        }
        var roll = Random.Range(0, walkableCells.Count);
        return walkableCells[roll];
    }

    public bool IsWalkable(Vector3Int position) {
        if (!position.InBounds()) {
            Debug.LogError("IsWalkable position out of bounds " + position);
            return false;}
        if (floorGrid[position.x,position.y] == 1) { return true; }
        return false;
    }

    public bool IsWalkableAndNoGO(Vector3Int position) {
        if (floorGrid[position.x, position.y] != 1) { return false; }
        if (position.GameObjectGo()) { return false; }
        return true;
    }

    public bool IsWall(Vector3Int position) {
        if (floorGrid[position.x, position.y] == 0) { return true; }
        return false;
    }
}
