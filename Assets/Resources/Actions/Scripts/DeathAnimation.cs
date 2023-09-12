using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.ParticleSystem;

[CreateAssetMenu(fileName = "DeathAnimation", menuName = "Actions/DeathAnimation")]
public class DeathAnimation : Action {
    [HideInInspector]public GameObject particles;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        if (parentGO) {
            this.origin = position;
            particles = actionContainer.prefabValue;
            var sprite = parentGO.GetComponent<SpriteRenderer>().sprite;
            particles.GetComponent<ParticleSystem>().textureSheetAnimation.SetSprite(0, sprite);
            this.AddToStack();
        }
        return true;
    }

    public override IEnumerator StackAction() {
        EffectManager.i.CreateSingleParticleEffect(origin, particles);
        yield return null;
    }
}
