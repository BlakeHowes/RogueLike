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
        var postion = currentCharacter.position();
        var stats = currentCharacter.GetComponent<Stats>();
        stats.RecalculateStats();
        var genericSkill = skill as GenericSkill;
        if(genericSkill.actionPointCost > stats.actionPoints) { MouseManager.i.itemSelected = null; return; }
        GameUIManager.i.ShowRange(postion, currentCharacter.GetComponent<Stats>().skillRangeTemp);
    }

    public void AddSkill(ItemAbstract skill) {
        this.skill = skill;
        Debug.Log("add skill");
        if (skill == null) { Debug.LogError("SKILL IS NULL"); return; }
        var image = GetComponent<Image>().sprite;
        if (skill.tile != null) { 
            GetComponent<Image>().sprite = skill.tile.sprite; }
        else { GetComponent<Image>().sprite = GameUIManager.i.defaultSkillSprite; }

        var genericSkill = skill as GenericSkill;
        var coolDownNumber = transform.Find("coolDownNumber");
        if(genericSkill.coolDownTimer > 0){
            Debug.Log("Set number");
            coolDownNumber.gameObject.SetActive(true);
            coolDownNumber.GetComponent<TextMeshProUGUI>().text = genericSkill.coolDownTimer.ToString();
            return;
        }
        Debug.Log("cool down 0");
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
