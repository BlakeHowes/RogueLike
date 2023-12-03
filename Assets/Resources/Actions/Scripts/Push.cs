using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Push", menuName = "Actions/Push")]
public class Push : Action,IDescription {
    public bool away = true;
    public float speed;
    public bool area;
    [HideInInspector] public int range;
    [HideInInspector] public int numberOfSteps;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.origin = origin;
        this.position = position;
        numberOfSteps = actionContainer.intValue;
        if (area) {
            numberOfSteps = actionContainer.vector2IntValue.x;
            range = actionContainer.vector2IntValue.y;
        }
        this.AddToStack();
        return true;
    }

    public void PushAction(Vector3Int position,Vector3Int origin) {

        var line = GridManager.i.tools.BresenhamLineLength(origin.x, origin.y, position.x, position.y, 15);
        var line2 = GridManager.i.tools.BresenhamLineLength(position.x, position.y, line[line.Count - 1].x, line[line.Count - 1].y, numberOfSteps);
        if (!away) {
            line2 = GridManager.i.tools.BresenhamLineLength(position.x, position.y, origin.x, origin.y, numberOfSteps);
        }
        var targetPos2 = line2[line2.Count - 1];
        Debug.Log($"targetpositon:{targetPos2} origin:{origin} position{position}");
        var endPosition2 = GridManager.i.goMethods.PositionBeforeHittingGameObjectOrUnwalkableCell(targetPos2, position);
        PathingManager.i.Slide(endPosition2, position, speed);
    }

    public override IEnumerator StackAction() {
        if (area) {
            var inSightArea = GridManager.i.goMethods.PositionsInSight(range, position);
            List<Vector3Int> gosInSight = new();
            foreach (var positionInArea in inSightArea) {
                var go = positionInArea.GameObjectGo();
                if (go) { gosInSight.Add(positionInArea); }
            }
            foreach (var goInSight in gosInSight) {
                if (goInSight == origin) { continue; }
                PushAction(goInSight, origin);
            }

            yield break;
        }
        PushAction(position, origin);
        yield return null;
    }

    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        if (actionContainer.surfaceValue == null) { Debug.LogError("Forgot to set surface in " + parentItem.name); return "SURFACE MISSING!!!"; }
        var description = $"Pushes {actionContainer.vector2IntValue.x} steps";
        if (area) { description += " in an area of " + actionContainer.vector2IntValue.y + " "; }
        return description;
    }
}
