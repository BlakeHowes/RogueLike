using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;


[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract
{
    public GameObject linePrefab;
    public bool duelWield = false;
    [Header("Base Stats")]
    public int actionPointCost;
    public int damageBase = 5;
    public int damageMaxBase;
    public int accuracyBase = 8;
    public int rangeBase = 1;
    public int damageMultipleBase = 1;
    public Vector3Int heldOffset;

    [Header("Temporary Stats")]
    [NonSerialized] public int rangeTemp;
    [NonSerialized] public int accuracyTemp;
    [NonSerialized] public int damageTemp;
    [NonSerialized] public int damageMaxTemp;
    public int damageMultipleTemp;
    [NonSerialized] public int damage;
    public void ResetTempStats() {
        rangeTemp = rangeBase;
        accuracyTemp = accuracyBase;
        damageTemp = damageBase;
        damageMaxTemp = damageMaxBase;
        damageMultipleTemp = damageMultipleBase;
    }

    public void SetDamage(Vector3Int position) {
        var target = position.gameobjectGO();
        if (!target) { goto SkipAccuracy;}
        var stats = target.GetComponent<Stats>();

        //Chance of hitting a zero on characters
        if (stats.faction == PartyManager.Faction.Enemy || stats.faction == PartyManager.Faction.Party) {
            var accuracyRoll = Random.Range(0.0f, 10.0f);
            if (accuracyTemp < accuracyRoll) {
                damage = 0;
            }
        }
        SkipAccuracy:
        damage = Random.Range(damageTemp, damageTemp + damageMaxBase);
        damage *= damageMultipleTemp;
        Debug.Log("Damage Calculation"+damage);
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

        if (signal != Signal.Attack) { return; }
        if (ConditionsMet == false) { return; }
        //if (target == null) { return; }

        Debug.Log("Damage Attack" + damage);


        Debug.Log("Weapon Range " + rangeTemp);
        Debug.Log("position " + position + "origin " + origin);
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { return; }

        foreach (ItemAbstract mod in Modifiers) {
            mod.Call(position, origin, signal);
        }
        //Remove health from target
        if(target)
        target.GetComponent<Stats>().TakeDamage(damage, origin);

        EffectManager.i.CreateLineEffect(position, origin, linePrefab);
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
