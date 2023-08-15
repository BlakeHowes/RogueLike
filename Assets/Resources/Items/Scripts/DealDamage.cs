using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;
[CreateAssetMenu(fileName = "Deal Damage", menuName = "Actions/Deal Damage")]
public class DealDamage : Action
{
    public int damage;
    public float percentage;
    public Target target;
    public int areaRange;
    public DamageSource damageSource;
    [HideInInspector] public List<string> targetStrings = new List<string>();
    public Tags targetsTags;
    //public CallType onSignal = CallType.Attack;
    public Weapon weapon;
    public float delayTime;
    [HideInInspector] public GameObject targetGo;
    public enum Target {
        Others,
        Self,
        Area
    }

    [Flags]
    public enum DamageSource {
        Nothing = 0x00,
        Damage = 0x01,
        ParentItemAsWeapon = 0x02,
        Weapon = 0x04,
        MainHand = 0x08,
        OffHand = 0x10,
        Percentage = 0x20,
        Destroy = 0x40
    }

    public void Percentage() {
        var stats = targetGo.GetComponent<Stats>();
        int health = Mathf.RoundToInt((((float)stats.health) / 100) * (100 - percentage));
        if (health <= 0) { health = 1; }
        var damage = Mathf.Abs(health - stats.health);
        stats.TakeDamage(damage, origin, true);
    }

    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position,origin,parentGO,parentItem);

        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        if (target == Target.Area) { Area(); return false; }

        targetGo = position.GameObjectGo();
        if (target == Target.Self) { targetGo = parentGO; }
        if (!targetGo) { return false; }
        if (!targetStrings.Contains(targetGo.tag)) { return false; }
        GridManager.i.AddToStack(this);
        return true;
    }

    public void Area() {
        var inSightArea = GridManager.i.goMethods.PositionsInSight(areaRange, position);
        foreach (var positionInArea in inSightArea) {
            var go = positionInArea.GameObjectGo();
            if (!go) { continue; }
            if (!targetStrings.Contains(go.tag)) { continue; }
            targetGo = go;
            //Gridmanager.i.InsertToStack(this);
        }
    }

    public void UseCharacterWeapon(ItemAbstract item) {
        if (!item) { return; }
        if (parentItem) {
            if (parentItem == item) {
                //GridManager.i.InsertToStack(item);
                return;
            }
        }
        //item.Call(position, origin, CallType.Attack, parentGO, this);
    }

    public override IEnumerator StackAction() {
        if (damageSource.HasFlag(DamageSource.Damage)) { targetGo.GetComponent<Stats>().TakeDamage(damage, origin); }
        if (damageSource.HasFlag(DamageSource.ParentItemAsWeapon)) {
            var weapon = parentItem as Weapon;
            var weaponDamage = weapon.GetDamage(targetGo,parentGO);
            targetGo.GetComponent<Stats>().TakeDamage(weaponDamage, origin); 
        }
        if (damageSource.HasFlag(DamageSource.Percentage)) { Percentage(); }
        //if (damageSource.HasFlag(DamageSource.Weapon)) { weapon.Call(position, origin, CallType.Attack, parentGO, this); }

        if (damageSource.HasFlag(DamageSource.Destroy)) { targetGo.GetComponent<Stats>().Die(position); }
        if (!parentGO) { yield break; }
        if (damageSource.HasFlag(DamageSource.MainHand)) { UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetMainHandAsWeapon()); }
        if (damageSource.HasFlag(DamageSource.OffHand)) { UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetOffHandAsWeapon()); }

        yield return new WaitForSeconds(delayTime);
    }
}
