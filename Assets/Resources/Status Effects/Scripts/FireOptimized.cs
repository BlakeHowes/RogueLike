using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
//[CreateAssetMenu(fileName = "FireOptimized", menuName = "FireOptimized")]
public class FireOptimized : Action {
    public GameObject particles;
    public Surface surface;
    [HideInInspector]public GameObject character;
    public List<Surface> extingusingSurfaces = new List<Surface>();
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        this.origin = origin;
        character = parentGO;
        this.parentItem = parentItem;
        this.AddToStack();
        return true;
    }

    public override IEnumerator StackAction() {
        var surfaceOnFloor = GridManager.i.GetOrSpawnSurface(position);
        if (surfaceOnFloor != null) {
            foreach(var extingusingSurface in extingusingSurfaces) {
                if (extingusingSurface.name+"(Clone)" == surfaceOnFloor.name) { 
                    character.GetComponent<Inventory>().RemoveStatusEffect(parentItem);
                    GridManager.i.CombineSurface(position, surface);
                    yield break;
                }
            }
        }
        if (character) { character.GetComponent<Stats>().TakeDamage(3, position,false,surface,WeaponType.none); }
        EffectManager.i.CreateSingleParticleEffect(position, particles);
        GridManager.i.CombineSurface(position, surface);
        yield return null;
    }
}

