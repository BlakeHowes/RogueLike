using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static ItemStatic;

[CreateAssetMenu(fileName = "Push", menuName = "SubItems/Push")]
public class Push : ItemAbstract {
    public Direction direction;
    public int numberOfSteps;
    public float speed;
    public Target target;
    public int areaSize;
    [HideInInspector]public Vector3Int endPos;
    public int damage;
    public Signal onSignal;
    public float time;
    public DamageSubItem damageSubItem;
    [HideInInspector]public GameObject parentGO;
    public enum Direction {
        Towards,
        Away
    }
    public enum Target {
        Single,
        Area
    }
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.origin = origin;
        this.parentGO = parentGO;
        if(signal != onSignal) { return; }


        if (target == Target.Area) {
            AreaEffect(position, origin);
            return;
        }

        this.position = position;
        if (!position.GameObjectGo()) { return; }
        var line = GridManager.i.tools.BresenhamLineLength(position.x, position.y, origin.x, origin.y, numberOfSteps);
        var targetPos = line[line.Count-1];

        if (direction == Direction.Away) {
            var oppositeTarget = (position - targetPos) + position;
            targetPos = oppositeTarget;
        }
        this.endPos = GridManager.i.goMethods.FirstGameObjectInSight(targetPos, position);
        GridManager.i.AddToStack(this);
    }

    public void AreaEffect(Vector3Int position, Vector3Int origin) {
        var positions = GridManager.i.goMethods.PositionsInSight(areaSize, position);
        foreach(Vector3Int pos in positions) {
            if(pos == origin) { continue; }
            var line = GridManager.i.tools.BresenhamLineLength(pos.x, pos.y, origin.x, origin.y, numberOfSteps);
            var targetPos = line[line.Count - 1];

            if (direction == Direction.Away) {
                var oppositeTarget = (pos - targetPos) + pos;
                targetPos = oppositeTarget;
            }

            this.endPos = GridManager.i.goMethods.PositionBeforeHittingGameObject(targetPos, pos);
            this.position = pos;
            GridManager.i.AddToStack(this);
        }
    }

    public override IEnumerator Action() {
        var go = position.GameObjectGo();
        if (!go) { yield break; }
        var stats = go.GetComponent<Stats>();
        var damagePosition = position;
        if (!stats.IsImmune(this)) {
            PathingManager.i.Jump(endPos, position, speed);
            damagePosition = endPos;
        }

        
        if (damageSubItem) { damageSubItem.Call(damagePosition, origin, Signal.Attack, parentGO, this); }
        yield return new WaitForSeconds(0);
    }

    public override string Description() {
        return "Knockback " + numberOfSteps;
    }
}

