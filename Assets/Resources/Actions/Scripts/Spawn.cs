using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Spawn", menuName = "Actions/Spawn")]
public class Spawn : Action,IDescription {
    [HideInInspector]public GameObject prefab;
    public bool spawnParentGO;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.origin = position;
        this.position = origin;
        this.parentGO = parentGO;
        prefab = actionContainer.prefabValue;
        if (spawnParentGO) { prefab = GridManager.i.InstantiateGo(parentGO); }
        if (!parentGO) { return true; }
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (!prefab) { yield break; }
        var clone = GridManager.i.goMethods.SpawnFloodFill(origin, prefab);
        if (!clone) { yield break; }
        var pos = clone.transform.position - new Vector3(0.5f, 0.5f);
        clone.transform.position = origin;
        clone.GetComponent<SpringToTarget3D>().SpringTo(pos, 30, 1000);
        clone.GetComponent<Stats>().InitializeCharacter();
        if (clone.CompareTag("Summon") || clone.CompareTag("Party")) { PartyManager.i.party.Add(clone); }
        GridManager.i.CallNPCSearch();
        yield return null;
    }

    public string Description(ItemAbstract parentItem,ActionContainer actionContainer) {
        if(actionContainer.prefabValue == null) { return ""; }
        return "Spawn " + actionContainer.prefabValue.name;
    }
}
