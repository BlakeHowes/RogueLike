using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "DoDamage", menuName = "Mods/DoDamage")]
public class DoDamage : ItemAbstract {
    public int damage;
    public bool useOriginWeapon;
    public Target target;
    public Weapon weapon;
    public Signal onSignal;
    public float time;
    public Method method;
    [HideInInspector] public GameObject targetGo;
    public enum Target {
        Others,
        Self
    }

    public enum Method {
        Damage,
        Weapon,
        MainHand
    }
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal != onSignal) { return; }
        this.position = position;
        this.origin = origin;
        if (useOriginWeapon) { weapon = origin.GameObjectGo().GetComponent<Inventory>().mainHand as Weapon; }
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        switch (method) {
            case Method.Damage: Damage(targetGo, origin); break;
        }
        yield return new WaitForSeconds(time);
    }

    public void Damage(GameObject go,Vector3Int origin) {
        if(go)go.GetComponent<Stats>().TakeDamage(damage, origin);
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
