using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Item", menuName = "Items/Item")]

public class Item : ItemAbstract {
    public int shopValue;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public int totalUses;
    public int timesUsed = 0;
    bool endlessUses = false;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != Signal.Attack) { return; }
        
        this.position = position;
        this.origin = origin;
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        var gridManager = GridManager.i;
        position = gridManager.goMethods.FirstGameObjectInSight(position, origin);
        var landedPosition = this.Drop(gridManager.goMethods.ThrownItemLocation(position, origin));
        var timeTaken = gridManager.graphics.TimeFromSpeed(position,origin,0.027f);

        gridManager.StartCoroutine(gridManager.graphics.TileLerp(landedPosition, origin+ new Vector3(0, 0.5f), position, timeTaken, gridManager.itemTilemap));
        yield return new WaitForSeconds(timeTaken);
        foreach (var item in subItems) { item.Call(position, origin, Signal.Attack); }
        var mech = position.Mech();
        if (mech) {
            if (timesUsed == 0) mech.Call(landedPosition, MechStatic.Signal.ItemThrownOnto);
        }
        if (position.GameObjectGo()) {
            if(!endlessUses)timesUsed++;
            //EffectManager.i.CreateSingleParticleEffect(position, particles);
            if (timesUsed >= totalUses) {
                timesUsed = 0;
                gridManager.itemMethods.RemoveItem(landedPosition);
            }
            else {
                var timeTaken2 = gridManager.graphics.TimeFromSpeed(position, landedPosition, 0.05f);
                gridManager.StartCoroutine(gridManager.graphics.TileLerp(landedPosition, position, landedPosition, timeTaken2, gridManager.itemTilemap));
                yield return new WaitForSeconds(timeTaken2);
            }
        }
    }
    public override string Description() {
        var description = name + ":\n";
        foreach (var item in subItems) { 
            description += item.Description();
        }
        return description;
    }
}
