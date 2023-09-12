using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MechStatic;
[CreateAssetMenu(fileName = "Exit", menuName = "Mechs/Exit")]
public class FloorExit : MechAbstract {
    public override void Call(Vector3Int position, Signal signal) {
        if (signal == Signal.ClickOnWhileStandingOntopOf) {
            Debug.Log("Ladder EXIT!");
            GridManager.i.StartCoroutine(Wait());
        }
    }

public IEnumerator Wait() {
        yield return new WaitForSeconds(0.2f);
        //Manager.LoadNextScene();
    }
}
