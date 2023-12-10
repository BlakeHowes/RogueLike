using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleColour : MonoBehaviour
{
    public Color colorOn;
    public Color colorOff;
    public bool toggle;
    public bool toggleFollow;
    public bool toggleThrow;
    public void Toggle() {
        toggle = !toggle;
        if(toggleFollow)PartyManager.i.follow = toggle;
        if(toggleThrow) InventoryManager.i.throwItem = !toggle;
        if (toggle) { GetComponent<Image>().color = colorOn; } else {
            GetComponent<Image>().color = colorOff;
        }
    }

    public void ToggleOff() {
        toggle = false;
        if (toggleFollow) {
            PartyManager.i.follow = false;
            GetComponent<Image>().color = colorOff;
        }
      
        if (toggleThrow) {
            InventoryManager.i.throwItem = false;
            toggle = true;
            GetComponent<Image>().color = colorOn;
        }
        
    }
}
