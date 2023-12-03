using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SkillSlot : MonoBehaviour
{
    public Skill skill;
    public Color defaultColour;
    public Color unavailableColour;
    public Sprite defaultSprite;
    private Image image;
    public int coolDown() {
        if (!skill) { return 0; }
        return PartyManager.i.currentCharacter.GetComponent<Inventory>().GetCoolDown(skill);
    }
    public void SelectSkill() {
        if (!skill) { return; }
        if(coolDown() > 0) { return; }
        var currentCharacter = PartyManager.i.currentCharacter;
        var stats = currentCharacter.GetComponent<Stats>();
        if(MouseManager.i.itemSelected == skill) {
            MouseManager.i.Cancel();
            EventSystem.current.SetSelectedGameObject(null);
            return; 
        } 
        if (skill.GetAPCost() > stats.actionPoints) {
            EventSystem.current.SetSelectedGameObject(null);
            MouseManager.i.itemSelected = null; 
            GameUIManager.i.AnimateNotEnoughAP();
            return;
        }
        MouseManager.i.itemSelected = skill;
        if (skill.rangeType == Skill.RangeType.Multi || skill.rangeType == Skill.RangeType.TwoTargets) { MouseManager.i.SetMode(MouseManager.MouseMode.SelectTargets); }

        var postion = currentCharacter.Position();

        stats.RefreshCharacter(postion);

        GameUIManager.i.ShowRange(postion, skill.GetRange());
        GameUIManager.i.apUIElement.HighlightAP(skill.GetAPCost(), skill);
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
        if(skill.GetAPCost() > PartyManager.i.currentCharacter.GetComponent<Stats>().actionPoints) { image.color = unavailableColour; }
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
        if (!skill) { return;}
        GameUIManager.i.apUIElement.HighlightAP(skill.GetAPCost(),skill);
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
        GameUIManager.i.apUIElement.HighlightAP(0, null);
    }
}
