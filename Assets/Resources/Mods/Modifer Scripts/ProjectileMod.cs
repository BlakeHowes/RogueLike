using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Projectile", menuName = "Mods/Projectile Effect")]
public class ProjectileMod : ItemAbstract {
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        GameObject effect = null;
        if (MouseManager.i.itemSelected != null) { effect = MouseManager.i.itemSelected.particles; } else {
            effect = InventoryManager.i.GetWeaponOrSkill(origin).particles;
        }
        if (effect == null) { return; }
        if (signal != Signal.Attack) { return; }
        var go = GridManager.i.InstantiateGameObject(effect);
        go.GetComponent<ProjectileEffect>().Fire(position, origin);
    }

    public override bool Condition(Vector3Int position, Vector3Int origin) {
        return false;
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
