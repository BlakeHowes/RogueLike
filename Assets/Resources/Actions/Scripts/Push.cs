using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Push", menuName = "Actions/Push")]
public class Push : Action {
    public bool away = true;
    public float speed;
    [HideInInspector] public int numberOfSteps;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        numberOfSteps = actionContainer.intValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
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
