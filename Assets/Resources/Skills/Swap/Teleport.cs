using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.UI.Image;

[CreateAssetMenu(fileName = "Swap", menuName = "Mods/Swap")]
public class Teleport : ItemAbstract {
    [HideInInspector] public GameObject originGo;
    public override void Call(Vector3Int position, Vector3Int origin, ItemStatic.Signal signal) {
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
