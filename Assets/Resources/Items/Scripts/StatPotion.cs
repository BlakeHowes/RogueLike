using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "StatPotion", menuName = "Items/StatPotion")]

public class StatPotion : ItemAbstract {
    public int damage;
    public int heal;
    public int maxHealth;

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return true;
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != Signal.Attack) { return; }
        var target = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(position);
        if (target == null) {
            return;
        }
        var stats = target.GetComponent<Stats>();
        if (damage > 0) {
            stats.TakeDamage(damage, origin);
        }
        if (heal > 0) {
            stats.Heal(heal);
        }
        if (maxHealth > 0) {
            stats.maxHealthBase += maxHealth;
        }
        var inventory = PartyManager.i.currentCharacter.GetComponent<Inventory>().items;
        if (inventory.Contains(this)) {
            inventory.Remove(this);
        }
        return;
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
