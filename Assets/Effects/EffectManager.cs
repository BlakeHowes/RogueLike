using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager i;
    private Vector3 offset = new Vector3(0.5f, 0.5f, 0);
    public GameObject hitParticles;
    public ActionContainer throwAction;
    public void Awake() {
        i = this;
    }

    public void HitParticleEffect(Vector3Int position) {
        CreateSingleParticleEffect(position, hitParticles);
    }

    public void ShootBasicProjectile(Vector3Int position, Vector3Int origin,Sprite sprite) {
        throwAction.prefabValue.GetComponent<ParticleSystem>().textureSheetAnimation.SetSprite(0,sprite);
        throwAction.action.Condition(position, origin,null, null, null, throwAction);
    }

    public void CreateLineEffect(Vector3 position,Vector3 origin,GameObject linePrefab) {
        if (linePrefab == null) { return; }
        var clone =Instantiate(linePrefab);
        clone.GetComponent<LineEffect>().SetPositions(position+ offset, origin+ offset);
    }

    public void LineEffectBetweenGos(Vector3Int position, Vector3Int origin, GameObject linePrefab) {
        if (linePrefab == null) { return; }
        var clone = Instantiate(linePrefab);
        var lineEffect = clone.GetComponent<LineEffect>();
        lineEffect.LinkGos(position, origin);
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
        var clone = Instantiate(partPrefab);
        clone.transform.position = position + offset;
        var target = position.FloorToInt().GameObjectGo();
        if (target) { 
            clone.transform.SetParent(target.transform);
            clone.transform.localPosition = Vector3.zero;
        }
    }
}
