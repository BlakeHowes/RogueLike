using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "WalkInRandomDirection", menuName = "Actions/WalkInRandomDirection")]
public class WalkInRandomDirection : Action {
    [HideInInspector]public GameObject target;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        target = parentGO;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if(target == null) { yield break; }
        var targetPos = target.Position();
        var areaAroundPos = GridManager.i.tools.MeeleeRange(targetPos);
        List<Vector3Int> possiblePosition = new();
        foreach (var cell in areaAroundPos) {
            if (FloorManager.i.IsWalkableAndNoGO(cell)) {
                possiblePosition.Add(cell);
            }
        }
        var finalPos = possiblePosition[Random.Range(0, possiblePosition.Count)] ;
        PathingManager.i.MoveOneStep(finalPos, targetPos);
        yield return new WaitForSeconds(0.2f);
        GridManager.i.TickCharacter(target,finalPos);
        yield return null;
    }
}
