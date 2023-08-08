using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using static ItemStatic;
using System.Collections;

[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract
{
    public int shopValue;
    [SerializeField]public List<SubItemOptions> subItems = new List<SubItemOptions>();
    //public List<ItemAbstract> subItems = new List<ItemAbstract>();
    public bool twoHanded = false;

    [Header("Base Stats")]
    public bool dontApplyDamage = false;
    public Vector2Int damageRange = new Vector2Int(5,8);
    [Range(0,100)]public float accuracyBase = 100;
    public int rangeBase = 1;
    public Vector3Int heldOffset;

    [Header("Temporary Stats")]
    [HideInInspector] public int rangeTemp;
    [HideInInspector] public float accuracyTemp;
    [HideInInspector] public int damageTemp;
    [HideInInspector] public int damageMaxTemp;
    [HideInInspector] public int damageMultipleTemp;
    [HideInInspector] public int damage;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public GameObject target;
    public void ResetTempStats() {
        rangeTemp = rangeBase;
        accuracyTemp = accuracyBase;
        damageTemp = damageRange.x;
        damageMaxTemp = damageRange.y;
        damageMultipleTemp = 1;
    }

    public void SetDamage(GameObject target) {
        if (!target) { goto SkipAccuracy;}
        var stats = target.GetComponent<Stats>();
        if (isAttackAMiss(stats)) { damage = 0; return; }
        SkipAccuracy:
        damage = Random.Range(damageTemp, damageMaxTemp +1);
        damage *= damageMultipleTemp;
        Debug.Log("Damage Calculation"+damage);
    }

    private bool isAttackAMiss(Stats stats) {
        var accuracyRoll = Random.Range(0.0f, 100.0f);
        if (accuracyTemp < accuracyRoll) {return true;}
        return false;
    }

    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.parentGO = parentGO;

        if (signal == Signal.CalculateStats) {
            foreach (var item in subItems) {
                item.subItem.Call(position, origin, Signal.CalculateStats, parentGO, this);}
            return;
        }

        if(signal == Signal.ResetStatsToBase) { ResetTempStats(); }

        //Range Check!
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { return; }
        if (signal != Signal.Attack) { return; }
        this.origin = origin;
        this.position = position;
     
        if (MouseManager.i.itemSelected != null) { return; }

        foreach (var item in subItems) {
            if(item.subItem is Weapon) { 
                var weapon = item.subItem as Weapon;
                weapon.accuracyTemp = accuracyTemp; 
                weapon.rangeTemp = rangeTemp;
                weapon.damageMaxTemp = damageMaxTemp;
                weapon.damageTemp = damageTemp;
                weapon.damageMultipleTemp = damageMultipleTemp;
            }
            if(item.after == false)item.subItem.Call(position, origin, signal, parentGO, this);
        }
        if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { 
            if(GridManager.i.itemsInActionStack.Count == 0) {
                return;
            }
        }
        if (parentGO) {
            var inventory = parentGO.GetComponent<Inventory>();
            if (inventory.GetOffHandAsWeapon() == this && inventory.GetMainHandAsWeapon()) {
                GridManager.i.AddToStack(Manager.GetGlobalValues().GetWaitSeconds(0.1f));
            }
        }

        GridManager.i.AddToStack(this);
        foreach (var item in subItems) {
            if (item.after == true) item.subItem.Call(position, origin, signal, parentGO, this);
        }
    }

    public override IEnumerator Action() {
        target = position.GameObjectGo();
        SetDamage(target);
        
        origin = parentGO.Position();
        position = target.Position();
        Debug.Log("Weapon Call: Position: " + position + " Origin: " + origin);
        //if (!GridManager.i.tools.InRange(position, origin, rangeTemp)) { yield break; }
        if (target) {
            if(!dontApplyDamage)target.GetComponent<Stats>().TakeDamage(damage, origin);
            if(parentGO)parentGO.GetComponent<Inventory>().CallEquipment(position, origin, Signal.DirectDamage);
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
        foreach (var item in subItems) {
            description += item.subItem.Description();
        }
        return description;
    }


}

[System.Serializable]
public struct SubItemOptions {
    public ItemAbstract subItem;
    public bool after;
}
