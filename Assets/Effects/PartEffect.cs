using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PartEffect : MonoBehaviour
{
    public float timeUntilDestruction;

    public void OnEnable() {
        StartCoroutine(Animate());
    }
    public IEnumerator Animate() {
        yield return new WaitForSeconds(timeUntilDestruction);
        Destroy(this.gameObject);
    }
}
