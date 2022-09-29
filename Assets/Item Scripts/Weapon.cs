using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract
{
    public int attackBase=5;
    public int attackRandomAddition;
    public int accuracy=8;
    public int AOE =0;

    //To be implimented
    public int range =1;
    public GameObject linePrefab;
    [NonSerialized] public int attackBonus;
    [NonSerialized] public int attackMultiple = 1;

    public override bool Call(Vector3Int position, Vector3Int origin) {
        //Reset Bonus Stats
        attackBonus = 0;
        attackMultiple = 1;

        InventoryManager.i.ApplyModifiers(Modifiers, position, origin);
        if (linePrefab != null) { EffectManager.i.LineEffect(position + new Vector3(0.5f, 0.5f, 0), origin + new Vector3(0.5f, 0.5f, 0),linePrefab) ; }

        var target = position.gameobjectSpawn();
        int damage = CalculateDamage();
        Stats stats;
        if (AOE > 0) {
            var aoeCells = GridManager.i.tools.Circle(AOE, position);
            foreach(var cell in aoeCells) {
                target =GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(cell);
                if (target == null) {
                    continue;
                }
                stats = target.GetComponent<Stats>();

                if (stats.faction == PartyManager.Faction.Enemy || stats.faction == PartyManager.Faction.Party) {
                    var accuracyRoll = Random.Range(0.0f, 10.0f);
                    if (accuracy < accuracyRoll) {
                        damage = 0;
                    }
                }
                stats.Damage(damage,origin);
            }
            return true;
        }
        if (target == null) {
            return false;
        }
        stats = target.GetComponent<Stats>();

        if (stats.faction == PartyManager.Faction.Enemy|| stats.faction == PartyManager.Faction.Party) {
            var accuracyRoll = Random.Range(0.0f, 10.0f);
            if (accuracy < accuracyRoll) {
                damage = 0;
            }
        }
        stats.Damage(damage, origin);
        return true;
    }

    public int CalculateDamage() {
        var damage = Random.Range(attackBase, attackBase + attackRandomAddition) + PartyManager.i.currentCharacter.GetComponent<Stats>().GetAttack();
        damage += attackBonus;
        damage *= attackMultiple;
        return damage;
    }

    public override string Description() {
        var characterAttack = PartyManager.i.currentCharacter.GetComponent<Stats>().GetAttack();
        string description = "This " + name + " does "+(attackBase+attackBonus+ characterAttack) +"-"+(attackRandomAddition+attackBonus+attackBase+ characterAttack) +" damage";
        description += " with and accuracy of " + accuracy;
        if(AOE > 0) {
            description += " in a " + AOE + " sized area";
        }
        return description;
    }

    public void OnEnable() {
        type = Type.Weapon;
    }
}
