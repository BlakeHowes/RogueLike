using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatMod", menuName = "Mods/StatMod")]
public class StatMod : ItemAbstract {
    public int damage;
    public int damageMultiple;
    public int armour;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if (signal != Signal.CalculateStats) { return; }

        var item = origin.gameobjectGO().GetComponent<Inventory>().mainHand;
        var weapon = item as Weapon;
        if (weapon == null) { goto Stats; }
        weapon.damageTemp += damage;
        weapon.damageMultipleTemp += damageMultiple;

        Stats:
        PartyManager.i.currentCharacter.GetComponent<Stats>().armourTemp += armour;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
