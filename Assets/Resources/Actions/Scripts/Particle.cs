using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Particle", menuName = "Actions/Particle")]
public class Particle : Action {
    [HideInInspector] public GameObject particle;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position,origin,parentGO,parentItem);
        particle = actionContainer.prefabValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (particle) {
            EffectManager.i.CreateSingleParticleEffect(position, particle);
        }
        yield return null;
    }
}
