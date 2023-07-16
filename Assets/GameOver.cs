using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOver : MonoBehaviour
{
    public void Restart() {
        var go = new GameObject("Sacrificial Lamb");
        DontDestroyOnLoad(go);
        foreach (var root in go.scene.GetRootGameObjects())
            Destroy(root);
        Debug.Log("GameoverCall");
        Manager.LoadCharacterCreator();
    }
}
