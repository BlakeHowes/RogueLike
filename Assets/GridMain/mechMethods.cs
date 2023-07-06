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

    public MechAbstract GetMechanism(Vector3Int position) {
        return mechGrid[position.x, position.y];
    }
}
