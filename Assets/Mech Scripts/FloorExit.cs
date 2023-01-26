using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Exit", menuName = "Mechanisms/Exit")]
public class FloorExit : ItemAbstract
{
    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(MouseManager.i.MousePositionOnGrid() == position) {
            Debug.Log("Next Floor");
        }
        return;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
