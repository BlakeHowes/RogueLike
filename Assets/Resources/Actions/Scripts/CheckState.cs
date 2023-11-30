using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CheckState", menuName = "Actions/CheckState")]
public class CheckState : Action {
    public PartyManager.State state;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var target = position.GameObjectGo();
        if (target) {
            var state = target.GetComponent<Stats>().state;
            if(state == this.state) {
                return true;
            }
        }
        return false;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
