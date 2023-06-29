using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static ItemStatic;
[CreateAssetMenu(fileName = "Spread Surface", menuName = "Mods/Spread Surface")]
public class SpreadSurface : ItemAbstract {
    public Surface surface;
    public int radius;
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        this.position = position;
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        var walkableTilemap = GridManager.i.floorTilemap;
        var circle = GridManager.i.tools.Circle(radius, position);
        foreach (var cell in circle) {
            if (!walkableTilemap.GetTile(cell)) { continue; }
            GridManager.i.CombineOrSetSurface(cell, surface);
        }
        yield return new WaitForSeconds(0.1f);
    }


    public override string Description() {
        return "Covers floor with "+ surface +" in an area of "+ radius;
    }
}
