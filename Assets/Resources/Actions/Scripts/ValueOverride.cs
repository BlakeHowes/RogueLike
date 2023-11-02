using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ValueOverride", menuName = "Actions/ValueOverride")]
public class ValueOverride : Action {
    public Type type;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.AddToStack();
        return true;
    }

    public int GetValue(GameObject go) {
        var stats = go.GetComponent<Stats>();
        switch (type) {
            case Type.DirectDamage: return stats.directDamage;
            case Type.DamageTaken: return stats.damageTaken;
        }
        return 0;
    }

    public enum Type {
        DirectDamage,
        DamageTaken,
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}

