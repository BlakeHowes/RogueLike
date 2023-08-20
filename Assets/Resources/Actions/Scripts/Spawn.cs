using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Spawn", menuName = "Actions/Spawn")]
public class Spawn : Action,IDescription {
    [HideInInspector]public GameObject prefab;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        prefab = actionContainer.prefabValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (!prefab) { yield break; }
        var clone = GridManager.i.goMethods.SpawnFloodFill(position, prefab);
        var pos = clone.transform.position - new Vector3(0.5f, 0.5f);
        clone.transform.position = position;
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
