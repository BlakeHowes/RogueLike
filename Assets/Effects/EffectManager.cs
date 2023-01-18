using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager i;
    private Vector3 offset = new Vector3(0.5f, 0.5f, 0);
    public Vector3 weaponOriginOffset;
    public void Awake() {
        i = this;
    }

    public void LineEffect(Vector3 position,Vector3 origin,GameObject linePrefab) {
        var clone =Instantiate(linePrefab);
        clone.GetComponent<LineEffect>().SetLine(position+ offset, origin+ offset+ weaponOriginOffset);
    }

    public void PartEffect(Vector3 position, Vector3 origin, GameObject partPrefab) {
        if(partPrefab == null) {
            return;
        }
        var clone = Instantiate(partPrefab);
        clone.transform.position = position+ offset;
    }
}
