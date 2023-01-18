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
    public GameObject linePrefab;
    [NonSerialized] public int attackBonus;
    [NonSerialized] public int attackMultiple = 1;
    [NonSerialized] public int rangeBonus;
    public List<ItemAbstract> PermWeaponMods;

    public void RefreshStats() {
        Modifiers.Clear();
        attackBonus = 0;
        rangeBonus = 0;
        attackMultiple = 1;
    }
    public override bool Call(Vector3Int position, Vector3Int origin) {
        InventoryManager.i.ApplyModifiers(PermWeaponMods, position, origin);
        InventoryManager.i.ApplyModifiers(Modifiers, position, origin);
        if (linePrefab != null) { EffectManager.i.LineEffect(position, origin,linePrefab) ; }

        var target = position.gameobjectSpawn();
        int damage = CalculateDamage();

        Stats stats;
        if (AOE > 0) {
            var aoeCells = GridManager.i.tools.Circle(AOE, position);
            foreach(var cell in aoeCells) {
                target =GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(cell);
                EffectManager.i.PartEffect(cell, origin, particles);
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
                EffectManager.i.PartEffect(cell, origin,particles);
                stats.Damage(damage,origin);
            }
            return true;
        }
        if (target != null) {
            stats = target.GetComponent<Stats>();

            if (stats.faction == PartyManager.Faction.Enemy || stats.faction == PartyManager.Faction.Party) {
                var accuracyRoll = Random.Range(0.0f, 10.0f);
                if (accuracy < accuracyRoll) {
                    damage = 0;
                }
            }
            EffectManager.i.PartEffect(position, origin, particles);
            stats.Damage(damage, origin);
           
        }
        return true;
    }

    public int CalculateDamage() {
        var damage = Random.Range(attackBase, attackBase + attackRandomAddition);
        damage += attackBonus;
        damage *= attackMultiple;
        return damage;
    }

    public override string Description() {
        var characterAttack = PartyManager.i.currentCharacter.GetComponent<Stats>().GetAttack();
        string description = "This " + name + " does "+(attackBase+attackBonus+ characterAttack) +"-"+(attackRandomAddition+attackBonus+attackBase+ characterAttack) +" damage";
        description += " with an accuracy of " + accuracy;
        if(AOE > 0) {
            description += " in a " + AOE + " sized area";
        }
        return description;
    }

    public void OnEnable() {
        type = Type.Weapon;
    }
}
