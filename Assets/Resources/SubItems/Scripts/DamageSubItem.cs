using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;
[CreateAssetMenu(fileName = "Damage", menuName = "SubItems/Damage")]
public class DamageSubItem : ItemAbstract {
    public int damage;
    public float percentage;
    public Target target;
    public int areaRange;
    public DamageSource damageSource;
    [HideInInspector]public List<string> targetStrings = new List<string>();
    public Tags targetsTags;
    public Signal onSignal = Signal.Attack;
    public Weapon weapon;
    public float delayTime;
    [HideInInspector] public GameObject targetGo;
    [HideInInspector] public GameObject parentGO;
    [HideInInspector] public ItemAbstract parentItem;
    public enum Target {
        Others,
        Self,
        Area
    }

    [Flags]public enum DamageSource {
        Nothing = 0x00,
        Damage = 0x01,
        Weapon = 0x02,
        MainHand = 0x04,
        OffHand = 0x08,
        Percentage = 0x10,
        Destroy = 0x20
    }

    public void Percentage() {
        var stats = targetGo.GetComponent<Stats>();
        int health = Mathf.RoundToInt((((float)stats.health) / 100) * (100 - percentage));
        if (health <= 0) { health = 1; }
        var damage = Mathf.Abs(health - stats.health);
        stats.TakeDamage(damage, origin, true);
    }

    public override void Call(Vector3Int position,Vector3Int origin, Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        if (signal != onSignal) { return; }
        this.position = position;
        this.origin = origin;
        this.parentGO = parentGO;
        this.parentItem = parentItem;
        
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        if(target == Target.Area) { Area(); return; }

        targetGo = position.GameObjectGo();
        if (target == Target.Self) { targetGo = parentGO; }
        if (!targetGo) { return; }
        if (!targetStrings.Contains(targetGo.tag)) { return; }

        GridManager.i.AddToStack(this);
    }

    public void Area() {
        var inSightArea = GridManager.i.goMethods.PositionsInSight(areaRange, position);
        foreach(var positionInArea in inSightArea) {
            var go = positionInArea.GameObjectGo();
            if (!go) { continue; }
            if (!targetStrings.Contains(go.tag)) { continue; }
            targetGo = go;
            GridManager.i.AddToStack(this);
        }
    }

    public void UseCharacterWeapon(ItemAbstract item) {
        if (!item) { return; }
        if (parentItem) {
            if (parentItem == item) {
                GridManager.i.InsertToStack(item);
                return;
            }
        }
        item.Call(position, origin, Signal.Attack, parentGO, this);
    }

    public override IEnumerator Action() {
        if(damageSource.HasFlag(DamageSource.Damage)) { targetGo.GetComponent<Stats>().TakeDamage(damage, origin); }
        if (damageSource.HasFlag(DamageSource.Percentage)) { Percentage(); }
        if (damageSource.HasFlag(DamageSource.Weapon)) { weapon.Call(position,origin,Signal.Attack, parentGO, this); }
        if (damageSource.HasFlag(DamageSource.Destroy)) { targetGo.GetComponent<Stats>().Die(position); }
        if (!parentGO) { yield break;}
        if (damageSource.HasFlag(DamageSource.MainHand)) { UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetMainHandAsWeapon());}
        if (damageSource.HasFlag(DamageSource.OffHand)) {UseCharacterWeapon(parentGO.GetComponent<Inventory>().GetOffHandAsWeapon());}

        yield return new WaitForSeconds(delayTime);
    }

    public override string Description() {
        return "";
    }
}
