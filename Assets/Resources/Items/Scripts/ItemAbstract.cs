using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static ItemStatic;

public abstract class ItemAbstract : ScriptableObject {
    public Tile tile;
    public List<Ability> abilities = new();

    public void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }

    public abstract string Description();

    public void OnValidate() {
        /*
        foreach (var ability in abilities) { 
            CreateListener(ability.callType);
        }
        */
    }

}

[System.Serializable]
public class Ability {
    public CallType callType;
    [SerializeField] public List<ActionContainer> actionContainers;

    public void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem) {
        //For any signal specific values an indirect reference to signal, for instance
        // globalValues.Indirect(signal + "CallMultiplication")
        //This in a for loop for the value
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
}

[System.Serializable]
public abstract class Action : ScriptableObject {
    [HideInInspector] public Vector3Int position;
    [HideInInspector] public Vector3Int origin;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public ItemAbstract parentItem;
    public ExtraVariableType extraVariableType;
    public abstract bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer);

    public void SaveValues(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
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
        Prefab
    }

    public enum Stat {
        MaxHealth,
        Health,
        Armour,
        meleeDamage,
        rangeDamage,
        magicDamage,
        MaxActionPoints,
        ActionPoints
    }

    public enum CallType {
        Activate,
        Tick,
        TakeDamage,
        Heal,
        Death,
        Pickup,
        ResetStatsToBase,
        CalculateStats,
        ActionPointSum,
        SelectItem,
        AddSkillToHotbar,
        OnSwitchFactionTurn,
        SetTarget,
        EndOfIndividualTurn,
        DirectDamage,
        StartOfIndividualTurn
    }
}
