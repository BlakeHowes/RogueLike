using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Push", menuName = "Actions/Push")]
public class Push : Action {
    public bool away = true;
    public float speed;
    public bool area;
    [HideInInspector] public int range;
    [HideInInspector] public int numberOfSteps;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        numberOfSteps = actionContainer.intValue;
        if (area) {
            numberOfSteps = actionContainer.vector2IntValue.x;
            range = actionContainer.vector2IntValue.y;
        }
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (area) {
            var inSightArea = GridManager.i.goMethods.PositionsInSight(range, position);
            List<Vector3Int> positions = new();
            foreach (var positionInArea in inSightArea) {
                var go = positionInArea.GameObjectGo();
                if (go) { positions.Add(positionInArea); }
            }
            foreach (var positionInArea in positions) {
                if(positionInArea == position) { continue; }
                var line2 = GridManager.i.tools.BresenhamLineLength(positionInArea.x, positionInArea.y, origin.x, origin.y, numberOfSteps);
                var targetPos2 = line2[line2.Count - 1];
                if (away) {
                    var oppositeTarget = (positionInArea - targetPos2) + positionInArea;
                    targetPos2 = oppositeTarget;
                }
                var endPosition2 = GridManager.i.goMethods.PositionBeforeHittingGameObject(targetPos2, positionInArea);
                PathingManager.i.Jump(endPosition2, positionInArea, speed);
            }

            yield break;
        }
        var line = GridManager.i.tools.BresenhamLineLength(position.x, position.y, origin.x, origin.y, numberOfSteps);
        var targetPos = line[line.Count - 1];
        if (away) {
            var oppositeTarget = (position - targetPos) + position;
            targetPos = oppositeTarget;
        }
        var endPosition = GridManager.i.goMethods.PositionBeforeHittingGameObject(targetPos, position);
        PathingManager.i.Jump(endPosition, position, speed);
        yield return null;
    }
}
