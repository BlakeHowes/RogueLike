using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Tilemaps;

public abstract class ItemAbstract : ScriptableObject
{
    public Tile tile;
    //public GameObject particles;
    [HideInInspector] public Vector3Int position;
    [HideInInspector] public Vector3Int origin;
    public abstract void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal);
    public abstract IEnumerator Action();
    public abstract string Description();
}

public static class ItemStatic {
    public enum EquipmentType {
        mainHand,
        offHand,
        helmet,
        armour,
        trinket
    }

    public enum Weight { //This determins if its good for ranged or melee characters
        None,
        Light,
        Medium,
        Heavy,
        Giant,
    }

    public enum SkillDescriptionForAI {
        BuffSelf,
        BuffAllies,
        AttackSingle,
        AttackAOE
    }

    public enum Signal {
        CalculateStats,
        ActionPointSum,
        ResetStatsToBase,
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
