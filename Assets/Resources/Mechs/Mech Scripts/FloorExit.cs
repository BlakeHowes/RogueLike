using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static MechStatic;
[CreateAssetMenu(fileName = "Exit", menuName = "Mechs/Exit")]
public class FloorExit : MechAbstract {
    public override void Call(Vector3Int position, Signal signal) {
        if (signal == Signal.Tick) {
            Debug.Log("Ladder EXIT!");
            var go = position.GameObjectGo();
            if (go) {
                if (go == PartyManager.i.currentCharacter && go.CompareTag("Party") && MouseManager.i.clickPosition == position) {
                    GridManager.i.StartCoroutine(Wait());
                }
            }

        }
    }

public IEnumerator Wait() {
        yield return new WaitForSeconds(0.13f);
        if (Manager.FinalFloor()) { yield break; }
        Manager.LoadNextScene();
    }
}
