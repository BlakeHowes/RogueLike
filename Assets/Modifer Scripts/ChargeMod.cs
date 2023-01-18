using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Charge", menuName = "Mods/Charge")]
public class ChargeMod : ItemAbstract
{
    public float speed;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var enemy = GridManager.i.goMethods.FirstGameObjectInSight(position, origin);
        var item =origin.gameobjectGO().GetComponent<Inventory>().mainHand;
        var weapon = item as Weapon;
        if (enemy != null) {
            var line = GridManager.i.tools.BresenhamLine(position.x, position.y, origin.x, origin.y);
            PathingManager.i.Jump(line[0], origin, speed);
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
