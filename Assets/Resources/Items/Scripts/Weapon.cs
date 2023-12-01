using System;
using UnityEngine;
using Random = UnityEngine.Random;
using static ItemStatic;

[CreateAssetMenu(fileName = "Weapon", menuName = "Items/Weapon")]

public class Weapon : ItemAbstract {
    public int shopValue;
    public WeaponType weaponType;
    public Vector2Int damageRange = new Vector2Int(5, 8);
    [Range(0, 100)] public float accuracyBase = 100;
    public int rangeBase = 1;
    public Vector3Int heldOffset;
    public bool twoHanded = false;

    [Header("Temporary Stats")]
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public GameObject target;
    [HideInInspector] public int damageTotal;

    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if(position != origin) { origin = parentGO.Position(); }
        if(callType == CallType.OnActivate) {
            if (!parentGO) { return; }
            if (!position.InRange(origin, rangeBase)) { return; }
        }
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }

    public void CallIgnoringRange(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }

    public int GetDamage(GameObject target,GameObject parentGO) {
        int damage = 0;
        var stats = parentGO.GetComponent<Stats>();
        if (!target) { goto SkipAccuracy; }
        if (isAttackAMiss(stats)) { return 0; }
        SkipAccuracy:
        damage = Random.Range(damageRange.x, damageRange.y + 1);
        damage += stats.meleeDamage;
        damage =Mathf.RoundToInt( damage *stats.meleeDamageMultiple);//ROUNDING WHAT AM I SUPPOSE TO DO HERE
        return damage;
    }

    public float GetAccuracy(GameObject ParentGO) {
        if (!parentGO) { return accuracyBase; }
        var stats = parentGO.GetComponent<Stats>();
        var accuracy = stats.meleeAccuracy;
        accuracy *= stats.meleeAccuracyMultiple;
        return accuracyBase + accuracy;
    }

    public int GetRange(GameObject ParentGO) {
        return rangeBase;
    }

    private bool isAttackAMiss(Stats stats) {
        var accuracyRoll = Random.Range(0.0f, 100.0f);
        var accuracyTemp = accuracyBase + stats.meleeAccuracy;
        if (accuracyTemp < accuracyRoll) { return true; }
        return false;
    }

    public string CreateDescription() {
        var description = "";
        foreach (var ability in abilities) {
            foreach(var container in ability.actionContainers) {
                if(container.action.name == "DamageThisItem") {
                    description += ((IDescription)container.action).Description(this, container);
                    break;
                }
            }
            if(description != "") { break; }
        }
        return description;
    }
}
