using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Teleport", menuName = "SubItems/Teleport")]
public class TeleportSubItem : ItemAbstract {
    public Signal onSignal;
    public DamageSubItem damageSubItem;
    [HideInInspector] public GameObject parentGO;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
        this.parentGO = parentGO;
        if (signal != onSignal) { return; }
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        var originGo = origin.GameObjectGo();
        var landedPosition=PathingManager.i.Teleport(position, origin);
        yield return new WaitForSeconds(0.1f);
        if (damageSubItem && originGo) {damageSubItem.Call(position, position, Signal.Attack, parentGO, this); }
        if (position == landedPosition) { yield break; }
        if (damageSubItem) { damageSubItem.Call(landedPosition, landedPosition, Signal.Attack, parentGO, this); }
        var landedGo = landedPosition.GameObjectGo();
        if (!landedGo) { yield break; }
        landedGo.GetComponent<SpringToTarget3D>().SpringTo(landedPosition, 50, 700);
        yield return new WaitForSeconds(0.05f);
        //if (damageSubItem) { damageSubItem.Call(landedPosition, landedPosition, Signal.Attack); }
        yield return null;
    }

    public override string Description() {
        return "Teleports ontop of";
    }
}