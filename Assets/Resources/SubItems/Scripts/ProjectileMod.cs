using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Projectile", menuName = "SubItems/Projectile Effect")]
public class ProjectileMod : ItemAbstract {
    public bool waitForProjectile = true;
    public GameObject particles;
    [HideInInspector] public Vector3 startPos;
    [HideInInspector] public Vector3 endPos;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        endPos = position;
        startPos = origin;
        if (signal != Signal.Attack) { return; }
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        if (!particles) { Debug.LogError("Particles missing from " + this);yield break; }
        var go = GridManager.i.InstantiateNonCharacterGameObject(particles);
        var life = go.GetComponent<ProjectileEffect>().Fire(endPos, startPos);
        Debug.Log("ProjectileEffect position " + endPos + " origin " + startPos);
        if (!waitForProjectile) { life = 0; }
        yield return new WaitForSeconds(life);
    }

    public override string Description() {
        return "";
    }
}
