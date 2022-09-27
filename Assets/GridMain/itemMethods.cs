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
        return itemGrid[position.x, position.y] = GridManager.i.InstantiateItem(item);
    }

    public void DropItem(ItemAbstract item, Vector3Int position) {
        var clone =GridManager.i.InstantiateItem(item);
        if (IsThisCellEmpty(position)) {  
            SetItem(clone, position);
            return;
        }
        var pos = SearchForFreeCell(position);
        SetItem(clone, pos);
    }

    public void SpawnThrownItem(ItemAbstract item, Vector3Int position) {
        var clone = GridManager.i.InstantiateItem(item);
        if (IsThisCellEmpty(position)) {
            SetItem(clone, position);
            return;
        }
        var characterpos = PartyManager.i.currentCharacter.position();
        var line = GridManager.i.tools.BresenhamLine(position.x,position.y, characterpos.x, characterpos.y);
        if (IsThisCellEmpty(line[0])) {
            SetItem(clone, line[0]);
            return;
        }
        SetItem(clone, SearchForFreeCell(line[0]));
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

    public bool IsThisCellEmpty(Vector3Int position) {
        if (position.inbounds()) {
            if (position.gameobjectSpawn() == null && position.item() == null) {
                if (GridManager.i.goTilemap.GetTile(position) == null && GridManager.i.itemTilemap.GetTile(position) == null) {
                    return true;
                }
            }
        }
        return false;
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

    public Vector3Int SearchForFreeCell(Vector3Int position) {
        for (int i = 0; i < 4; i++) {
            for (int x = position.x - 1-i; x < position.x + 2 + i; x++) {
                for (int y = position.y - 1-i; y < position.y + 2 + i; y++) {
                    var checkpos = new Vector3Int(x, y, 0);
                    if (IsThisCellEmpty(checkpos)) {
                        return checkpos;
                    }
                }
            }
        }
        Debug.LogError("Could not find free spot to place Item at "+position);
        return Vector3Int.zero;
    }
}
