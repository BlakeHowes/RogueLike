using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Projectile", menuName = "Mods/Projectile Effect")]
public class ProjectileMod : ItemAbstract {
    public GameObject effect;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
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
