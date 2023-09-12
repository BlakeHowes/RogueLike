using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static PartyManager;

[CreateAssetMenu(fileName = "UITrait", menuName = "Actions/UITrait")]
public class UITrait : Action {
    public string description;
    public Sprite icon;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (ability.callType != ItemStatic.CallType.CalculateStats) {
            description = ability.callType.ToString() + ": ";
        }
        else {
            description = "";
        }
     
        icon = actionContainer.spriteValue;
        foreach (var container in ability.actionContainers) {
            if (container.action == this) { continue; }
            if(container.action is IDescription) {
                description += ((IDescription)container.action).Description(parentItem,container);
                if(container.action is UIText) { break; }
            }
        }

        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}

public interface IDescription {
    public string Description(ItemAbstract parentItem,ActionContainer actionContainer);
}
