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
    public bool rangedmod;
    public int maxHealthBonus;
    public List<ItemAbstract> mainHandMods;
    public List<ItemAbstract> skills;
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

        var inventory = origin.gameobjectSpawn().GetComponent<Inventory>();
        if(inventory.mainHand != null) {
            if(rangedmod == true) {
                inventory.mainHand.ranged = true;
            }
            Debug.Log("range test");
            foreach (ItemAbstract item in mainHandMods) {
                inventory.mainHand.Modifiers.Add(item);
            }
        }

        foreach (ItemAbstract mod in skills) {
            GameUIManager.i.AddSkill(mod);
        }
        Debug.Log("Item Called");
        return true;
    }
    public override string Description() {
        var description = "";
        if (armour > 0) {
            description += " Armour: +"+armour;
        }
        if (maxHealth > 0) {
            description +=" Max Health: +"+ maxHealth;
        }
        if (attack > 0) {
            description += "Attack: +"+ attack;
        }
        foreach (ItemAbstract item in mainHandMods) {
            description += item.Description();
        }
        foreach (ItemAbstract item in skills) {
            description += item.Description();
        }
        return description;
    }
}
