using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager i;
    private Vector3 offset = new Vector3(0.5f, 0.5f, 0);
    public Vector3 weaponOriginOffset;
    public GameObject hitParticles;
    //public ProjectileMod projectileItem;
    public void Awake() {
        i = this;
    }

    public void HitParticleEffect(Vector3Int position) {
        CreateSingleParticleEffect(position, hitParticles);
    }

    public void ShootBasicProjectile(Vector3 position,Vector3 origin,Sprite sprite,bool insert) {
        /*
        var particles = projectileItem.particles.GetComponent<ParticleSystem>();
        particles.textureSheetAnimation.SetSprite(0, sprite);
        projectileItem.endPos = position;
        projectileItem.startPos = origin;

        if (insert) { GridManager.i.InsertToStack(projectileItem); return; }
        GridManager.i.AddToStack(projectileItem);
        */
    }

    public void CreateLineEffect(Vector3 position,Vector3 origin,GameObject linePrefab) {
        if (linePrefab == null) { return; }
        var clone =Instantiate(linePrefab);
        clone.GetComponent<LineEffect>().SetLine(position+ offset, origin+ offset+ weaponOriginOffset);
    }

    public GameObject CreateSingleParticleEffect(Vector3 position, GameObject partPrefab) {
        if(partPrefab == null) { return null;}
        var clone = Instantiate(partPrefab);
        clone.transform.position = position+ offset;
        return clone;
    }

    public void CreateAreaParticleEffect(Vector3 position, GameObject partPrefab,int range) {
        if (partPrefab == null) { return; }
        var positions = GridManager.i.goMethods.PositionsInSight(range, position.FloorToInt());
        foreach (var pos in positions) {
            var clone = Instantiate(partPrefab);
            clone.transform.position = pos + offset;
        }
    }

    public void AttachSingleToGO(Vector3 position, GameObject partPrefab) {
        if (partPrefab == null) { return; }
        Debug.Log("attach particles");
        var clone = Instantiate(partPrefab);
        clone.transform.position = position + offset;
        var target = position.FloorToInt().GameObjectGo();
        if (target) { 
            clone.transform.SetParent(target.transform);
            clone.transform.localPosition = Vector3.zero;
        }
    }
}
