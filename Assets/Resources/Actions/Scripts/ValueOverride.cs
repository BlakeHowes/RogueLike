using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ValueOverride", menuName = "Actions/ValueOverride")]
public class ValueOverride : Action {
    public TypeStat stat;
    public TypeModification modification;
    [HideInInspector] public int value;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        value = actionContainer.intValue;
        this.AddToStack();
        return true;
    }

    public int ModifyValue(GameObject go,int value) {

        var item =GridManager.i.GetNextStackItem(2);
        if (item) {
            if (item is ValueOverride) {
                var valueOverride = item as ValueOverride;
                value = valueOverride.GetValue(go);
            }
        }

        switch (modification) {
            case TypeModification.None: break;
            case TypeModification.Percentage: return Mathf.RoundToInt((float)value / 100 * this.value);
        }
        return value;
    }

    public int GetValue(GameObject go) {
        var stats = go.GetComponent<Stats>();
        switch (stat) {
            case TypeStat.None: break;
            case TypeStat.DirectDamage: return stats.directDamage;
            case TypeStat.DamageTaken: return stats.damageTaken;
        }
        return 0;
    }

    public enum TypeModification {
        None,
        Percentage,
        Addition,
    }

    public enum TypeStat {
        None,
        DirectDamage,
        DamageTaken,
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}

