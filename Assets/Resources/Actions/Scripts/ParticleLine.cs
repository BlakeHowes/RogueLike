using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ParticleLine", menuName = "Actions/ParticleLine")]
public class ParticleLine : Action {
    [HideInInspector] public GameObject particles;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.origin = position;
        this.position = origin;
        particles = actionContainer.prefabValue;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        EffectManager.i.CreateLineEffect(origin, position, particles);
        yield return null;
    }
}
