using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Spawn", menuName = "Mods/Spawn")]
public class SpawnGO : ItemAbstract {
    public List<GameObject> Gos = new List<GameObject>();
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        foreach (GameObject go in Gos) {
            GridManager.i.goMethods.SpawnFloodFill(position, go);
        }
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override string Description() {
        string description = "Spawns: ";
        foreach (GameObject go in Gos) {
            description += go.name + "\n";
        }
        return description;
    }
}
