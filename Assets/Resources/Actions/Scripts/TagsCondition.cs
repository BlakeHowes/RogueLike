using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "TagsCondition", menuName = "Actions/TagsCondition")]
public class TagsCondition : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var go = position.GameObjectGo();
        List<string> tags = new List<string>();
        if (go!) { return false; }
        if(parentItem is Skill) {
            var skill = parentItem as Skill;
            tags = skill.GetTags(parentGO);
        }
        if (!tags.Contains(go.tag)) { return false; }
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
