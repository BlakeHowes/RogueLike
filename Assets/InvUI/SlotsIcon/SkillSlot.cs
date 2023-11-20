using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SkillSlot : MonoBehaviour
{
    public Skill skill;
    public Color defaultColour;
    public Sprite defaultSprite;
    private Image image;

    public int coolDown() {
        if (!skill) { return 0; }
        return PartyManager.i.currentCharacter.GetComponent<Inventory>().GetCoolDown(skill);
    }
    public void SelectSkill() {
        if (!skill) { return; }
        if(coolDown() > 0) { return; }
        MouseManager.i.itemSelected = skill;
        if (skill.rangeType == Skill.RangeType.Multi || skill.rangeType == Skill.RangeType.TwoTargets) { MouseManager.i.SetMode(MouseManager.MouseMode.SelectTargets); }
        var currentCharacter = PartyManager.i.currentCharacter;
        var postion = currentCharacter.Position();
        var stats = currentCharacter.GetComponent<Stats>();
        stats.RefreshCharacter(postion);
        if(skill.GetAPCost() > stats.actionPoints) { MouseManager.i.itemSelected = null; return; }
        GameUIManager.i.ShowRange(postion, skill.range);
        GameUIManager.i.apUIElement.HighlightAP(skill.GetAPCost());
    }

    public void OnEnable() {
        image = GetComponent<Image>();  
        if(image == null) { Debug.Log("WTF + " + gameObject); }
    }

    public void ResetGraphic() {
        image.color = defaultColour;
        image.sprite = defaultSprite;
        var coolDownNumber = transform.Find("coolDownNumber");
        coolDownNumber.GetComponent<TextMeshProUGUI>().text = "";
        skill = null;
    }

    public void UpdateGraphic() {
        if (!skill) { return; }
        if(coolDown() > 0) { image.color = defaultColour;}
    }

    public void AddSkill(Skill skill) {
        if (skill == null) { Debug.LogError("SKILL IS NULL"); return; }
        this.skill = skill;
        //Debug.Log(skill.name);
        if (skill.tile != null) {
            image.sprite = skill.tile.sprite; }
        else { image.sprite = Manager.GetGlobalValues().defaultSkillSprite; }

        var coolDownNumber = transform.Find("coolDownNumber");
        if(coolDown() > 0){
            coolDownNumber.gameObject.SetActive(true);
            coolDownNumber.GetComponent<TextMeshProUGUI>().text = coolDown().ToString();
            UpdateGraphic();
            return;
        }
        coolDownNumber.gameObject.SetActive(false);
        image.color = Color.white;
        UpdateGraphic();
    }

    public void EnableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(skill, false);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
