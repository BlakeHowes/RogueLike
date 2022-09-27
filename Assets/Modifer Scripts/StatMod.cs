using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatMod", menuName = "Mods/StatMod")]
public class StatMod : ItemAbstract {
    public int attackBonus;
    public int attackMultiple;
    public int armour;
    public override bool Call(Vector3Int position, Vector3Int origin) {

        if(type == Type.WeaponModifier) {
            ItemAbstract item = PartyManager.i.currentCharacter.GetComponent<Inventory>().mainHand;
            Weapon weapon = null;
            if (item is Weapon) {
                weapon = item as Weapon;
            }
            if (weapon == null) {
                return false;
            }
            weapon.attackBonus += attackBonus;
            weapon.attackMultiple += attackMultiple;
        }
        if(type == Type.EquipmentModifier) {
            PartyManager.i.currentCharacter.GetComponent<Stats>().bonusArmour += armour;
        }

        return true;
    }

    public void OnEnable() {
        type = Type.WeaponModifier;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
