using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Test", menuName = "Mods/Test")]
public class TestSkill : ItemAbstract 
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        Debug.Log("Test Item");
        return true;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}

