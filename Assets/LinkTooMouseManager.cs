using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MouseManager;

public class LinkTooMouseManager : MonoBehaviour
{
    public void StartInspectTimer() {
        MouseManager.i.StartInspectTimer();
    }

    public void ResetInspectTimer() {
        MouseManager.i.ResetInspectTimer();
    }

    public void OnMouseDown() {
        MouseManager.i.OnMouseDown();
    }

}
