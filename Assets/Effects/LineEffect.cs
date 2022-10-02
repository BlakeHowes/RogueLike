using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineEffect : MonoBehaviour
{
    private LineRenderer lineRenderer;
    public float speed;
    public void SetLine(Vector3 position, Vector3 origin) {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.SetPosition(0, origin);
        lineRenderer.SetPosition(1, position);
        StartCoroutine(Animate());
    }

    IEnumerator Animate() {
        yield return new WaitForSeconds(speed);
        Destroy(gameObject);
    }
}
