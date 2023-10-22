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
    public static Action<bool> EndOfStackEvent;

    public static void OnEndOfStackCall() {
        EndOfStackEvent?.Invoke(true);
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