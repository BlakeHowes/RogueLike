using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Skill Trinket", menuName = "Items/Skill Trinket")]
public class SkillTrinket : ItemAbstract
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        foreach(ItemAbstract mod in Modifiers) {
            GameUIManager.i.AddSkill(mod);
        }
        Debug.Log("Skill Trinket Called");
        return true;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
