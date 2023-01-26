using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Manager : MonoBehaviour {

    public static List<GameObject> party = new List<GameObject>();
    public void LoadFirstScene() {

        SceneManager.LoadScene("TestLevel 3", LoadSceneMode.Single);
    }
}