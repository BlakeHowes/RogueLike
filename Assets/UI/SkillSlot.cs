using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkillSlot : MonoBehaviour
{
    public ItemAbstract skill;
    public void Call() {
        var pos = PartyManager.i.currentCharacter.position();
        skill.Call(pos, pos);
    }

    public void AddSkill(ItemAbstract skill) {
        this.skill = skill;
        GetComponent<Image>().sprite = skill.tile.sprite;
    }
}
