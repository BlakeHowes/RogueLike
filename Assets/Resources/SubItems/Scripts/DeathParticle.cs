using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Death Particle", menuName = "Mods/Death Particle")]
public class DeathParticle : ItemAbstract {
    public float delay;
    public bool targetSelf;
    public Vector3 offset;
    public Material material;
    public Sprite sprite;
    public float scaleFactor;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        this.position = position;
        this.origin = origin;
        if (targetSelf) { this.position = origin; }
        sprite =origin.gameobjectGO().GetComponent<SpriteRenderer>().sprite;
        GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        var materialClone = Instantiate(material);
        materialClone.mainTexture = sprite.texture;
        var size = (sprite.texture.width + sprite.texture.height) /10;

        particles.GetComponent<ParticleSystemRenderer>().material = materialClone;
        EffectManager.i.CreateSingleParticleEffectScaled(position + offset, particles,size*scaleFactor);
        yield return new WaitForSeconds(delay);
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}

