using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "GeneralItem", menuName = "Items/GeneralItem")]
public class GeneralItem : ItemAbstract {
    public string description;
    public int shopValue;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public bool destroyOnUse = false;
    public bool pickUpByStandingOver;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public Vector3Int thrownLocation;

    [Header("Specific GameObject Use Case")]
    public List<GameObject> viableTargets = new List<GameObject>();
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {

        if (position.Mech()) {
            if (position.Mech() is Shop) {
                return;
            }
        }

        if (viableTargets.Count > 0) {
            var target = position.GameObjectGo();
            if (!target) { return; }
            bool targetFound = false;
            foreach (var item in viableTargets) {
                if (item.name != target.name) { continue; }
                targetFound = true;
            }
            if (!targetFound) { return; }
        }

        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
}
