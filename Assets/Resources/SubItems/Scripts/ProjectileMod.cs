using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Projectile", menuName = "Mods/Projectile Effect")]
public class ProjectileMod : ItemAbstract {
    public bool waitForProjectile = true;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        this.position = position;
        this.origin = origin;
        if (signal != Signal.Attack) { return; }
        GridManager.i.AddToStack(this);
        Debug.Log("Projectile Added To Stack" + position + origin);
    }
    public override IEnumerator Action() {
        if (!particles) { Debug.LogError("Particles missing from " + this);yield break; }
        var go = GridManager.i.InstantiateNonCharacterGameObject(particles);
        var life = go.GetComponent<ProjectileEffect>().Fire(position, origin);
        Debug.Log("ProjectileEffect position " + position + " origin " + origin);
        if (!waitForProjectile) { life = 0; }
        yield return new WaitForSeconds(life);
    }

    public override string Description() {
        return "";
    }
}
