using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Null", menuName = "Mechanisms/Null")]

public class NullItem : ItemAbstract {
    public override bool Call(Vector3Int position, Vector3Int origin) {
        return true;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
