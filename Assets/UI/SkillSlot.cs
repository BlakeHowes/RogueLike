using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkillSlot : MonoBehaviour
{
    public ItemAbstract skill;
    public void SelectSkill() {
        MouseManager.i.itemSelected = skill;
    }

    public void AddSkill(ItemAbstract skill) {
        this.skill = skill;
        
        if (skill == null) { Debug.LogError("SKILL IS NULL"); return; }
        var image = GetComponent<Image>().sprite;
        if (skill.tile != null) { GetComponent<Image>().sprite = skill.tile.sprite;return; }
        image = GameUIManager.i.defaultSkillSprite;
    }

    public void EnableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(skill, true);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
