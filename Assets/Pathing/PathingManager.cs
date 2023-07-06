using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathingManager : MonoBehaviour
{
    public static PathingManager i;
    private Grid2D grid;
    private Algorithm algorithm;
    public GlobalValues globalValues;
    public void Awake() {
        i = this;
    }
    public void Start() {
        grid = new Grid2D(globalValues.width, globalValues.height);
        algorithm = new Algorithm(grid);

    }

    public void FlipCharacter(GameObject character,Vector3Int position,Vector3Int origin) {
        if(position.x > origin.x) { character.GetComponent<SpriteRenderer>().flipX = false; return; }
        character.GetComponent<SpriteRenderer>().flipX = true;
    }

    public void SwapPlaces(Vector3Int position, Vector3Int origin) {
        var targetGO = position.GameObjectGo();
        if(targetGO == PartyManager.i.currentCharacter) {
            return;
        }
        var originGO=origin.GameObjectGo();
        StartCoroutine(GridManager.i.graphics.LerpPosition(origin, position, originGO, globalValues.walkSpeed));
        StartCoroutine(GridManager.i.graphics.LerpPosition(position, origin, targetGO, globalValues.walkSpeed));
        FlipCharacter(originGO, position, origin);
        GridManager.i.goMethods.RemoveGameObject(origin);
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(origin, targetGO);
        GridManager.i.goMethods.SetGameObject(position, originGO);
    }

    public void SwapPlacesInstant(Vector3Int position, Vector3Int origin) {
        var targetGO = position.GameObjectGo();
        if (targetGO == PartyManager.i.currentCharacter) {
            return;
        }
        var originGO = origin.GameObjectGo();
        var positionGO = position.GameObjectGo();
        originGO.transform.position = position + new Vector3(0.5f, 0.5f);
        positionGO.transform.position = origin + new Vector3(0.5f, 0.5f);
        FlipCharacter(originGO, position, origin);
        GridManager.i.goMethods.RemoveGameObject(origin);
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(origin, targetGO);
        GridManager.i.goMethods.SetGameObject(position, originGO);
    }

    public void SwapPlacesSpring(Vector3Int position, Vector3Int origin) {
        var targetGO = position.GameObjectGo();
        if (targetGO == PartyManager.i.currentCharacter) {
            return;
        }
        var originGO = origin.GameObjectGo();
        var positionGO = position.GameObjectGo();
        FlipCharacter(originGO, position, origin);
        FlipCharacter(positionGO, origin, position);
        originGO.GetComponent<SpringToTarget3D>().SpringTo(position, globalValues.Dampening, globalValues.Hardness);
        positionGO.GetComponent<SpringToTarget3D>().SpringTo(origin, globalValues.Dampening, globalValues.Hardness);
        GridManager.i.goMethods.RemoveGameObject(origin);
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(origin, targetGO);
        GridManager.i.goMethods.SetGameObject(position, originGO);
    }

    public bool MoveOneStep(Vector3Int position, Vector3Int origin) {
        var character = origin.GameObjectSpawn();

        if (origin == globalValues.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found. Dude probably died lol");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position,false);
        if (path != null) {
            if (path.Length > globalValues.maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            if (GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                character.GetComponent<SpringToTarget3D>().SpringTo(nextStep, globalValues.Dampening, globalValues.Hardness);
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);
                FlipCharacter(character,nextStep, origin);
                return true;
            }
        }
        return false;
    }

    public bool MoveOneStepLeader(Vector3Int position, Vector3Int origin) {
        var character = origin.GameObjectSpawn();
        if (character == null) { return true; }
        if (origin == globalValues.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position, true);
        if (path != null) {
            if (path.Length > globalValues.maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            var target = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep);
            if (target == null) {
                character.GetComponent<SpringToTarget3D>().SpringTo(nextStep, globalValues.Dampening, globalValues.Hardness);
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);
                FlipCharacter(character, nextStep, origin);
                return true;
            }
            if (target.GetComponent<Stats>().faction == character.GetComponent<Stats>().faction) {
                SwapPlaces(nextStep, origin);
                FlipCharacter(character, nextStep, origin);
                return true;
            }
        }
        return false;
    }

    public void Jump(Vector3Int endPosition, Vector3Int startPosition,float speed) {
        if (endPosition.GameObjectSpawn() == null) {
            var character = startPosition.GameObjectSpawn();
            if(character == null) {
                return;
            }
            StartCoroutine(GridManager.i.graphics.LerpPosition(startPosition, endPosition, character, speed));
            GridManager.i.goMethods.RemoveGameObject(startPosition);
            GridManager.i.goMethods.SetGameObject(endPosition, character);
            FlipCharacter(character, endPosition, startPosition);
        }
    }

    public bool IsPathable(Vector3Int position, Vector3Int origin) {
        var path = algorithm.AStarSearch(origin, position, false);
        if (path != null) {
            return true;
        }
        return false;
    }

    public bool IsPathableIgnoringGameobjects(Vector3Int position, Vector3Int origin) {
        var path = algorithm.AStarSearch(origin, position, true);
        if (path != null) {
            return true;
        }
        return false;
    }

    public int PathDistance(Vector3Int position, Vector3Int origin) {
        var path = algorithm.AStarSearch(origin, position, true);
        if (path != null) { return path.Length; }
        return 10;
    }

    public bool EnemyMoveup(Vector3Int position, Vector3Int origin) {
        var character = origin.GameObjectSpawn();
        if (origin == globalValues.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position, true);
        if (path != null) {
            if (path.Length > globalValues.maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            if (GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                StartCoroutine(GridManager.i.graphics.LerpPosition(origin, nextStep, character, globalValues.walkSpeed));
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);
                FlipCharacter(character, nextStep, origin);
                return true;
            }
        }
        return false;
    }
}
