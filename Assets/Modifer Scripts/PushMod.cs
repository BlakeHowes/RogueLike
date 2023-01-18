using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Push", menuName = "Mods/Push")]
public class PushMod : ItemAbstract
{
    public float speed;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var target = position.gameobjectSpawn();
        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, range);
        int pos = 0;
        GameObject firstGo = null;
        for (int i = 0; i < line.Count; i++) {
            var go =line[i].gameobjectSpawn();
            if (go != null) {
                if (firstGo == null) {
                    Debug.Log("firstgo " + go + "pos " + i);
                    firstGo = go;
                    if (firstGo != target) return false;
                    continue;
                }
                if (firstGo != null) {
                    break;
                }
            }
            pos = i;
        }
        Debug.Log("count " + line.Count + "pos " + pos);
        if(pos != line.Count-1) {
            pos--;
        }
        PathingManager.i.Jump(line[pos], position,speed);
        return true;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
