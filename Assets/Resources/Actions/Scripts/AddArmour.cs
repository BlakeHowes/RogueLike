using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static DealDamage;

//[CreateAssetMenu(fileName = "AddArmour", menuName = "Actions/AddArmour")]
public class AddArmour : Action,IDescription {
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
    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        var description = "+" + actionContainer.intValue + " Max Armour";
        return description;
    }

}
