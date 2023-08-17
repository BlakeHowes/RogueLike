using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GiveSurface", menuName = "Actions/GiveSurface")]
public class GiveSurface : Action {
    [HideInInspector]public Surface surface;
    [HideInInspector] public int radius;
    public bool area = false;
    public bool randomSurface = false;
    public bool justCombine = false;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        surface = actionContainer.surfaceValue;
        radius = actionContainer.intValue;
        if (randomSurface) { surface = GridManager.i.assets.RandomSurface(); }
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var circle = position.PositionsInSight(radius);
        if (area) {
            foreach (var cell in circle) {
                GridManager.i.CombineOrSetSurface(cell, surface,justCombine);
            }
        }
        else {
            GridManager.i.CombineOrSetSurface(position, surface, justCombine);
        }

        yield return null;
    }
}
