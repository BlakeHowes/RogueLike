using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static ItemStatic;

public abstract class ItemAbstract : ScriptableObject {
    public Tile tile;
    public List<Ability> abilities = new();
    public abstract void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType);

    public void CallAbilities(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }
}

[System.Serializable]
public class Ability {
    public CallType callType;
    [SerializeField] public List<ActionContainer> actionContainers;

    public void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem) {
        foreach (var actionContainer in actionContainers) {
            if (!actionContainer.action.Condition(position, origin, parentGO, parentItem, this, actionContainer)) { break; }
        }
    }
}
[System.Serializable]
public struct ActionContainer {
    public Action action;
    public int intValue;
    public float floatValue;
    public ItemAbstract itemValue;
    public GameObject prefabValue;
    public Color colorValue;
    public Vector2Int vector2IntValue;
    public Surface surfaceValue;
    public Sprite spriteValue;
    public string stringValue;
//public Material materialValue;
}

[System.Serializable]
public abstract class Action : ScriptableObject {
    [HideInInspector] public Vector3Int origin;
    [HideInInspector] public Vector3Int position;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public ItemAbstract parentItem;
    public ExtraVariableType extraVariableType;
    public abstract bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer);

    public void SaveValues(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem) {
        this.origin = position;
        this.position = origin;
        this.parentGO = parentGO;
        this.parentItem = parentItem;
    }
    public abstract IEnumerator StackAction();
}

public static class ItemStatic {
    public enum EquipmentType {
        mainHand,
        offHand,
        helmet,
        armour,
        trinket
    }

    public enum WeaponType {
        melee,
        ranged,
        magic,
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

    public enum ExtraVariableType {
        None,
        Int,
        Float,
        Item,
        Prefab,
        Color,
        Vector2,
        Surface,
        Sprite,
        SurfaceInt,
        String,
        SurfaceColour,
        //Material
    }

    public enum Stat {
        MaxHealth,
        Health,
        Armour,
        meleeDamage,
        rangeDamage,
        magicDamage,
        MaxActionPoints,
        ActionPoints,
        DamageTaken
    }

    public enum CallType {
        OnActivate,
        OnTick,
        OnTakeDamage,
        OnHeal,
        OnDeath,
        OnPickupItem,
        ResetStatsToBase,
        CalculateStats,
        ActionPointSum,
        SelectItem,
        AddSkillToHotbar,
        StartOfTurn,
        OnStatusEffectEnable,
        EndOfStack,
        DirectDamage,
        StartOfIndividualTurn,
        DisableItem,
        OnTakeDamageGlobal,
        OnDeathGlobal,
        OnMoveGlobal,
        OnAttackGlobal
           
    }
}
