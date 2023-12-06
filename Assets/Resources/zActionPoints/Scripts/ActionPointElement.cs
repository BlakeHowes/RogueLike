using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
[CreateAssetMenu(fileName = "ActionPointElement", menuName = "Items/ActionPointElement")]
public class ActionPointElement : ItemAbstract {
    public Surface surface;
    public GameObject splashParticles;
    public GameObject projectileParticles;
    public GiveSurface giveSurface;
    public Particle particle;
    public override void Call(Vector3Int position, Vector3Int origin, GameObject parentGO, CallType callType) {
        bool placedSurface = false;
        bool playedSplash = false;
        foreach (var item in GridManager.i.itemsInActionStack) {
            if (item is GiveSurface) {
                var giveSurface = item as GiveSurface;
                giveSurface.surface = surface;
                placedSurface = true;
            }
            if (item is Projectile) {
                var projectile = item as Projectile;
                projectile.particles = projectileParticles;
            }
            if (item is Particle) {
                var particle = item as Particle;
                particle.particle = splashParticles;
                playedSplash = true;
            }
        }

        if (placedSurface == false) {
            giveSurface.surface = surface;
            giveSurface.ConditionWithoutAC(position);
        }

        if (playedSplash == false) {
            particle.particle = splashParticles;
            particle.ConditionWithoutAC(position);
        }
        foreach (var ability in abilities) {
            if (ability.callType == callType) {
                ability.Call(position, origin, parentGO, this);
            }
        }
    }

}
