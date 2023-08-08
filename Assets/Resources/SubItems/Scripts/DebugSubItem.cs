using System.Collections;
using UnityEngine;
using UnityEngine.TextCore.Text;
using static ItemStatic;

[CreateAssetMenu(fileName = "Debug", menuName = "SubItems/Debug")]
public class DebugSubItem : ItemAbstract {
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        Debug.Log("Debug Call: Position: " +position+ " Origin: "+ origin +" Signal: " +signal + " ParentGo: " + parentGO +" ParentItem " + parentItem);
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