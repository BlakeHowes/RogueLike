using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.UI.Image;

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
    public void Awake() {
        mCamera = Camera.main;
        size = mCamera.orthographicSize;
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

    public void resetFollow() {
        following = true;
    }
    void FixedUpdate() {
        if (Input.GetMouseButton(1)) { resetFollow(); }
        if (!Input.GetMouseButton(2)) {
            if (!following) { return; }
            var currentCharacter = PartyManager.i.currentCharacter; //Change this eventually
            if (currentCharacter == null) {
                return;
            }

            Vector3 position = Vector3.Lerp(transform.position, currentCharacter.transform.position, SmoothSpeed);
            position.z = -10;
            transform.position = position;
            
        }


   
    }
}
