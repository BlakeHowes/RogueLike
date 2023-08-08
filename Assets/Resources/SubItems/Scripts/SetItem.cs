using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "SetItem", menuName = "SubItems/SetItem")]
public class SetItem : ItemAbstract {
    public Signal onSignal;
    public ItemAbstract item;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        if (signal != onSignal) { return; }
        this.position = position;
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        GridManager.i.itemMethods.SetItem(item,position);
        var mech = position.Mech();
        if(mech)mech.Call(position, MechStatic.Signal.ItemThrownOnto);
        yield return null;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
