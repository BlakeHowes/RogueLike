using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "IfParentGO", menuName = "Actions/IfParentGO")]
public class IfParentGo : Action {
    public Type type;
    public bool returnInverse;
    public bool useOrigin;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        GameObject target = null;
        this.parentItem = parentItem;
        this.position = position;   
        if (!useOrigin) target = position.GameObjectGo();
        if (useOrigin) target = origin.GameObjectGo();
        var targetPos = position;
        if (useOrigin) { targetPos = origin; }
        if (!target) { return returnInverse; }
        switch (type) {
            case Type.IfPositionGoInRange: if (target.Position().InRange(parentGO.Position(), actionContainer.intValue)) { return !returnInverse; }break;
            case Type.IfPositionGoInParty: if (PartyManager.i.InTeam(parentGO,target) ) { return !returnInverse; }break;
            case Type.IfPositionIsOrigin: if (position == origin) { return !returnInverse; }break;
            case Type.IfPositionIsThis: if (targetPos.GameObjectGo() == parentGO) { return !returnInverse; }break;
            case Type.IfPositionIsEnemy: if (PartyManager.i.IsEnemy(parentGO, target)) { return !returnInverse; }break;
        }
        return returnInverse;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }

    public enum Type {
        IfPositionGoInRange,
        IfPositionGoInParty,
        IfPositionIsOrigin,
        IfPositionIsThis,
        IfPositionIsEnemy,
    }
}
