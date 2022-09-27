using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathingManager : MonoBehaviour
{
    public static PathingManager i;
    private Grid2D grid;
    private Algorithm algorithm;
    public int maxPathLength;
    public float walkSpeed;
    public void Awake() {
        i = this;
    }
    public void Start() {
        grid = new Grid2D(GridManager.i.width, GridManager.i.height);
        algorithm = new Algorithm(grid);
    }

    public bool MoveOneStep(Vector3Int position, Vector3Int origin) {
        var character = origin.gameobjectSpawn();
        if(origin == GridManager.i.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position);
        if (path != null) {
            if (path.Length > maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            if(GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                StartCoroutine(GridManager.i.graphics.LerpPosition(origin, nextStep, walkSpeed, GridManager.i.goTilemap));
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);
                return true;
            }
        }
        return false;
    }
}
