using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatPotion", menuName = "Items/StatPotion")]

public class StatPotion : ItemAbstract {
    public int damage;
    public int heal;
    public int maxHealth;
    public override bool Call(Vector3Int position, Vector3Int origin) {
        var target = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);
        if (target == null) {
            return false;
        }
        var stats = target.GetComponent<Stats>();
        if (damage > 0) {
            stats.Damage(damage, origin);
        }
        if (heal > 0) {
            stats.Heal(heal);
        }
        if (maxHealth > 0) {
            stats.baseMaxHealth += maxHealth;
        }
        return true;
    }
    public override string Description() {
        var description = "This " + this.name +" ";
        if (damage > 0) {
            description += "Does " +damage +" damage ";
        }
        if (maxHealth > 0) {
            description += "Increases your max health by "+maxHealth + " ";
        }
        if (heal > 0) {
            description += "Heals " + heal + " health";
        }
        return description;
    }
}
