using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class PathingManager : MonoBehaviour
{
    public static PathingManager i;
    private Grid2D grid;
    private Algorithm algorithm;
    public int maxPathLength;
    [Range(0,0.5f)]
    public float walkSpeed;
    [Range(0, 0.5f)]
    public float repeatSpeed;
    public void Awake() {
        i = this;
    }
    public void Start() {
        grid = new Grid2D(GridManager.i.width, GridManager.i.height);
        algorithm = new Algorithm(grid);
    }

    public void FlipCharacter(GameObject character,bool left) {
        var invertInt = 1;
        if(left == true) {
            invertInt = -1;
        }
        var mainHandOffset = InventoryManager.i.mainHandOffset;

        character.GetComponent<SpriteRenderer>().flipX = left;
        if (character.transform.childCount > 0) {
            var mainHandGameObject = character.transform.Find("MainHandSprite");
            if (mainHandGameObject != null) {
                mainHandOffset.x = mainHandOffset.x * invertInt;
                mainHandGameObject.localPosition = mainHandOffset;
                mainHandGameObject.GetComponent<SpriteRenderer>().flipX = left;
            }

            var offHandGameObject = character.transform.Find("OffHandSprite");
            if (offHandGameObject != null) {
                offHandGameObject.localPosition = new Vector3(-0.42f * invertInt, 0.35f, 0);
                offHandGameObject.GetComponent<SpriteRenderer>().flipX = left;
            }
        }
    }

    public void SwapPlaces(Vector3Int position, Vector3Int origin) {
        var targetGO = position.gameobjectGO();
        if(targetGO == PartyManager.i.currentCharacter) {
            return;
        }
        var originGO=origin.gameobjectGO();
        StartCoroutine(GridManager.i.graphics.LerpPosition(origin, position, walkSpeed, GridManager.i.goTilemap));
        StartCoroutine(GridManager.i.graphics.LerpPosition(position, origin, walkSpeed, GridManager.i.goTilemap));
        GridManager.i.goMethods.RemoveGameObject(origin);
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(origin, targetGO);
        GridManager.i.goMethods.SetGameObject(position, originGO);
    }

    public bool MoveOneStep(Vector3Int position, Vector3Int origin) {
        var character = origin.gameobjectSpawn();

        if (origin == GridManager.i.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position,false);
        if (path != null) {
            if (path.Length > maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            if (GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                StartCoroutine(GridManager.i.graphics.LerpPosition(origin, nextStep, walkSpeed, GridManager.i.goTilemap));
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);

                if(nextStep.x > origin.x) {
                    FlipCharacter(character, false);
                }
                else {
                    FlipCharacter(character, true);
                }

                return true;
            }
        }
        return false;
    }

    public bool MoveOneStepLeader(Vector3Int position, Vector3Int origin) {
        var character = origin.gameobjectSpawn();

        if (origin == GridManager.i.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position, true);
        if (path != null) {
            if (path.Length > maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            var target = GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep);
            if (target == null) {
                StartCoroutine(GridManager.i.graphics.LerpPosition(origin, nextStep, walkSpeed, GridManager.i.goTilemap));
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);

                if (nextStep.x > origin.x) {
                    FlipCharacter(character, false);
                }
                else {
                    FlipCharacter(character, true);
                }

                return true;
            }
            if (target.GetComponent<Stats>().faction == character.GetComponent<Stats>().faction) {
                SwapPlaces(nextStep, origin);
                if (nextStep.x > origin.x) {
                    FlipCharacter(character, false);
                }
                else {
                    FlipCharacter(character, true);
                }
                return true;
            }
        }
        return false;
    }

    public void Jump(Vector3Int position, Vector3Int origin,float speed) {
        if (position.gameobjectSpawn() == null) {

            var character = origin.gameobjectSpawn();
            if(character == null) {
                return;
            }
            if (character.GetComponent<Stats>().faction == PartyManager.Faction.Wall) { return; }
            StartCoroutine(GridManager.i.graphics.LerpPosition(origin, position, speed, GridManager.i.goTilemap));
            GridManager.i.goMethods.RemoveGameObject(origin);
            GridManager.i.goMethods.SetGameObject(position, character);

            if (position.x > origin.x) {
                FlipCharacter(character, false);
            }
            else {
                FlipCharacter(character, true);
            }
        }
    }

    public bool EnemyMoveup(Vector3Int position, Vector3Int origin) {
        var character = origin.gameobjectSpawn();
        if (origin == GridManager.i.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position, true);
        if (path != null) {
            if (path.Length > maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            if (GridManager.i.goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                StartCoroutine(GridManager.i.graphics.LerpPosition(origin, nextStep, walkSpeed, GridManager.i.goTilemap));
                GridManager.i.goMethods.RemoveGameObject(origin);
                GridManager.i.goMethods.SetGameObject(nextStep, character);

                if (nextStep.x > origin.x) {
                    FlipCharacter(character, false);
                }
                else {
                    FlipCharacter(character, true);
                }

                return true;
            }
        }
        return false;
    }
}
