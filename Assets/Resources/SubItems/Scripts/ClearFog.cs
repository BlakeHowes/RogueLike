using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ClearFog", menuName = "SubItems/ClearFog")]
public class ClearFog : ItemAbstract
{
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        GridManager.i.ClearFogDoor(position);
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        yield return null;
    }

}
