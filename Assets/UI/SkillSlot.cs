using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static UnityEditor.Progress;

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

    public void EnableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(skill, true);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
