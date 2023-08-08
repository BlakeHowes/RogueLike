using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
public class ThrownItem : ItemAbstract {
    public GameObject particles;
    public ItemAbstract item;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        var gridManager = GridManager.i;
        var landPosTarget = gridManager.goMethods.ThrownItemLocation(position, origin);
        var landedPosition = item.Drop(landPosTarget, true);
        Debug.Log(landedPosition + "Landed");
        var character = position.GameObjectGo();
        var timeTaken = gridManager.graphics.TimeFromSpeed(position, origin, 0.027f);
        Vector3 offset = new Vector3(0, 0.5f);
        gridManager.StartCoroutine(gridManager.graphics.TileLerp(landedPosition, origin + offset, landedPosition, timeTaken, gridManager.itemTilemap));
        yield return new WaitForSeconds(timeTaken);
        if (character) {
            EffectManager.i.CreateSingleParticleEffect(position, particles);
            var timeTaken2 = gridManager.graphics.TimeFromSpeed(position, landedPosition, 0.05f);
            gridManager.StartCoroutine(gridManager.graphics.TileLerp(landedPosition, position, landedPosition, timeTaken2, gridManager.itemTilemap));
            yield return new WaitForSeconds(timeTaken2);
        }
        var mech = landedPosition.Mech();
        if (mech) {
            mech.Call(landedPosition, MechStatic.Signal.ItemThrownOnto);
        }
    }

    public override string Description() {
        return "";
    }
}
