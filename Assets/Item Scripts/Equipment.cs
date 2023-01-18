using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Equipment", menuName = "Items/Equipment")]
public class Equipment : ItemAbstract
{
    public Sprite wornSprite;
    public int attack;
    public int maxHealth;
    public int armour;
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
        var target = position.gameobjectSpawn();
        var targetStats = target.GetComponent<Stats>();

        targetStats.bonusMaxHealth += maxHealth+maxHealthBonus;
        targetStats.bonusArmour += armour;

        var mainHand = target.GetComponent<Inventory>().mainHand;
        if (mainHand != null) { 
            var weapon = mainHand as Weapon;
            weapon.rangeBonus += range;
            weapon.attackBonus += attack;
        }

        var inventory = origin.gameobjectSpawn().GetComponent<Inventory>();
        if(inventory.mainHand != null) {
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
