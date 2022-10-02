using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmoothCamera : MonoBehaviour
{
    [Range(0.001f,1f)]
    public float SmoothSpeed;
    public float ZoomSensitivity;
    public float zoomSpeed;
    public float minZoom;
    public float maxZoom;
    private float size;
    private Camera mCamera;

    public void Awake() {
        mCamera = Camera.main;
        size = mCamera.orthographicSize;
    }
    void FixedUpdate() {
        var currentCharacter = PartyManager.i.currentCharacter; //Change this eventually
        if(currentCharacter == null) {
            return;
        }
        Vector3 position = Vector3.Lerp(transform.position, currentCharacter.transform.position, SmoothSpeed);
        position.z = -10;
        transform.position = position;
        size -= Input.GetAxis("Mouse ScrollWheel") * ZoomSensitivity;
        var sizeLerp = Mathf.Lerp(mCamera.orthographicSize, size, zoomSpeed);
        mCamera.orthographicSize = Mathf.Clamp(sizeLerp, minZoom, maxZoom);
    }
}
