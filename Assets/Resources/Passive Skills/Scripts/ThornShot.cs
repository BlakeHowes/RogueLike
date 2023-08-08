using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;
[CreateAssetMenu(fileName = "Thorn Shot", menuName = "Passive/Thorn Shot")]
public class ThornShot : ItemAbstract {
    public int damage;
    public int range;
    public ItemAbstract projectile;
    [HideInInspector ]public List<string> targetStrings = new List<string>();
    public Tags targetsTags;

    public override void Call(Vector3Int position,Vector3Int origin, Signal signal,GameObject parentGO,ItemAbstract parentItem) {

        if(signal != Signal.TakeDamage) { return; }
        targetStrings = ConvertFlagsEnumToStringList(targetsTags,parentGO);

        this.origin = position;
        Debug.Log("thorn shot");
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(position + new Vector3Int(range, 0, 0), position);
        projectile.Call(this.position, position, Signal.Attack,parentGO, this);
        GridManager.i.AddToStack(this);
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(position + new Vector3Int(-range, 0, 0), position);
        projectile.Call(this.position, position, Signal.Attack, parentGO, this);
        GridManager.i.AddToStack(this);
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(position + new Vector3Int(0,range, 0), position);
        projectile.Call(this.position, position, Signal.Attack, parentGO, this);
        GridManager.i.AddToStack(this);
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(position + new Vector3Int(0,-range,  0), position);
        projectile.Call(this.position, position, Signal.Attack, parentGO, this);
        GridManager.i.AddToStack(this);
    }
    public override string Description() {
        return "Shoots arrows that deal 2 damage in all cardinal directions when wearer takers damage";
    }

    public override IEnumerator Action() {
        var target = position.GameObjectGo();
        if(origin == position) { yield break; }
        if (target) {if(targetStrings.Contains(target.tag)) target.GetComponent<Stats>().TakeDamage(damage, origin); }
        yield return new WaitForSeconds(0f);
    }
}
