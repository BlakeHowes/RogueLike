using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Particle Effect", menuName = "SubItems/Particle Effect")]
public class PlayParticleEffect : ItemAbstract {
    public GameObject particles;
    public int range = 0;
    public float delay;
    public bool targetSelf;
    public Vector3 offset;
    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
        if (targetSelf) { this.position = origin; }
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        if(range == 0)EffectManager.i.CreateSingleParticleEffect(position + offset, particles);
        if (range > 0) { EffectManager.i.CreateAreaParticleEffect(position + offset, particles,range); }
        yield return new WaitForSeconds(delay);
    }

    public override string Description() {
        return "";
    }
}
