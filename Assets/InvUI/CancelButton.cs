using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CancelButton : MonoBehaviour
{
    public void Cancel() {
        MouseManager.i.Cancel();
    }

    public void EndTurn() {
        PartyManager.i.EndTurn();
    }
}
