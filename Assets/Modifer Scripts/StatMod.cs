using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatMod", menuName = "Mods/StatMod")]
public class StatMod : ItemAbstract {
    public int attackBonus;
    public int attackMultiple;
    public int armour;
    public ModType modType;
    public enum ModType {
        weapon,
        equipment
    }
    public override bool Call(Vector3Int position, Vector3Int origin) {

        if(modType == ModType.weapon) {
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
        if(modType == ModType.equipment) {
            PartyManager.i.currentCharacter.GetComponent<Stats>().bonusArmour += armour;
        }

        return true;
    }

    public void OnEnable() {
        modType = ModType.weapon;
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }
}
