using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Item", menuName = "Items/Item")]

public class Item : ItemAbstract {
    public int shopValue;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public int totalUses = 1;
    [HideInInspector]public int timesUsed = 0;
    public bool endlessUses = false;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public Vector3Int thrownLocation;

    [Header("Specific GameObject Use Case")]
    public bool useOnlyOnViableTargets;
    public bool destroyOnUse;
    public List<GameObject> viableTargets = new List<GameObject>();

    public override void Call(Vector3Int position,Vector3Int origin, Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if (signal != Signal.Attack) { return; }
        this.parentGO = parentGO;
        this.position = position;
        this.origin = origin;

        if (position.GameObjectGo()) {
        if (!endlessUses) timesUsed++;}

        if (useOnlyOnViableTargets) {
            var target = position.GameObjectGo();
            if (!target) { return; }
            foreach (var item in viableTargets) {
                if (item.name == target.name) {
                    timesUsed = 99;
                    GridManager.i.AddToStack(this);
                    return;
                }
            }
            return;
        }
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {

        foreach (var item in subItems) { item.Call(position, origin, Signal.Attack, parentGO, this); }
        var mech = position.Mech();
        if (mech) { if (timesUsed == 0) mech.Call(position, MechStatic.Signal.ItemThrownOnto); }

        yield return null;
    }
    public override string Description() {
        var description = name + ":\n";
        foreach (var item in subItems) { 
            description += item.Description();
        }
        return description;
    }
}
