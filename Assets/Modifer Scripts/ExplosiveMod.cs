using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosiveMod : ItemAbstract
{
    public override bool Call(Vector3Int position, Vector3Int origin) {
        ItemAbstract item = PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand;
        Weapon weapon = null;
        if (item is Weapon) {
            weapon = item as Weapon;
        }
        weapon.attackMultiple = 0;
        //Explosive Effect
        return true;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
