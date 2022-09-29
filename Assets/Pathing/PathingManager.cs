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
    public float walkSpeed;
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
        character.GetComponent<SpriteRenderer>().flipX = left;
        if (character.transform.childCount > 0) {
            var mainHandGameObject = character.transform.Find("MainHandSprite");
            if (mainHandGameObject != null) {
                mainHandGameObject.localPosition = new Vector3(0.6f * invertInt, 0.74f, 0);
                mainHandGameObject.GetComponent<SpriteRenderer>().flipX = left;
            }

            var offHandGameObject = character.transform.Find("OffHandSprite");
            if (offHandGameObject != null) {
                offHandGameObject.localPosition = new Vector3(-0.42f * invertInt, 0.35f, 0);
                offHandGameObject.GetComponent<SpriteRenderer>().flipX = left;
            }
        }
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
}
