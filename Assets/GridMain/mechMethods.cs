using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class mechMethods
{
    private MechAbstract[,] mechGrid;
    private AssetManager assets;
    private Tilemap mechTilemap;
    public mechMethods(MechAbstract[,] mechGrid, AssetManager assets, Tilemap mechTilemap) {
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
                    if (position.GameObjectSpawn() != null) {
                        //mechGrid[x, y].Call(new Vector3Int(x, y, 0));
                    }
                }
            }
        }
    }

    public MechAbstract GetMechanism(Vector3Int position) {
        return mechGrid[position.x, position.y];
    }
}
