using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class itemMethods {
    private ItemAbstract[,] itemGrid;
    private AssetManager assets;
    private Tilemap itemTilemap;
    public itemMethods(ItemAbstract[,] itemGrid,AssetManager assets,Tilemap itemTilemap) {
        this.itemGrid = itemGrid;
        this.assets = assets;
        this.itemTilemap = itemTilemap;
    }

    public ItemAbstract GetItemOrSpawnFromTile(Vector3Int position) {
        var item = itemGrid[position.x, position.y];
        if (item != null) {
            return item;
        }
        var tile = itemTilemap.GetTile<Tile>(position);
        if (tile == null) {
            return null;
        }
        else {
            var prefab = assets.TiletoItem(tile);
            if (prefab == null) {
                return null;
            }
            return SetItem(prefab, position);
        }
    }

    public ItemAbstract GetItem(Vector3Int position) {
        return itemGrid[position.x, position.y];
    }

    public ItemAbstract SetItem(ItemAbstract item, Vector3Int position) {
        if (item == null) {
            itemGrid[position.x, position.y] = null;
            return null;
        }
        itemTilemap.SetTile(position, item.tile);
        return itemGrid[position.x, position.y] = item;
    }

    public ItemAbstract RemoveItem(Vector3Int position) {
        var item = GetItem(position);
        if (item != null) {
            SetItem(null,position);
            itemTilemap.SetTile(position, null);
            return item;
        }
        Debug.LogError("Could not remove item from " + position);
        return null;
    }

    public Vector3Int FindItemOnGrid(ItemAbstract item) {
        for (int x = 0; x <GridManager.i.width; x++) {
            for (int y = 0; y < GridManager.i.height; y++) {
                if (itemGrid[x, y] == item) {
                    return new Vector3Int(x, y, 0);
                }
            }
        }
        Debug.LogError("Could not find "+item+ " in itemGrid");
        return Vector3Int.zero;
    }

    public float FloodFillDropItems(Vector3Int position, Vector3Int origin, List<ItemAbstract> items) {
        var actions = Actions.i;
        var timeTaken = 0.1f;
        var gridManager = GridManager.i;
        if (items.Count == 0) { return timeTaken; }
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        List<Vector3Int> checkedCells = new List<Vector3Int>();
        if (!GetItemOrSpawnFromTile(position)){ 
            SetItem(items[0], position);  
            items.Remove(items[0]);
            gridManager.StartCoroutine(gridManager.graphics.TileLerp(position, origin, position, 0.1f, itemTilemap));
        }
        cellstocheck.Enqueue(position);
        int breaker = 0;
        var checkpos = position;
        var offsetPosition = position;
        var goTilemap = GridManager.i.goTilemap;
        var floor = GridManager.i.floorTilemap;
        while (cellstocheck.TryDequeue(out checkpos)) {
            breaker++; if (breaker > 100) { Debug.LogError("Flood fill item drop hit max loops"); break; }
            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
            for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
            offsetPosition.x = x;
            offsetPosition.y = y;

            if (!floor.GetTile(offsetPosition)) { continue; }
            if (offsetPosition == checkpos) { continue; }
            if (items.Count <= 0) { return timeTaken; }
            if (!GetItemOrSpawnFromTile(offsetPosition)) {
            gridManager.StartCoroutine(gridManager.graphics.TileLerp(offsetPosition, origin, offsetPosition, 0.1f, itemTilemap));
            SetItem(items[0], offsetPosition);
             items.Remove(items[0]);
            }
           
            if (!checkedCells.Contains(offsetPosition)) { cellstocheck.Enqueue(offsetPosition); }
                    checkedCells.Add(offsetPosition);
                }
            }
        }
        return timeTaken;
    }

    public Vector3Int FloodFillDropSingle(Vector3Int position,ItemAbstract item) {
        var actions = Actions.i;
        Queue<Vector3Int> cellstocheck = new Queue<Vector3Int>();
        List<Vector3Int> checkedCells = new List<Vector3Int>();
        if (!GetItemOrSpawnFromTile(position)) {
            SetItem(item, position);
            return position;
        }
        cellstocheck.Enqueue(position);
        int breaker = 0;
        var checkpos = position;
        var offsetPosition = position;
        var goTilemap = GridManager.i.goTilemap;
        var isFloor = GridManager.i.floorTilemap;
        while (cellstocheck.TryDequeue(out checkpos)) {
            breaker++; if (breaker > 100) { Debug.LogError("Flood fill item drop hit max loops"); break; }
            for (int x = checkpos.x - 1; x <= checkpos.x + 1; x++) {
                for (int y = checkpos.y - 1; y <= checkpos.y + 1; y++) {
                    offsetPosition.x = x;
                    offsetPosition.y = y;

                    if (!isFloor.GetTile(offsetPosition)) { continue; }
                    if (offsetPosition == checkpos) { continue; }
                    if (!GetItemOrSpawnFromTile(offsetPosition)) {
                        SetItem(item, offsetPosition);
                        return offsetPosition;
                    }

                    if (!checkedCells.Contains(offsetPosition)) { cellstocheck.Enqueue(offsetPosition); }
                    checkedCells.Add(offsetPosition);
                }
            }
        }
        return GridManager.i.NullValue;
    }
}
