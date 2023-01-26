using System;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.UI.Image;
using UnityEngine.UIElements;
using Random = UnityEngine.Random;
using static UnityEngine.GraphicsBuffer;

[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract
{
    public GameObject linePrefab;

    [Header("Base Stats")]
    public int actionPointCost;
    public int damageBase = 5;
    public int damageMaxBase;
    public int accuracyBase = 8;
    public int rangeBase = 1;
    public int damageMultipleBase = 1;

    [Header("Temporary Stats")]
    public int rangeTemp;
    public int accuracyTemp;
    public int damageTemp;
    public int damageMaxTemp;
    public int damageMultipleTemp;
    public int damage;
    public void ResetTempStats() {
        rangeTemp = rangeBase;
        accuracyTemp = accuracyBase;
        damageTemp = damageBase;
        damageMaxTemp = damageMaxBase;
        damageMultipleTemp = damageMultipleBase;
    }

    public void SetDamage(Vector3Int position) {
        var stats = position.gameobjectGO().GetComponent<Stats>();

        //Chance of hitting a zero on characters
        if (stats.faction == PartyManager.Faction.Enemy || stats.faction == PartyManager.Faction.Party) {
            var accuracyRoll = Random.Range(0.0f, 10.0f);
            if (accuracyTemp < accuracyRoll) {
                damage = 0;
            }
        }
        damage = Random.Range(damageTemp, damageTemp + damageMaxBase);
        damage *= damageMultipleTemp;
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        if (GridManager.i.tools.InRange(position, origin, rangeTemp)) { return true; }
        return false;
    }

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        var target = position.gameobjectSpawn();
        var originCharacter = origin.gameobjectSpawn();

        if (signal == Signal.ActionPointSum) {
            if (!ConditionsMet) { return; }
            if (MouseManager.i.itemSelected == null)
                originCharacter.GetComponent<Stats>().actionPointsSum += actionPointCost;
            foreach (ItemAbstract mod in Modifiers) {
                mod.Call(position, origin, Signal.CalculateStats);
            }
            return;
        }

        if (signal == Signal.CalculateStats) {
            ResetTempStats();           
            foreach (ItemAbstract mod in Modifiers) {
                mod.Call(position, origin, Signal.CalculateStats);
            }
            return;
        }

        if(signal == Signal.WeaponDamageCalculate) {
            SetDamage(position);
        }

        foreach (ItemAbstract mod in Modifiers) {
            mod.Call(position, origin, signal);
        }
        
        if (signal != Signal.Attack) { return; }
        if (ConditionsMet == false) { return; }
        if (target == null) { return; }

        



        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { return; }


        //Remove health from target
        target.GetComponent<Stats>().TakeDamage(damage, origin);

        EffectManager.i.LineEffect(position, origin, linePrefab);
        EffectManager.i.PartEffect(position, origin, particles);
    }

    public override string Description() {
        var currentCharacter = PartyManager.i.currentCharacter;
        var position = currentCharacter.position();
        string description = "This " + name + " does "+ damageTemp +"-"+ (damageTemp+damageMaxTemp) +" damage";
        description += " with an accuracy of " + accuracyTemp;
        return description;
    }

    public void OnEnable() {
        type = Type.Weapon;
    }
}
