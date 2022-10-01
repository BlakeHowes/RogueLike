using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Charge", menuName = "Mods/Charge")]
public class ChargeMod : ItemAbstract
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var enemy = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        origin.gameobjectGO().GetComponent<Inventory>().mainHand.ranged = true;
        if (enemy != null) {
            var line = GridManager.i.tools.BresenhamLine(position.x, position.y, origin.x, origin.y);
            PathingManager.i.Jump(line[0], origin);
            if (line[0]!= origin) {
                line[0].gameobjectGO().GetComponent<Stats>().SpawnHitNumber("CHARGE", Color.yellow, 2);
            }
        }
        Debug.Log("CHARGE");
        return true;
    }

    public override string Description() {
        return "CHARGE: When attacking launch youself to the target";
    }
}
