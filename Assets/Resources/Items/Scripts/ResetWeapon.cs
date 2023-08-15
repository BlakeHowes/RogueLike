using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Reset Weapon", menuName = "Actions/Reset Weapon")]
public class ResetWeapon : Action
{
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var weapon = parentItem as Weapon;
        weapon.ResetTempStats();
        return true;
    }

    public override IEnumerator StackAction() {
        throw new System.NotImplementedException();
    }
}
