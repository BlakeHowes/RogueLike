using LlamAcademy.Spring.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using static ItemStatic;

public static class Manager {
    public static List<GameObject> party = new List<GameObject>();
    private static GlobalValues globalValues;
    public static System.Action<Vector3Int, Vector3Int, CallType> OnTakeDamageEvent;
    public static System.Action<Vector3Int, Vector3Int, CallType> OnDeathEvent;
    public static System.Action<Vector3Int, Vector3Int, CallType> OnMoveEvent;
    public static System.Action<Vector3Int, Vector3Int, CallType> OnAttackEvent;
    public static System.Action<GameObject, GameObject> OnSwitchCharacter;
    public static Action<bool> EndOfStackEvent;
    public static GameObject currentCharacter;
    public static int coins = 0;

    public static void OnEndOfStackCall() {
        EndOfStackEvent?.Invoke(true);
    }

    public static void OnSwitchCharacterCall(GameObject currentCharacter, GameObject previousCharacter) {
        OnSwitchCharacter?.Invoke(currentCharacter, previousCharacter);
    }

    public static void OnTakeDamageCall(Vector3Int position, Vector3Int origin) {
        OnTakeDamageEvent?.Invoke(position, origin, CallType.OnTakeDamageGlobal);
    }

    public static void OnDeathEventCall(Vector3Int position, Vector3Int origin) {
        OnDeathEvent?.Invoke(position, origin, CallType.OnDeathGlobal);
    }

    public static void OnMoveEventCall(Vector3Int position, Vector3Int origin) {
        OnMoveEvent?.Invoke(position, origin, CallType.OnMoveGlobal);
    }

    public static void OnAttackCall(Vector3Int position, Vector3Int origin) {
        OnAttackEvent?.Invoke(position, origin, CallType.OnAttackGlobal);
    }

    public static void LoadNextScene() {
        if (PartyManager.i) {
            currentCharacter = PartyManager.i.currentCharacter;
            foreach (var character in PartyManager.i.party) {
                var spring = character.GetComponent<SpringToTarget3D>();
                spring.disableSpring = true;
            }
        }

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1, LoadSceneMode.Single);
        Camera.main.TryGetComponent(out SmoothCamera smoothCamera);
        if (smoothCamera) { smoothCamera.resetFollow();}
    }

    public static bool FinalFloor() {
        if(SceneManager.GetActiveScene().buildIndex >= SceneManager.sceneCountInBuildSettings - 1) {
            GameUIManager.i.ShowGameOverUI();
            return true; 
        }
        return false;
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