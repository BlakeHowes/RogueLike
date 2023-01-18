using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Pull", menuName = "Mods/Pull")]
public class PullMod : ItemAbstract
{
    public float speed;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var target = position.gameobjectSpawn();
        if(target == null) return false; 
        if (type == Type.Skill) {
            if (MouseManager.i.itemSelected == null) {
                MouseManager.i.itemSelected = this;
                return false;
            }
        }
        if (particles != null) {
            var clone = GridManager.i.InstantiateGameObject(particles);
            clone.transform.position = target.transform.position;
            clone.transform.SetParent(target.transform);
        }
        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, range);
        PathingManager.i.Jump(line[0], position, speed);
        return true;
    }

    public override string Description() {
        return (" Pull: Pull objects towards you");
    }
}
