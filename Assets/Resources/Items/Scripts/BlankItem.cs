using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "BlankItem", menuName = "Items/BlankItem")]
public class BlankItem : ItemAbstract {
    public string description;
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
    public override string Description() {
        return description;
    }
}
