using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "SkillType", menuName = "Actions/SkillType")]
public class SkillType : Action {
    
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        foreach(var container in ability.actionContainers) {
            if(container.action == this) { continue; }
            container.action.Condition(position, origin, parentGO, parentItem, ability, actionContainer);
        }
        return false;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }


}
