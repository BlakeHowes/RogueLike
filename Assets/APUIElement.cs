using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class APUIElement : MonoBehaviour
{
    public Color highlightColour;
    public Color defaultColor;
    private Sprite normalAPSprite;
    private Sprite walkAPSprite;

    public void OnEnable() {
        var globalValues =Manager.GetGlobalValues();
        normalAPSprite = globalValues.normalActionPointSprite;
        walkAPSprite = globalValues.walkActionPointSprite;
    }
    public void HighlightAP(int amount,Skill skill) {
        if (skill) {
            if (!PartyManager.i.currentCharacter.GetComponent<Stats>().DoIHavenEnoughNormalActionPoints(skill.GetAPCost())) {
                for (int i = transform.childCount - 1; i >= 0; i--) {
                    var child = transform.GetChild(i);
                    if (child.gameObject.activeSelf) {
                        var rend = child.GetComponent<Image>();
                        if(rend.sprite == walkAPSprite) { continue; }
                        rend.color = Color.red;
                    }

                }
                return;
            }
        }

        for (int i = transform.childCount -1; i >= 0; i--) {
            var child = transform.GetChild(i);
            if (child.gameObject.activeSelf) {
                var rend = child.GetComponent<Image>();
                if (rend.sprite == walkAPSprite) { continue; }
                if (amount > 0) rend.color = highlightColour;
                if (amount <= 0) rend.color = defaultColor;
                amount--;
            }
            
        }
    }

    public void UpdateActionPointUI(Stats stats) {
        if (!stats.actionPointStack) { return; }
        var points = stats.actionPointStack.points;
        int i = 0;
        foreach (var point in points) {
            var element = transform.GetChild(i).gameObject;
            element.SetActive(true);
            var image = element.GetComponent<Image>();
            switch (point.type) {
                case ItemStatic.ActionPointType.Normal: image.sprite = normalAPSprite; break;
                case ItemStatic.ActionPointType.Movement: image.sprite = walkAPSprite; break;
                case ItemStatic.ActionPointType.Custom: 
                    if(point.item == null) {
                        point.type = ItemStatic.ActionPointType.Normal;
                        image.sprite = normalAPSprite; break;
                    }
                    image.sprite = point.item.tile.sprite; break;
            }
            i++;
        }
        var i2 = 0;
        foreach (Transform child in transform) {
            if (i2 >= i) { child.gameObject.SetActive(false); }
            i2++;
        }
    }

    public IEnumerator NoEnoughAPAnimation() {
        List<Image> images = new List<Image>();
        foreach (Transform child in transform) {
            var rend = child.GetComponent<Image>();
            images.Add(rend);
            rend.color = Color.red;
        }
        yield return new WaitForSeconds(0.1f);
        foreach (Image image in images) {
            image.color = Color.white;
        }
        yield return new WaitForSeconds(0.1f);
        foreach (Image image in images) {
            image.color = Color.red;
        }
        yield return new WaitForSeconds(0.1f);
        foreach (Image image in images) {
            image.color = Color.white;
        }
    }
}
