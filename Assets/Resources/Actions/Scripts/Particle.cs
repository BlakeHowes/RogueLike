using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ParticleEffect", menuName = "Actions/ParticleEffect")]
public class Particle : Action {
    [HideInInspector] public GameObject particle;
    public bool attach;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        particle = actionContainer.prefabValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (particle) {
            if (attach) { EffectManager.i.AttachSingleToGO(position, particle); } else {
                EffectManager.i.CreateSingleParticleEffect(position, particle);
            }

        }
        yield return null;
    }
}
