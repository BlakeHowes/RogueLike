
using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;
using static UnityEngine.RuleTile.TilingRuleOutput;

[CreateAssetMenu(fileName = "Deal Damage", menuName = "Actions/Deal Damage")]
public class DealDamage : Action,IDescription
{
    [HideInInspector] public int damage;
    [HideInInspector] public int areaRange;
    public DamageSource damageSource;
    [HideInInspector] public Weapon weapon;
    [HideInInspector] public GameObject targetGo;
    [HideInInspector] public Vector2Int damageRange;
    public enum Target {
        Others,
        Self,
        Area
    }

    public enum DamageSource {
        Damage,
        ParentItem,
        Weapon,
        MainHand,
        OffHand,
        Percentage,
        Destroy,
        Area,
        Range,
        DamageTaken,
        Armour
    }

    public void Percentage() {
        var stats = targetGo.GetComponent<Stats>();
        int health = Mathf.RoundToInt((((float)stats.health) / 100) * (100 - this.damage));
        if (health <= 0) { health = 1; }
        var damage = Mathf.Abs(health - stats.health);
        stats.TakeDamage(damage, position, true);
    }

    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position,origin,parentGO,parentItem);
        damage = actionContainer.intValue;
        weapon = actionContainer.itemValue as Weapon;
        damageRange = actionContainer.vector2IntValue;
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
        item.Call(position, origin, parentGO, CallType.OnActivate);
    }

    public void Area() {
        var inSightArea = GridManager.i.goMethods.PositionsInSight(areaRange, origin);
        foreach (var positionInArea in inSightArea) {
            var go = positionInArea.GameObjectGo();
            if (!go) { continue; }
            go.GetComponent<Stats>().TakeDamage(damage, origin);
        }
    }

    public void ParentItemDamage() {
        if(parentItem is Weapon) {
            var weapon = parentItem as Weapon;
            var weaponDamage = weapon.GetDamage(targetGo, parentGO);
            targetGo.GetComponent<Stats>().TakeDamage(weaponDamage, origin);
            if (parentGO) parentGO.GetComponent<SpringToTarget3D>().Nudge(new Vector3(0, Manager.GetGlobalValues().onAttackNudgeAmount), 24, 1000);
        }
        if (parentItem is Skill) {
            var skill = parentItem as Skill;
            var weaponDamage = skill.GetDamage();
            targetGo.GetComponent<Stats>().TakeDamage(weaponDamage, origin);
            //if (parentGO) parentGO.GetComponent<SpringToTarget3D>().Nudge(new Vector3(0, Manager.GetGlobalValues().onAttackNudgeAmount), 24, 1000);
        }
    }

    public override IEnumerator StackAction() {
        //position = parentGO.Position();
        switch (damageSource) {
            case DamageSource.Damage: targetGo.GetComponent<Stats>().TakeDamage(damage, origin); break;
            case DamageSource.ParentItem: ParentItemDamage(); break;
            case DamageSource.Weapon: this.weapon.Call(position, origin, parentGO, CallType.OnActivate); break;
            case DamageSource.Percentage: Percentage(); break;
            case DamageSource.Destroy: targetGo.GetComponent<Stats>().Die(position,origin); break;
            case DamageSource.Area: Area(); break;
            case DamageSource.Range: targetGo.GetComponent<Stats>().TakeDamage(Random.Range(damageRange.x,damageRange.y +1), position); break;
            case DamageSource.DamageTaken: targetGo.GetComponent<Stats>().TakeDamage(parentGO.GetComponent<Stats>().damageTaken, origin); break;
            case DamageSource.MainHand: UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetMainHandAsWeapon()); break;
            case DamageSource.OffHand: UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetOffHandAsWeapon()); break;
            case DamageSource.Armour: targetGo.GetComponent<Stats>().TakeDamage(parentGO.GetComponent<Stats>().armour, origin); break;
        }
        yield return null;
    }

    public string Description(ItemAbstract parentItem ,ActionContainer actionContainer) {
        var description = "";
        switch (damageSource) {
            case DamageSource.ParentItem:
                var weapon = parentItem as Weapon;
                description += "Deals " +weapon.damageRange.x + " to " +weapon.damageRange.y + " " +weapon.weaponType + " damage";
                if(weapon.rangeTemp > 1) { description += " at a range of " + weapon.rangeTemp; }
                description += "with an accuracy of " + weapon.accuracyTemp;
                break;
         
        }
        return description;
    }
}
