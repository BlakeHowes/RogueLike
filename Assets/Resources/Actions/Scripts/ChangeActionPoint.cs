using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ChangeActionPoint", menuName = "Actions/ChangeActionPoint")]
public class ChangeActionPoint : Action {
    public bool random;
    public bool weapon;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var item = actionContainer.itemValue;
        if (random) {
            var globalValues = Manager.GetGlobalValues();
            item = globalValues.actionPointElementsPoolForTraits[Random.Range(0, globalValues.actionPointElementsPoolForTraits.Count)];
        }
        if (weapon) { item = parentGO.GetComponent<Inventory>().mainHand; }
        if (!parentGO || !item) { return true; }
        var actionPointStack = parentGO.GetComponent<ActionPointStack>();
        List<ActionPoint> actionPoints = new List<ActionPoint>();   
        foreach(var actionPoint in actionPointStack.points) {
            if(actionPoint.type == ItemStatic.ActionPointType.Normal) { actionPoints.Add(actionPoint); }
        }
        if (actionPoints.Count > 0) {
            var apToModifiy = actionPoints[Random.Range(0, actionPoints.Count)];
            apToModifiy.type = ItemStatic.ActionPointType.Custom;
            apToModifiy.item = item;
        }
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}

