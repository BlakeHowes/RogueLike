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
    public void Awake() {
        i = this;
        floorTilemap = GetComponent<Tilemap>();
    }
    public bool IsWalkable(Vector3Int position) {
        var tile = floorTilemap.GetTile(position);
        if (tile == nonWalkable || !tile) { return false; }
        return true;
    }

    public bool IsWall(Vector3Int position) {
        if (floorTilemap.GetTile(position)) { return false; }
        return true;
    }
}
