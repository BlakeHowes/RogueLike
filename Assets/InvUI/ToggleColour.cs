using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleColour : MonoBehaviour
{
    public Color colorOn;
    public Color colorOff;
    public bool toggle;
    public void Toggle() {
        toggle = !toggle;
        PartyManager.i.follow = toggle;
        if (toggle) { GetComponent<Image>().color = colorOn; } else {
            GetComponent<Image>().color = colorOff;
        }
    }
}
