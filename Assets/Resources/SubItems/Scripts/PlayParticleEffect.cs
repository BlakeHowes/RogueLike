using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Particle Effect", menuName = "Mods/Particle Effect")]
public class PlayParticleEffect : ItemAbstract {
    public GameObject particles;
    public float delay;
    public bool targetSelf;
    public Vector3 offset;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        this.position = position;
        this.origin = origin;
        if (targetSelf) { this.position = origin; }
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        EffectManager.i.CreateSingleParticleEffect(position + offset, particles);
        yield return new WaitForSeconds(delay);
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}
