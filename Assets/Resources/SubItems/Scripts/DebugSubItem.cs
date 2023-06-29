using System.Collections;
using UnityEngine;
using UnityEngine.TextCore.Text;
using static ItemStatic;

[CreateAssetMenu(fileName = "Debug", menuName = "Mods/Debug")]
public class DebugSubItem : ItemAbstract {
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        Debug.Log("Debug Call");
        GridManager.i.AddToStack(this);
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        Debug.Log("Debug Action Call");
        yield return new WaitForSeconds(1f);
    }
}