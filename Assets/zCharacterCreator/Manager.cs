using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class Manager {
    public static List<GameObject> party = new List<GameObject>();

    public static void LoadNextScene() {

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1, LoadSceneMode.Single);
    }

    public static void LoadCharacterCreator() {

        SceneManager.LoadScene("CharacterCreator", LoadSceneMode.Single);
    }
}