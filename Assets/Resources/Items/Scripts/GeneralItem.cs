using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "GeneralItem", menuName = "Items/GeneralItem")]
public class GeneralItem : ItemAbstract {
    public string description;
    public int shopValue;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public int totalUses = 1;
    [HideInInspector] public int timesUsed = 0;
    public bool endlessUses = false;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public Vector3Int thrownLocation;

    [Header("Specific GameObject Use Case")]
    public bool useOnlyOnViableTargets;
    public bool destroyOnUse;
    public List<GameObject> viableTargets = new List<GameObject>();
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if (position.GameObjectGo()) {
            if (!endlessUses) timesUsed++;
        }

        if (useOnlyOnViableTargets) {
            var target = position.GameObjectGo();
            if (!target) { return; }
            foreach (var item in viableTargets) {
                if (item.name != target.name) { continue; }
                timesUsed = 99;
                foreach (var ability in abilities) {
                    if (ability.callType == callType) {
                        ability.Call(position, origin, parentGO, this);
                    }
                    return;
                }
            }
            return;
        }
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
}
