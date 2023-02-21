using UnityEngine;


[CreateAssetMenu(fileName = "Liquid", menuName = "Surfaces/Liquid")]
public class Liquid : SurfaceAbstract {
    //public int damage;
    public ItemAbstract StatusEffect;
    public Vector2 duration;
    int counter = 0;
    public bool dryUp;
    //public bool spread;
    //public int spreadAmount;
    public override void Call(Vector3Int position) {

        counter++;
        if (counter > Random.Range(duration.x, duration.y)) {
            counter = 0;
            GridManager.i.RemoveSurface(position);
            return;
        }


        if (dryUp) {
            var walkableTilemap = GridManager.i.walkableTilemap;
            var surfaceTilemap = GridManager.i.surfaceTilemap;
            var circle = GridManager.i.tools.Circle(1, position);
            foreach (var cell in circle) {
                if (!walkableTilemap.GetTile(cell)) { continue; }
                if (surfaceTilemap.GetTile(cell) != tile) {
                    counter++;
                    break;
                }
            }
        }
        /*
        if (spread) {
            if(spreadAmount <= 0) { spread = false; }
            foreach (var cell in circle) {
                if (!walkableTilemap.GetTile(cell)) { continue; }
                if (surfaceTilemap.GetTile(cell)) { continue; }
                surfaceTilemap.SetTile(cell, tile);
            }
        } 
        */
        if (!position.gameobjectGO()) { return; }
        var character = position.gameobjectGO();
        //character.GetComponent<Stats>().TakeDamage(damage,position);
        if (StatusEffect) {
            character.GetComponent<Inventory>().AddStatusEffect(StatusEffect, position);
        }
    }
}
