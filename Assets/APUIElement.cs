using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class APUIElement : MonoBehaviour
{
    public Color highlightColour;
    public Color defaultColor;
    public void HighlightAP(int amount) {
        for (int i = transform.childCount -1; i > 0; i--) {
            var child = transform.GetChild(i);
            if (child.gameObject.activeSelf) {
                var rend = child.GetComponent<Image>();
               
                if(amount > 0) rend.color = highlightColour;
                if (amount <= 0) rend.color = defaultColor;
                amount--;
            }
            
        }
    }

    public void ChangeAP(int amount) {
        int i = 0;
        foreach(Transform child in transform) {
            if(i < amount)child.gameObject.SetActive(true);
            if (i >= amount) child.gameObject.SetActive(false);
            i++;
        }
    }
}
