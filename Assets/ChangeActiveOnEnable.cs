using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeActiveOnEnable : MonoBehaviour
{
    public bool active;

    public void OnEnable() {
        gameObject.SetActive(active);
    }
}
