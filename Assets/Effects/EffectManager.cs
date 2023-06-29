using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager i;
    private Vector3 offset = new Vector3(0.5f, 0.5f, 0);
    public Vector3 weaponOriginOffset;
    public GameObject hitParticles;
    public void Awake() {
        i = this;
    }

    public void HitParticleEffect(Vector3Int position) {
        CreateSingleParticleEffect(position, hitParticles);
    }

    public void CreateLineEffect(Vector3 position,Vector3 origin,GameObject linePrefab) {
        if (linePrefab == null) { return; }
        var clone =Instantiate(linePrefab);
        clone.GetComponent<LineEffect>().SetLine(position+ offset, origin+ offset+ weaponOriginOffset);
    }

    public void CreateSingleParticleEffect(Vector3 position, GameObject partPrefab) {
        if(partPrefab == null) { return;}
        var clone = Instantiate(partPrefab);
        clone.transform.position = position+ offset;
    }

    public void CreateSingleParticleEffectScaled(Vector3 position, GameObject partPrefab,float scale) {
        if (partPrefab == null) { return; }
        var clone = Instantiate(partPrefab);
        clone.transform.position = position + offset;
        clone.transform.localScale = new Vector3(scale, scale, 1);
    }

    public void AttachSingleToGO(Vector3 position, GameObject partPrefab) {
        if (partPrefab == null) { return; }
        Debug.Log("attach particles");
        var clone = Instantiate(partPrefab);
        clone.transform.position = position + offset;
        var target = position.FloorToInt().gameobjectGO();
        if (target) { 
            clone.transform.SetParent(target.transform);
            clone.transform.localPosition = Vector3.zero;
        }
    }
}
