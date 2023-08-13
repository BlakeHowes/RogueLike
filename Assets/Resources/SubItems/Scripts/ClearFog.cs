using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ClearFog", menuName = "SubItems/ClearFog")]
public class ClearFog : ItemAbstract
{
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        if(signal == ItemStatic.Signal.Death) {
            GridManager.i.SetFogMapTile(position, 2);
            GridManager.i.SetFogMapTile(position + new Vector3Int(0, 1), 2);
            GridManager.i.SetFogMapTile(position + new Vector3Int(0, 2),2);
            GridManager.i.ClearFogDoor(position);
        }

    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        yield return null;
    }

}
