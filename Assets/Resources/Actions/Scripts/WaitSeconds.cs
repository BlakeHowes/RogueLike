using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "WaitSeconds", menuName = "Actions/WaitSeconds")]
public class WaitSeconds : Action {
    [HideInInspector]public float waitTime = 0;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        waitTime = actionContainer.floatValue;
        GridManager.i.AddToStack(this);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return new WaitForSeconds(waitTime);
    }
}
