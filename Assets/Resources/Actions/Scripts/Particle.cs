using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ParticleEffect", menuName = "Actions/ParticleEffect")]
public class Particle : Action {
    [HideInInspector] public GameObject particle;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.origin = position;
        particle = actionContainer.prefabValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (particle) {
            EffectManager.i.CreateSingleParticleEffect(origin, particle);
        }
        yield return null;
    }
}
