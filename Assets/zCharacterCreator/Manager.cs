using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class Manager {
    public static List<GameObject> party = new List<GameObject>();
    private static GlobalValues globalValues;
    public static void LoadNextScene() {

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1, LoadSceneMode.Single);
    }

    public static void LoadCharacterCreator() {
        Debug.Log("Restart");
        SceneManager.LoadScene("CharacterCreator", LoadSceneMode.Single);
    }

    public static GlobalValues GetGlobalValues() {
        if (!globalValues) {globalValues = Resources.Load<GlobalValues>("GlobalValues"); }
        return globalValues;
    }
}