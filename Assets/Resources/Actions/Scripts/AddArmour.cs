using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "AddArmour", menuName = "Actions/AddArmour")]
public class AddArmour : Action {
    public bool userGainsStat = true;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (userGainsStat) { parentGO.GetComponent<Stats>().maxArmourTemp += actionContainer.intValue;return true; }
        if (!userGainsStat) {
            var go = position.GameObjectGo();
            if (go) {
                go.GetComponent<Stats>().maxArmourTemp += actionContainer.intValue;
            }
        }
        return true;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
