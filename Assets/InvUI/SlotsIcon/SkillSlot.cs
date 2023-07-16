using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SkillSlot : MonoBehaviour
{
    public ItemAbstract skill;
    public void SelectSkill() {
        MouseManager.i.itemSelected = skill;
        var currentCharacter = PartyManager.i.currentCharacter;
        var postion = currentCharacter.Position();
        var stats = currentCharacter.GetComponent<Stats>();
        stats.RefreshCharacter(postion);
        var genericSkill = skill as Skill;
        if(genericSkill.actionPointCost > stats.actionPoints) { MouseManager.i.itemSelected = null; return; }
        GameUIManager.i.ShowRange(postion, currentCharacter.GetComponent<Stats>().skillRangeTemp);
    }

    public void AddSkill(ItemAbstract skill) {
        this.skill = skill;
        if (skill == null) { Debug.LogError("SKILL IS NULL"); return; }
        var image = GetComponent<Image>().sprite;
        if (skill.tile != null) { 
            GetComponent<Image>().sprite = skill.tile.sprite; }
        else { GetComponent<Image>().sprite = Manager.GetGlobalValues().defaultSkillSprite; }

        var genericSkill = skill as Skill;
        var coolDownNumber = transform.Find("coolDownNumber");
        if(genericSkill.coolDownTimer > 0){
            coolDownNumber.gameObject.SetActive(true);
            coolDownNumber.GetComponent<TextMeshProUGUI>().text = genericSkill.coolDownTimer.ToString();
            return;
        }
        coolDownNumber.gameObject.SetActive(false);
    }

    public void EnableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(skill, true);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
