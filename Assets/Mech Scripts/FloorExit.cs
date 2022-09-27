using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Exit", menuName = "Mechanisms/Exit")]
public class FloorExit : ItemAbstract
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        if(MouseManager.i.MousePositionOnGrid() == position) {
            Debug.Log("Next Floor");
        }
        return true;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
