using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "CallThisGameObject", menuName = "Actions/CallThisGameObject")]
public class CallThisGameObject : Action {
    public CallType callType;
    public bool callPosition;
    public bool targetOrigin;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var calledGO = parentGO;
       if (callPosition) { calledGO = position.GameObjectGo(); }
        var calledGoPosition = calledGO.Position();
        if (!calledGO) { return true; }
        var targetPos = position;
        if (targetOrigin) { targetPos = origin; }
        calledGO.GetComponent<Inventory>().CallEquipment(targetPos, calledGoPosition, callType);
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
