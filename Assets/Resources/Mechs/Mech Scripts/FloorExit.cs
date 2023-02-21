using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Exit", menuName = "Surfaces/Exit")]
public class FloorExit : SurfaceAbstract
{
    public override void Call(Vector3Int position) {
        if(MouseManager.i.MousePositionOnGrid() == position) {
            Debug.Log("Next Floor");
        }
        return;
    }
}
