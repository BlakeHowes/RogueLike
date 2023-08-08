using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Swap", menuName = "SubItems/Swap")]
public class TargetSubItem : ItemAbstract {
    [HideInInspector] public GameObject originGo;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
        originGo = origin.GameObjectGo();
        GridManager.i.AddToStack(this);
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        GridManager.i.goMethods.SpawnFloodFill(position, originGo);
        yield return new WaitForSeconds(0.1f);
    }

}
