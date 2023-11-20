using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "RandomRoll", menuName = "Actions/RandomRoll")]
public class RandomRoll : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        //This needs to work with roll chances for stats or soemthing
        var roll = Random.Range(0, 101);
        if (roll <= actionContainer.intValue) { return true; }
        return false;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
