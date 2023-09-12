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
        MouseManager.i.SetMode(MouseManager.MouseMode.Inspect);
    }
}
