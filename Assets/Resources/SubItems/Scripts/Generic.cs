using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "Generic", menuName = "SubItems/Generic")]
public class Generic : ItemAbstract {
    public Signal onSignal;
    public Signal sendSignalToSubItems;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    [HideInInspector] public List<string> targetStrings = new List<string>();
    public Tags targetsTags;

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        if (signal != onSignal) { return; }
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        foreach (var item in subItems) {
            item.Call(position, origin, sendSignalToSubItems, parentGO, parentItem);
        }
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}




