using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "ClearFog", menuName = "Mods/ClearFog")]
public class ClearFog : ItemAbstract
{

    public override bool Call(Vector3Int position, Vector3Int origin) {
        GridManager.i.tools.FloodFill(position, GridManager.i.goTilemap, GridManager.i.fogTilemap);
        return true;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
