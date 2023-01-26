using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ClearFog", menuName = "Mods/ClearFog")]
public class ClearFog : ItemAbstract
{

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return true;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        GridManager.i.ClearFogDoor(position);
        Debug.Log("clear");
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
