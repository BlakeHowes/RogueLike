using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class mechMethods
{
    private ItemAbstract[,] mechGrid;
    private AssetManager assets;
    private Tilemap mechTilemap;
    public mechMethods(ItemAbstract[,] mechGrid, AssetManager assets, Tilemap mechTilemap) {
        this.mechGrid = mechGrid;
        this.assets = assets;
        this.mechTilemap = mechTilemap;
    }

    //Change this to be just around Player character
    public void ActivateMechanisms() {
        for (int x = 0; x < GridManager.i.width; x++) {
            for (int y = 0; y < GridManager.i.height; y++) {
                if (mechGrid[x, y] != null) {
                    var position = new Vector3Int(x, y, 0);
                    if (position.gameobjectSpawn() != null) {
                        //mechGrid[x, y].Call(new Vector3Int(x, y, 0));
                    }
                }
            }
        }
    }

    public ItemAbstract GetMechanism(Vector3Int position) {
        return mechGrid[position.x, position.y];
    }
}
