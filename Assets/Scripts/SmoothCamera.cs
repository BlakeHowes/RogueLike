using Lean.Touch;
using System.Collections;
using UnityEngine;

public class SmoothCamera : MonoBehaviour {
    [Range(0.001f, 1f)]
    public float SmoothSpeed;
    public float ZoomSensitivity;
    public float zoomSpeed;
    public float minZoom;
    public float maxZoom;
    private float size;
    private Camera mCamera;
    private Vector3 Origin;
    private Vector3 Diference;
    private bool Drag = false;
    bool following = true;
    public static SmoothCamera i;
    public bool useTargetPos = false;
    public Vector3 targetPosition;
    public LeanDragCamera leanDragCamera;
    public void Awake() {
        mCamera = Camera.main;
        size = mCamera.orthographicSize;
        i = this;
        leanDragCamera = GetComponent<LeanDragCamera>();
    }

    public void DisableFollow() {
        following = false;
    }
    
    void LateUpdate() {

        if (Input.GetMouseButton(2)) {
            following = false;
            Diference = (Camera.main.ScreenToWorldPoint(Input.mousePosition)) - Camera.main.transform.position;
            if (Drag == false) {
                Drag = true;
                Origin = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            }
        }
        else {
            Drag = false;
        }
        if (Drag == true) {
            Camera.main.transform.position = Origin - Diference;
        }
        size -= Input.GetAxis("Mouse ScrollWheel") * ZoomSensitivity;
        var sizeLerp = Mathf.Lerp(mCamera.orthographicSize, size, zoomSpeed);
        mCamera.orthographicSize = Mathf.Clamp(sizeLerp, minZoom, maxZoom);
    }

    public void ActionZoomIn(Vector3 position,float duration, float speed) {
        StartCoroutine(IActionZoomIn(position, duration, speed));
    }

    private IEnumerator IActionZoomIn(Vector3 position, float duration,float speed) {
        targetPosition = position;
        useTargetPos = true;
        var sizeTemp = size;
        var smoothspeedTemp = SmoothSpeed;
        SmoothSpeed = speed;
        size = 5;
        yield return new WaitForSeconds(duration);
        useTargetPos = false;
        size = sizeTemp;
        SmoothSpeed = smoothspeedTemp;
        resetFollow();
    }

    public void resetFollow() {
        following = true;
    }

    public void Update() {
        if (Input.GetKeyDown(KeyCode.O)) {
            ActionZoomIn(new Vector3(30, 30, 0), 2,SmoothSpeed);
        }

        if (leanDragCamera.worldDelta != Vector3.zero) {
            DisableFollow();
        }
    }
    Vector3 offset = new Vector3(0.5f, 0.5f);
    void FixedUpdate() {


        if (Input.GetMouseButton(1)) { resetFollow(); }
        if (!Input.GetMouseButton(2)) {

            if (!following) { return; }
            var currentCharacter = PartyManager.i.currentCharacter; //Change this eventually
            if (currentCharacter == null) {
                return;
            }
            if (!useTargetPos) { targetPosition = currentCharacter.transform.position.FloorToInt() + offset; }
            Vector3 position = Vector3.Lerp(transform.position, targetPosition, SmoothSpeed);
            position.z = -10;
            transform.position = position;
        }
    }
}
