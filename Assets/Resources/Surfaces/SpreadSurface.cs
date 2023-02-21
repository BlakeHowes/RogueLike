using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Spread Surface", menuName = "Mods/Spread Surface")]
public class SpreadSurface : ItemAbstract {
    public SurfaceAbstract surface;
    public int radius;
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        var walkableTilemap = GridManager.i.walkableTilemap;
        var surfaceTilemap = GridManager.i.surfaceTilemap;
        var circle = GridManager.i.tools.Circle(radius, position);
        foreach (var cell in circle) {
            if (!walkableTilemap.GetTile(cell)) { continue; }
            if (surfaceTilemap.GetTile(cell)) { continue; }
            surfaceTilemap.SetTile(cell, surface.tile);
            var surfaceOnGround =GridManager.i.GetOrSpawnSurface(cell);
            surfaceOnGround.Call(cell);
        }
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override string Description() {
        return "trades place with target";
    }
}
