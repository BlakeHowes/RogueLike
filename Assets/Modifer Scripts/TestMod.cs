using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "WeaponTestMod", menuName = "Mods/TestMod")]
public class TestMod : ItemAbstract
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        ItemAbstract item = PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand;
        Debug.Log("Test Mod on weapon "+item);
        return true;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
