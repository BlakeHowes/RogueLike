using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "ItemCondition", menuName = "SubItems/ItemCondition")]
public class ItemCondition : ItemAbstract {
    public Signal onSignal;

    [HideInInspector] public List<string> targetStrings = new List<string>();
    public Tags targetsTags;

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        if (signal != onSignal) { return; }
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}