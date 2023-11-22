using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
//[CreateAssetMenu(fileName = "FireOptimized", menuName = "FireOptimized")]
public class FireOptimized : Action {
    public GameObject particles;
    public Surface surface;
    [HideInInspector]public GameObject character;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        character = parentGO;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        if (character) { character.GetComponent<Stats>().TakeDamage(3, position,false,surface,WeaponType.none); }
        EffectManager.i.CreateSingleParticleEffect(position, particles);
        GridManager.i.CombineSurface(position, surface);
        yield return null;
    }
}

