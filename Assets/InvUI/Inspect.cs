using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inspect : MonoBehaviour
{
    public void ToggleInspect() {
        var mouseManager = MouseManager.i;
        mouseManager.inspectMode = !mouseManager.inspectMode;
        if (!mouseManager.inspectMode) { GameUIManager.i.tooltipGameObject.SetActive(false); }
    }
}
