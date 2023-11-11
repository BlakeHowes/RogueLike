using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "AreaAroundUser", menuName = "Actions/AreaAroundUser")]
public class AreaAroundUser : Action {
    public bool requireTarget = true;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        int range = actionContainer.intValue;
        List<string> tags = new List<string>();
        bool checkTags = false;
        if(range == 0) {
            if (parentItem is Skill) {
                var skill = parentItem as Skill;
                range = parentGO.GetComponent<Stats>().skillRangeTemp + skill.range;
                tags = skill.GetTags(parentGO);
                checkTags = true;
            }
            if (parentItem is Weapon) {
                var weapon = parentItem as Weapon;
                range = weapon.GetRange(parentGO);
            }
        }

        var positions = origin.PositionsInSight(range);

        foreach (var pos in positions) {
            var go = pos.GameObjectGo();
            if (requireTarget) { if (!go) { continue; } }
            if (checkTags && go) if (!tags.Contains(go.tag)) { continue; }

            foreach (var container in ability.actionContainers) {
                if (container.action == this) { continue; }
                if (!container.action.Condition(pos, origin, parentGO, parentItem, ability, container)) { break; }
            }

        }
        return false;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
