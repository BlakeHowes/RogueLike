using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager i;

    public void Awake() {
        i = this;
    }

    public void LineEffect(Vector3 position,Vector3 origin,GameObject linePrefab) {
        var clone =Instantiate(linePrefab);
        clone.GetComponent<LineEffect>().SetLine(position, origin);
    }
}
