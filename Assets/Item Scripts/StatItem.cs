using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

[CreateAssetMenu(fileName = "StatItem", menuName = "Items/StatItem")]
public class StatItem : ItemAbstract
{
    public int attack;
    public int maxHealth;
    public int armour;

    public int maxHealthBonus;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        //Reset Bonus Stats
        maxHealthBonus = 0;
        if (position.gameobjectSpawn() == null) {
            return false;
        }
        InventoryManager.i.ApplyModifiers(Modifiers, position,origin);
        var targetStats = position.gameobjectSpawn().GetComponent<Stats>();
        targetStats.bonusMaxHealth += maxHealth+maxHealthBonus;
        targetStats.bonusArmour += armour;
        targetStats.bonusAttack += attack;

        return true;
    }
    public override string Description() {
        var description = "This " + this.name+ " adds ";
        if (armour > 0) {
            description +=  armour + " armour ";
        }
        if (maxHealth > 0) {
            description += maxHealth + " max health ";
        }
        if (attack > 0) {
            description += attack + " attack ";
        }
        return description;
    }
}
