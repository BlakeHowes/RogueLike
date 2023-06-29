using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static ItemStatic;
[CreateAssetMenu(fileName = "Spawn", menuName = "Mods/Spawn")]
public class SpawnGO : ItemAbstract {
    public List<GameObject> Gos = new List<GameObject>();
    public Signal onSignal;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        Debug.LogError("Death Spawn Call");
        if(signal != onSignal) { return; }
        this.position = position;
        GridManager.i.InsertToStack(this);
    }

    public override IEnumerator Action() {
        var gridManager = GridManager.i;
        foreach (GameObject go in Gos) {
            var clone = gridManager.goMethods.SpawnFloodFill(position, go);
            if (!clone) { break; }
            var pos = clone.transform.position - new Vector3(0.5f,0.5f);
            clone.transform.position = position;
            clone.GetComponent<SpringToTarget3D>().SpringTo(pos, 30, 1000);
            //clone.lerp(position, clone.transform.position.FloorToInt(), 0.1f);
        }
        Debug.Log("Spawned " + Gos.Count);
        yield return new WaitForSeconds(0.2f);
    }

    public override string Description() {
        string description = "Spawns: ";
        foreach (GameObject go in Gos) {
            description += go.name + "\n";
        }
        return description;
    }
}