using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "RandomTeleport", menuName = "Actions/RandomTeleport")]
public class RandomTeleport : Action {
    [HideInInspector] public GameObject target;
    int breaker = 0;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        target = position.GameObjectGo();
        this.position = FloorManager.i.GetRandomWalkableFloorPosition();
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        breaker++;
        if(breaker > 10) { Debug.LogError("Broken"); yield break; }
        if (!target) { yield break; }
        if (target.CompareTag("Party")) {
            foreach (var go in PartyManager.i.party) {
                PathingManager.i.Teleport(position, go.Position());
            }
            Camera.main.GetComponent<SmoothCamera>().resetFollow();
            yield break;
        }
        else {
            PathingManager.i.Teleport(position, target.Position());
        }
        
        yield return null;
    }
}
