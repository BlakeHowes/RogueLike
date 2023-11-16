using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using static ItemStatic;
public class ElementalStats : MonoBehaviour
{
    public bool pushImmunity = false;
    public List<ItemAbstract> statusImmunites;
    public List<DamageInteractions> damageInteractions;
    public bool IsImmune(ItemAbstract statusEffect) {
        if (!statusEffect) { return false; }
        foreach (var immunity in statusImmunites) {
            if (immunity.GetType() == statusEffect.GetType()) { return true; }
        }
        return false;
    }

    public float GetElementalDamageModifier(Surface surface) {
        foreach(DamageInteractions damageInteraction in damageInteractions){
            if (damageInteraction.surface) {
                if(damageInteraction.surface == surface) {
                    return damageInteraction.damageMultiplier;
                }
            }
        }
        return 1f;
    }

    public float GetWeaponTypeDamageModifier(WeaponType weaponType) {
        foreach (DamageInteractions damageInteraction in damageInteractions) {
            if (damageInteraction.weaponType == weaponType) {
                return damageInteraction.damageMultiplier;
            }
        }
        return 1f;
    }
}
[System.Serializable]
public struct DamageInteractions {
    public WeaponType weaponType;
    public Surface surface;
    public float damageMultiplier;
}
