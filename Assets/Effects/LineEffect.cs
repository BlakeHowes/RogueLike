using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineEffect : MonoBehaviour
{
    private LineRenderer lineRenderer;
    public float timeUntilDestroy;
    bool destroyAfterSeconds = false;

    public GameObject go;
    public GameObject go2;
    bool linkingGos = false;
    public void SetPositions(Vector3 position, Vector3 origin) {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.SetPosition(0, origin);
        lineRenderer.SetPosition(1, position);
        if(destroyAfterSeconds) StartCoroutine(Animate());
    }


    public void LinkGos(Vector3Int position, Vector3Int origin) {
        go = position.GameObjectGo();
        go2 = origin.GameObjectGo();
        if(!go || !go2) { return; }
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.SetPosition(0, go.transform.position);
        lineRenderer.SetPosition(1, go2.transform.position);
        linkingGos = true;
    }

    IEnumerator Animate() {
        yield return new WaitForSeconds(timeUntilDestroy);
        Destroy(gameObject);
    }

    public void Update() {
        if (linkingGos) {
            if (!go || !go2) { Destroy(gameObject);return; }
            lineRenderer.SetPosition(0, go.transform.position);
            lineRenderer.SetPosition(1, go2.transform.position);
        }
    }
}
