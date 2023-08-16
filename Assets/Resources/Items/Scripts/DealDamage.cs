using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;
[CreateAssetMenu(fileName = "Deal Damage", menuName = "Actions/Deal Damage")]
public class DealDamage : Action
{
    [HideInInspector] public int damage;
    //public Target target;
    [HideInInspector] public int areaRange;
    public DamageSource damageSource;
    //[HideInInspector] public List<string> targetStrings = new List<string>();
    //public Tags targetsTags;
    //public CallType onSignal = CallType.Attack;
    [HideInInspector] public Weapon weapon;
    //public float delayTime;
    [HideInInspector] public GameObject targetGo;
    public enum Target {
        Others,
        Self,
        Area
    }

    public enum DamageSource {
        Damage,
        ParentItemAsWeapon,
        Weapon,
        MainHand,
        OffHand,
        Percentage,
        Destroy,
        Area
    }

    public void Percentage() {
        var stats = targetGo.GetComponent<Stats>();
        int health = Mathf.RoundToInt((((float)stats.health) / 100) * (100 - this.damage));
        if (health <= 0) { health = 1; }
        var damage = Mathf.Abs(health - stats.health);
        stats.TakeDamage(damage, origin, true);
    }

    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position,origin,parentGO,parentItem);
        damage = actionContainer.intValue;
        weapon = actionContainer.itemValue as Weapon;
        if(damageSource == DamageSource.Area) {
            areaRange = actionContainer.vector2IntValue.y;
            damage = actionContainer.vector2IntValue.x;
        }

        targetGo = position.GameObjectGo();
        if(targetGo)GridManager.i.AddToStack(this);
        return true;
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

    public void Area() {
        var inSightArea = GridManager.i.goMethods.PositionsInSight(areaRange, position);
        foreach (var positionInArea in inSightArea) {
            var go = positionInArea.GameObjectGo();
            if (!go) { continue; }
            go.GetComponent<Stats>().TakeDamage(damage, origin);
        }
    }

    public override IEnumerator StackAction() {
        switch (damageSource) {
            case DamageSource.Damage: targetGo.GetComponent<Stats>().TakeDamage(damage, origin); break;
            case DamageSource.ParentItemAsWeapon:
                var weapon = parentItem as Weapon;
                var weaponDamage = weapon.GetDamage(targetGo, parentGO);
                targetGo.GetComponent<Stats>().TakeDamage(weaponDamage, origin); 
                break;
            case DamageSource.Weapon: this.weapon.Call(position, origin, parentGO, CallType.Activate); break;
            case DamageSource.MainHand: UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetMainHandAsWeapon()); break;
            case DamageSource.OffHand: UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetOffHandAsWeapon()); break;
            case DamageSource.Percentage: Percentage(); break;
            case DamageSource.Destroy: targetGo.GetComponent<Stats>().Die(position); break;
            case DamageSource.Area: Area(); break;
        }
        yield return null;
    }
}
