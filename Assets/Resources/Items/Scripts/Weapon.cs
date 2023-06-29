using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using static ItemStatic;
using System.Collections;

[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract
{
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public bool duelWield,twoHanded = false;
    [Header("Base Stats")]
    public int actionPointCost;
    public int damageBase = 5;
    public int damageMaxBase;
    public int accuracyBase = 8;
    public int rangeBase = 1;
    public int damageMultipleBase = 1;
    public float delayAfterApplyingDamage;
    public Vector3Int heldOffset;

    [Header("Temporary Stats")]
    [NonSerialized] public int rangeTemp;
    [NonSerialized] public int accuracyTemp;
    [NonSerialized] public int damageTemp;
    [NonSerialized] public int damageMaxTemp;
    [NonSerialized] public int damageMultipleTemp;
    [NonSerialized] public int damage;
    [HideInInspector] public GameObject originCharacter;
    [HideInInspector] public GameObject target;
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

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        originCharacter = origin.gameobjectSpawn();
        if (signal == Signal.CalculateStats) {
            ResetTempStats();
            foreach (ItemAbstract item in subItems) {
                item.Call(position, origin, Signal.CalculateStats);
            }
            return;
        }

        if (signal == Signal.ActionPointSum) {
            if (MouseManager.i.itemSelected == null)
                originCharacter.GetComponent<Stats>().actionPointsSum += actionPointCost;
            foreach (ItemAbstract item in subItems) {
                item.Call(position, origin, signal);
            }
            return;
        }

        if(signal == Signal.WeaponDamageCalculate) {
            SetDamage(position);
        }

        if (signal != Signal.Attack) { return; }
        this.origin = origin;
        this.position = position;
        target = this.position.gameobjectSpawn();
     
        if (MouseManager.i.itemSelected != null) { return; }

        foreach (ItemAbstract item in subItems) {
            item.Call(position, origin, signal);
        }
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { 
            if(GridManager.i.itemsInActionStack.Count == 0) {
                return;
            }
        }
        GridManager.i.itemsInActionStack.Add(this);
    }

    public override IEnumerator Action() {
        origin = originCharacter.position();
        position = target.position();
        Debug.Log("Weapon Call: Position: " + position + " Origin: " + origin);
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { yield break; }
        if (target) {
            if(damage > 0) { target.GetComponent<Stats>().TakeDamage(damage, origin); }
            if(originCharacter)originCharacter.GetComponent<Inventory>().CallEquipment(position, origin, Signal.DirectDamage);
            var character = PartyManager.i.currentCharacter;
            float enemyWaitTime = 0;
            if (character) { 
                if(character.GetComponent<Stats>().faction == PartyManager.Faction.Enemy) {
                    enemyWaitTime = 0.2f;
                } 
            }
            yield return new WaitForSeconds(delayAfterApplyingDamage+enemyWaitTime);
        }
    }

    public override string Description() {
        ResetTempStats();
        string description = "This " + name + " does "+ damageBase +"-"+ (damageBase+damageMaxBase);
        description += " with an accuracy of " + accuracyBase;
        description += ". ";
        foreach (ItemAbstract item in subItems) {
            description += item.Description();
        }
        return description;
    }
}
