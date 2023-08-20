using System;
using UnityEngine;
using Random = UnityEngine.Random;
using static ItemStatic;
using Unity.VisualScripting;

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
    [HideInInspector] public int rangeTemp;
    [HideInInspector] public float accuracyTemp;
    [HideInInspector] public int damageMultipleTemp;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public GameObject target;
    public void ResetTempStats() {
        rangeTemp = rangeBase;
        accuracyTemp = accuracyBase;
        damageMultipleTemp = 1;
    }

    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        if(callType == CallType.ResetStatsToBase) { ResetTempStats();return; }
        if(callType == CallType.OnActivate) { if (!position.InRange(origin, rangeTemp)) { return; } }
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }

    public int GetDamage(GameObject target,GameObject parentGO) {
        int damage = 0;
        if (!target) { goto SkipAccuracy; }
        var stats = target.GetComponent<Stats>();
        if (isAttackAMiss(stats)) { return 0; }
        SkipAccuracy:
        damage = Random.Range(damageRange.x, damageRange.y + 1);
        damage *= damageMultipleTemp;
        damage += parentGO.GetComponent<Stats>().meleeDamage;
        return damage;
    }

    private bool isAttackAMiss(Stats stats) {
        var accuracyRoll = Random.Range(0.0f, 100.0f);
        if (accuracyTemp < accuracyRoll) { return true; }
        return false;
    }

    public string CreateDescription() {
        var description = "";
        foreach (var ability in abilities) {
            foreach(var container in ability.actionContainers) {
                if(container.action.name == "DamageThisWeapon") {
                    description += ((IDescription)container.action).Description(this, container);
                    break;
                }
            }
            if(description != "") { break; }
        }
        return description;
    }
}
