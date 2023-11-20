using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "RandomTeleport", menuName = "Actions/RandomTeleport")]
public class RandomTeleport : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = FloorManager.i.GetRandomWalkableFloorPosition();
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        foreach (var go in PartyManager.i.party) {
            PathingManager.i.Teleport(position, go.Position());
        }
        Camera.main.GetComponent<SmoothCamera>().resetFollow();
        GridManager.i.StartStack();
        yield return null;
    }
}
