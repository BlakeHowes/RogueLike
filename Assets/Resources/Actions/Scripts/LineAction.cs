using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "LineAction", menuName = "Actions/LineAction")]
public class LineAction : Action {
    [HideInInspector] public GameObject prefab;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        this.prefab = actionContainer.prefabValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if(prefab)
        EffectManager.i.LineEffectBetweenGos(position, origin, prefab);
        yield return null;
    }
}
