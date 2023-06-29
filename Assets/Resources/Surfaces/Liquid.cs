using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "Liquid", menuName = "Surfaces/Liquid")]
public class Liquid : SurfaceAbstract {
    //public int damage;
    public ItemAbstract StatusEffect;
    public Vector2 duration;
    int counter = 0;
    public bool dryUp;
    public bool spread;
    public int spreadAmount;
    public override void Call(Vector3Int position) {

        if (counter > Random.Range(duration.x, duration.y)) {
            counter = 0;
            GridManager.i.RemoveSurface(position);
            return;
        }


        if (dryUp) {
            var floorTilemap = GridManager.i.floorTilemap;
            var surfaceTilemap = GridManager.i.surfaceTilemap;
            var circle = GridManager.i.tools.Circle(1, position);
            foreach (var cell in circle) {
                if (!floorTilemap.GetTile(cell)) { continue; }
                if (surfaceTilemap.GetTile(cell) != tile) {
                    counter++;
                    break;
                }
            }
        }
        
        if (spread) {
            var walkableTilemap = GridManager.i.floorTilemap;
            var surfaceTilemap = GridManager.i.surfaceTilemap;
         
            if(spreadAmount <= 0) { spread = false; }
            var circle = position.circle(1);
            foreach (var cell in circle) {
                if (!walkableTilemap.GetTile(cell)) { continue; }
                if (surfaceTilemap.GetTile(cell)) { continue; }
                surfaceTilemap.SetTile(cell, tile);
            }
        } 
  
        if (!position.gameobjectGO()) { return; }
        var character = position.gameobjectGO();
        //character.GetComponent<Stats>().TakeDamage(damage,position);
        if (StatusEffect) {
            character.GetComponent<Inventory>().AddStatusEffect(StatusEffect, position);
        }
    }
}
