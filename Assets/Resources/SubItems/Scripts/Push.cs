using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Push", menuName = "Mods/Push")]
public class Push : ItemAbstract {
    public Direction direction;
    public int numberOfSteps;
    public float speed;
    public Target target;
    public int areaSize;
    [HideInInspector]public Vector3Int endPos;
    public int damage;
    public Signal onSignal;
    public DoDamage doDamage;
    public float time;
    public enum Direction {
        Towards,
        Away
    }
    public enum Target {
        Single,
        Area
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {

        if(signal != onSignal) { return; }


        if (target == Target.Area) {
            AreaEffect(position, origin);
            return;
        }

        this.position = position;
        if (!position.gameobjectGO()) { return; }
        var line = GridManager.i.tools.BresenhamLineLength(position.x, position.y, origin.x, origin.y, numberOfSteps);
        var targetPos = line[line.Count-1];

        if (direction == Direction.Away) {
            var oppositeTarget = (position - targetPos) + position;
            targetPos = oppositeTarget;
        }

        this.endPos = GridManager.i.goMethods.FirstGameObjectInSightIncludingAllies(targetPos, position);
        GridManager.i.AddToStack(this);
    }

    public void AreaEffect(Vector3Int position, Vector3Int origin) {
        var positions = GridManager.i.goMethods.GameObjectsInAreaAccountingForWalls(areaSize, position);
        foreach(Vector3Int pos in positions) {
            if(pos == origin) { continue; }
            var line = GridManager.i.tools.BresenhamLineLength(pos.x, pos.y, origin.x, origin.y, numberOfSteps);
            var targetPos = line[line.Count - 1];

            if (direction == Direction.Away) {
                var oppositeTarget = (pos - targetPos) + pos;
                targetPos = oppositeTarget;
            }

            this.endPos = GridManager.i.goMethods.FirstGameObjectInSightIncludingAllies(targetPos, pos);
            this.position = pos;
            GridManager.i.AddToStack(this);
        }
    }
    public override IEnumerator Action() {
        PathingManager.i.Jump(endPos,position, speed);

        if (doDamage) {
            doDamage.position = endPos;
            doDamage.origin = origin;
            GridManager.i.AddToStack(doDamage);

        }
        /*
        if(damage != 0) {
            var character = endPos.gameobjectGO();
            if (character) { character.GetComponent<Stats>().TakeDamage(damage, origin); }
        }
        */
        yield return new WaitForSeconds(0);
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}

