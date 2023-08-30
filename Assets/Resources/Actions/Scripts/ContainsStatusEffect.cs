using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ContainsStatusEffect", menuName = "Actions/ContainsStatusEffect")]
public class ContainsStatusEffect : Action {
    public bool not;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var go = position.GameObjectGo();
        if (go) {
            if (go.GetComponent<Inventory>().GetCoolDown(actionContainer.itemValue) == 0) {
                return not; 
            }
        }
        return !not;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
