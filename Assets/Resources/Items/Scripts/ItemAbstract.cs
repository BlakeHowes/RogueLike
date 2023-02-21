using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public abstract class ItemAbstract : ScriptableObject
{
    [Header("Main")]
    public Type type;
    public Tile tile;
    public GameObject particles;
    public List<ItemAbstract> Modifiers = new List<ItemAbstract>();
    [NonSerialized]public bool ConditionsMet;
    public abstract void Call(Vector3Int position,Vector3Int origin,Signal signal);

    public void CheckConditions(Vector3Int position, Vector3Int origin) {
        ConditionsMet = false;
        foreach (ItemAbstract item in Modifiers) {
            item.CheckConditions(position, origin);
        }
        if (Condition(position, origin)) {
            MouseManager.i.itemCanBeUsed = true;
            ConditionsMet = true;
        }
    }

    //public abstract IEnumerator Action();

    public abstract bool Condition(Vector3Int position, Vector3Int origin);
    public abstract string Description();

    public enum Type {
        Consumable,
        Weapon,
        OffHand,
        Armour,
        Helmet,
        Trinket,
        Skill
    }
    public enum Signal {
        CalculateStats,
        ActionPointSum,
        WeaponDamageCalculate,
        SelectItem,
        Attack,
        CreateSkill,
        Pickup,
        Heal,
        TakeDamage,
        Death,
        StartOfTurn,
        Tick,
        FirstEnemyMove,
        SetTarget,
        DirectDamage
    }
}
