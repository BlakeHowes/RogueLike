using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GoPositionUpdateAction", menuName = "Actions/GoPositionUpdateAction")]
public class GoPositionUpdateAction : Action {
    [HideInInspector] public Action lastAction;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.parentGO = parentGO;
        this.origin = origin;
        lastAction = ability.actionContainers[ability.actionContainers.Count - 1].action;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var stack = GridManager.i.itemsInActionStack;
        var pos = parentGO.Position();
        if (parentGO.activeSelf == false || pos.x < 0) { pos = origin; }
        foreach(var item in stack) {
            item.origin = pos;
            item.position = pos;
            if(item.GetType() == lastAction.GetType()) { break; }
        }
        yield return null;
    }
}
