using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "Projectile Effect", menuName = "Actions/Projectile Effect")]
public class Projectile : Action {
    public bool waitForProjectile = true;
    [HideInInspector] public GameObject particles;
    [HideInInspector] public Vector3 startPos;
    [HideInInspector] public Vector3 endPos;
    [HideInInspector] public Sprite sprite;
    public bool mainHandSprite;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        SaveValues(position, origin, parentGO, parentItem);
        particles = actionContainer.prefabValue;
        if (mainHandSprite) {
            var mainHand = parentGO.GetComponent<Inventory>().mainHand;
            if (!mainHand) { return false;}
            sprite = mainHand.tile.sprite;
        }
        if (mainHandSprite) { 
            EffectManager.i.ShootBasicProjectile(position, origin, sprite);
            return true;
        }
        GridManager.i.AddToStack(this);
        return true;
    }
    public override IEnumerator StackAction() {
        if (!particles) { Debug.LogError("Particles missing from " + this); yield break; }
        var go = GridManager.i.InstantiateNonCharacterGameObject(particles);
        var life = go.GetComponent<ProjectileEffect>().Fire(position, origin);
        //Debug.Log("ProjectileEffect position " + endPos + " origin " + startPos);
        if (!waitForProjectile) { life = 0; }
        yield return new WaitForSeconds(life);
    }
}
