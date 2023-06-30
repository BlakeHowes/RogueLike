using System.Collections;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Thorn Shot", menuName = "Passive/Thorn Shot")]
public class ThornShot : ItemAbstract {
    public int damage;
    public int range;
    public ItemAbstract projectile;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != Signal.TakeDamage) { return; }
        this.origin = origin;
        Debug.Log("thorn shot");
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(origin + new Vector3Int(range, 0, 0), origin);
        projectile.Call(this.position, origin, Signal.Attack);
        GridManager.i.AddToStack(this);
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(origin + new Vector3Int(-range, 0, 0), origin);
        projectile.Call(this.position, origin, Signal.Attack);
        GridManager.i.AddToStack(this);
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(origin + new Vector3Int(0,range, 0), origin);
        projectile.Call(this.position, origin, Signal.Attack);
        GridManager.i.AddToStack(this);
        this.position = GridManager.i.goMethods.FirstGameObjectInSight(origin + new Vector3Int(0,-range,  0), origin);
        projectile.Call(this.position, origin, Signal.Attack);
        GridManager.i.AddToStack(this);
    }
    public override string Description() {
        return "Shoots arrows that deal 2 damage in all cardinal directions when wearer takers damage";
    }

    public override IEnumerator Action() {
        var target = position.GameObjectGo();
        if(origin == position) { yield break; }
        if(target)target.GetComponent<Stats>().TakeDamage(damage,origin);
        yield return new WaitForSeconds(0f);
    }
}
