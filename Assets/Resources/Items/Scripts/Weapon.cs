using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using static ItemStatic;
using System.Collections;
using Unity.VisualScripting.Antlr3.Runtime.Misc;

[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract
{
    public int shopValue;
    public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public bool twoHanded = false;
    [Header("Base Stats")]
    public Vector2Int damageRange = new Vector2Int(5,8);
    [Range(0,100)]public float accuracyBase = 90;
    public int rangeBase = 1;
    public Vector3Int heldOffset;

    [Header("Temporary Stats")]
    [HideInInspector] public int rangeTemp;
    [HideInInspector] public float accuracyTemp;
    [HideInInspector] public int damageTemp;
    [HideInInspector] public int damageMaxTemp;
    [HideInInspector] public int damageMultipleTemp;
    [HideInInspector] public int damage;
    [HideInInspector] public GameObject originCharacter;
    [HideInInspector] public GameObject target;
    public void ResetTempStats() {
        rangeTemp = rangeBase;
        accuracyTemp = accuracyBase;
        damageTemp = damageRange.x;
        damageMaxTemp = damageRange.y;
        damageMultipleTemp = 1;
    }

    public void SetDamage(Vector3Int position) {
        var target = position.GameObjectGo();
        if (!target) { goto SkipAccuracy;}
        var stats = target.GetComponent<Stats>();
        if (isAttackAMiss(stats)) { damage = 0; return; }
        SkipAccuracy:
        damage = Random.Range(damageTemp, damageMaxTemp +1);
        damage *= damageMultipleTemp;
        Debug.Log("Damage Calculation"+damage);
    }

    private bool isAttackAMiss(Stats stats) {
        //Chance of hitting a zero on characters
        /*
        if (stats.faction == PartyManager.Faction.Enemy || stats.faction == PartyManager.Faction.Party) {
            Debug.Log("Accuracy test");
            var accuracyRoll = Random.Range(0.0f, 100.0f);
            if (accuracyTemp < accuracyRoll) {
                return true;
            }
        }
        */
        Debug.Log("Accuracy test");
        Debug.Log(accuracyTemp);
        var accuracyRoll = Random.Range(0.0f, 100.0f);
        if (accuracyTemp < accuracyRoll) {
            return true;
        }
      
        return false;
    }

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        originCharacter = origin.GameObjectSpawn();
        if (signal == Signal.CalculateStats) {
            foreach (ItemAbstract item in subItems) {
                item.Call(position, origin, Signal.CalculateStats);
            }
            return;
        }
        if(signal == Signal.ResetStatsToBase) { ResetTempStats(); }

        //Range Check!
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { return; }
        SetDamage(position);
        if (signal != Signal.Attack) { return; }
        this.origin = origin;
        this.position = position;
        target = this.position.GameObjectSpawn();
     
        if (MouseManager.i.itemSelected != null) { return; }

        foreach (ItemAbstract item in subItems) {
            if(item is Weapon) { 
                var weapon = item as Weapon;
                weapon.accuracyTemp = accuracyTemp; 
                weapon.rangeTemp = rangeTemp;
                weapon.damageMaxTemp = damageMaxTemp;
                weapon.damageTemp = damageTemp;
                weapon.damageMultipleTemp = damageMultipleTemp;
            }
            item.Call(position, origin, signal);
        }
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { 
            if(GridManager.i.itemsInActionStack.Count == 0) {
                return;
            }
        }
        GridManager.i.AddToStack(this);
    }

    public override IEnumerator Action() {
        origin = originCharacter.Position();
        position = target.Position();
        Debug.Log("Weapon Call: Position: " + position + " Origin: " + origin);
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { yield break; }
        if (target) {
            target.GetComponent<Stats>().TakeDamage(damage, origin);
            if(originCharacter)originCharacter.GetComponent<Inventory>().CallEquipment(position, origin, Signal.DirectDamage);
            var character = PartyManager.i.currentCharacter;
            float enemyWaitTime = 0;
            if (character) {
                if (character.tag == "Enemy" || character.tag == "Summon") {
                    enemyWaitTime = 0.2f;
                } 
            }
            yield return new WaitForSeconds(enemyWaitTime);
        }
    }

    public override string Description() {
        ResetTempStats();
        string description = "This " + name + " does "+ damageRange.x +"-"+ (damageRange.y);
        description += " with an accuracy of " + accuracyBase;
        description += ". ";
        foreach (ItemAbstract item in subItems) {
            description += item.Description();
        }
        return description;
    }
}
