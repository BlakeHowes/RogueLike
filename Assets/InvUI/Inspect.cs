using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inspect : MonoBehaviour
{
    private Image image;
    public void OnEnable() {
    }
    public void ToggleInspect() {
        var mouseManager = MouseManager.i;
        mouseManager.inspectMode = true;
    }
}
