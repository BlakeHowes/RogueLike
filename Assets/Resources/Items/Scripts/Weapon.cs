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

    public override string Description() {
        ResetTempStats();
        string description = "This " + name + " does " + damageRange.x + "-" + (damageRange.y);
        description += " with an accuracy of " + accuracyBase;
        description += ". ";
        return description;
    }


}
