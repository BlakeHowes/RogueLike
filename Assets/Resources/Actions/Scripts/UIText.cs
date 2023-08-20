using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static DealDamage;

[CreateAssetMenu(fileName = "UIText", menuName = "Actions/UIText")]
public class UIText : Action, IDescription {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {

        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }

    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        return actionContainer.stringValue;
    }
}
