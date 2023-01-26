using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemAbstract;

[CreateAssetMenu(fileName = "Push", menuName = "Mods/Push")]
public class PushMod : ItemAbstract
{
    public int actionPointCost;
    public float speed;
    public int pushDistance;
    public int range;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        if(MouseManager.i.itemSelected != this) { return false; }
        return true;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {

        if (signal == Signal.ActionPointSum) {
            if (ConditionsMet) { PartyManager.i.currentCharacter.GetComponent<Stats>().actionPointsSum += actionPointCost; }
            return;
        }

        if (signal == Signal.CreateSkill) {
            GameUIManager.i.AddSkill(this);
            Debug.Log("create push skill");
        }
        if (signal != Signal.Attack) { return; }
        if(MouseManager.i.itemSelected != this) { return; }
        var target = position.gameobjectSpawn();
        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, pushDistance);
        int pos = 0;
        GameObject firstGo = null;
        for (int i = 0; i < line.Count; i++) {
            var go =line[i].gameobjectSpawn();
            if (go != null) {
                if (firstGo == null) {
                    Debug.Log("firstgo " + go + "pos " + i);
                    firstGo = go;
                    if (firstGo != target) return;
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
        return;
    }

    public override string Description() {
        return "I push";
    }
}
