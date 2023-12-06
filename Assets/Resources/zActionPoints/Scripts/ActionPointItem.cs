using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "ActionPointItem", menuName = "Items/ActionPointItem")]
public class ActionPointItem : ItemAbstract {
    public Surface surface;
    public GameObject splashParticles;
    public GameObject projectileParticles;
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
}

