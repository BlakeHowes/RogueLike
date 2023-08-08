using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Death Particle", menuName = "SubItems/Death Particle")]
public class DeathParticle : ItemAbstract {
    public GameObject particles;
    public float delay;
    public bool targetSelf;
    public Vector3 offset;
    public Material material;
    public Sprite sprite;
    public float scaleFactor;

    public override void Call(Vector3Int position,Vector3Int origin, ItemStatic.Signal signal,GameObject parentGO,ItemAbstract parentItem) {
        this.position = position;
        this.origin = origin;
        if (targetSelf) { this.position = origin; }
        var go = origin.GameObjectGo();
        if (go) {
            go.TryGetComponent(out SpriteRenderer rend);
            sprite = rend.sprite;
        }
        if (!sprite) { return; }
        particles.GetComponent<ParticleSystem>().textureSheetAnimation.SetSprite(0, sprite);
        var clone = EffectManager.i.CreateSingleParticleEffect(position + offset, particles);

        //GridManager.i.AddToStack(this);
    }
    public override IEnumerator Action() {
        if (!sprite) { yield break; }
        particles.GetComponent<ParticleSystem>().textureSheetAnimation.SetSprite(0, sprite);
        var clone = EffectManager.i.CreateSingleParticleEffect(position + offset, particles);

        yield return new WaitForSeconds(delay);
    }

    public override string Description() {
        throw new System.NotImplementedException();
    }
}

