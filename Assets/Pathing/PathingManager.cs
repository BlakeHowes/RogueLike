using FunkyCode;
using LlamAcademy.Spring.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class PathingManager : MonoBehaviour
{
    public static PathingManager i;
    private Grid2D grid;
    private Algorithm algorithm;
    private GlobalValues globalValues;

    public void Awake() {
        globalValues = Manager.GetGlobalValues();
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
        if (CheckMoveImmunity(targetGO)) { return; }
        if (targetGO == PartyManager.i.currentCharacter) { return; }
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
        if(position == origin) { return; }
        if (CheckMoveImmunity(targetGO)) { return; }
        var originGO = origin.GameObjectGo();
        var positionGO = position.GameObjectGo();
        if (originGO == null || positionGO == null) { return; }

        FlipCharacter(originGO, position, origin);
        GridManager.i.goMethods.RemoveGameObject(origin);
        GridManager.i.goMethods.RemoveGameObject(position);
        GridManager.i.goMethods.SetGameObject(origin, targetGO);
        GridManager.i.goMethods.SetGameObject(position, originGO);
        originGO.GetComponent<SpringToTarget3D>().StopAllCoroutines();
        positionGO.GetComponent<SpringToTarget3D>().StopAllCoroutines();
        originGO.transform.position = position + new Vector3(0.5f, 0.5f);
        positionGO.transform.position = origin + new Vector3(0.5f, 0.5f);
        originGO.GetComponent<SpringToTarget3D>().spring.Reset();
        positionGO.GetComponent<SpringToTarget3D>().spring.Reset();
    }

    public void SwapPlacesSpring(Vector3Int position, Vector3Int origin) {
        var targetGO = position.GameObjectGo();
        if (targetGO == PartyManager.i.currentCharacter) {
            return;
        }
        if (CheckMoveImmunity(targetGO)) { return; }
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
            var goMethods = GridManager.i.goMethods;
            if (goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                StartCoroutine(WalkAnimation(character, nextStep));
                MovePosition(nextStep, origin, character);
                return true;
            }
        }
        return false;
    }

    public bool MoveOneStepFly(Vector3Int position, Vector3Int origin) {
        var character = origin.GameObjectSpawn();

        if (origin == globalValues.NullValue) {
            Debug.LogError("MoveOneStep returned, origin not found. Dude probably died lol");
            return false;
        }
        var path = algorithm.AStarSearch(origin, position, false);
        if (path != null) {
            if (path.Length > globalValues.maxPathLength) {
                return false;
            }
            var nextStep = path[1].FloorToInt();
            var goMethods = GridManager.i.goMethods;
            if (goMethods.GetGameObjectOrSpawnFromTile(nextStep) == null) {
                StartCoroutine(GridManager.i.graphics.LerpPosition(origin, nextStep, character, 0.01f));
                MovePosition(nextStep, origin, character);
                return true;
            }
        }
        return false;
    }

    public IEnumerator WalkAnimation(GameObject character,Vector3 position) {
        var spring = character.GetComponent<SpringToTarget3D>();
        spring.SpringTo(position + new Vector3(0, globalValues.stepAnimationHeight/10), globalValues.stepDampening, globalValues.stepHardness);
        yield return new WaitForSeconds(globalValues.stepAnimationSpeed / 10);
        if (!character) { yield break; }    
        spring.SpringTo(position, globalValues.Dampening, globalValues.Hardness);
    }

    public bool MoveOneStepLeader(Vector3Int position, Vector3Int origin,GameObject character) {
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
                StartCoroutine(WalkAnimation(character, nextStep));
                MovePosition(nextStep, origin, character);
                return true;
            }
            if (target.tag == character.tag) {
                SwapPlaces(nextStep, origin);
                FlipCharacter(character, nextStep, origin);
                return true;
            }
        }
        return false;
    }

    public bool CheckMoveImmunity(GameObject go) {
        if (!go) { return false; }
        go.TryGetComponent<ElementalStats>(out ElementalStats elementalStats);
        if (elementalStats) {
            if (elementalStats.pushImmunity) {
                return true;
            }
        }
        return false;
    }

    public float Jump(Vector3Int endPosition, Vector3Int startPosition,float speed) {

        if (endPosition == startPosition) { return 0; }
        if (endPosition.InMeleeRange(startPosition)) {
            if (endPosition.GameObjectGo()) { return 0; }
        }
        else {
            endPosition = GridManager.i.goMethods.ClosestFreeCellToPosition(endPosition, startPosition);
        }

        var character = startPosition.GameObjectSpawn();
        if (character == null) { return 0; }
        if (CheckMoveImmunity(character)) { return 0; }
        StartCoroutine(JumpAnimation (character.GetComponent<SpringToTarget3D>(),startPosition,endPosition));
        MovePosition(endPosition, startPosition, character);
        var travelTime = Vector3.Distance(startPosition, endPosition) /14f;
        return travelTime;
    }

    public IEnumerator JumpAnimation(SpringToTarget3D spring, Vector3 startPosition,Vector3 endPosition) {
        var midWay = endPosition + (startPosition - endPosition) / 2;
        midWay = new Vector3(midWay.x, midWay.y + 0.8f);
        spring.SpringTo(midWay, 25.5f, 300.1f);
        yield return new WaitForSeconds(Vector3.Distance(endPosition,startPosition)* 0.04f);
        spring.SpringTo(endPosition, 35.6f, 309f);
    }

    public float Slide(Vector3Int endPosition, Vector3Int startPosition, float speed) {
        endPosition = GridManager.i.goMethods.PositionBeforeHittingGameObjectOrUnwalkableCell(endPosition, startPosition);
        if (endPosition == startPosition) { return 0; }
        var character = startPosition.GameObjectSpawn();
        if (character == null) { return 0; }
        if (CheckMoveImmunity(character)) { return 0; }
        character.GetComponent<SpringToTarget3D>().SpringTo(endPosition, 40, speed * 100);
        MovePosition(endPosition, startPosition, character);
        var travelTime = Vector3.Distance(startPosition, endPosition) / 14f;
        return travelTime;
    }

    public float Fly(Vector3Int endPosition, Vector3Int startPosition, float speed) {
        Debug.Log(endPosition);
        endPosition = GridManager.i.goMethods.ClosestFreeCellToPosition(endPosition, startPosition);
        if (endPosition == startPosition) {
            Debug.Log("kfnjsd");
            return 0; 
        }
        var character = startPosition.GameObjectSpawn();
        if (character == null) { return 0; }
        if (CheckMoveImmunity(character)) { return 0; }
        character.GetComponent<SpringToTarget3D>().SpringTo(endPosition, 40, speed * 100);
        MovePosition(endPosition, startPosition, character);
        var travelTime = Vector3.Distance(startPosition, endPosition) / 14f;
        return travelTime;
    }

    public void MovePosition(Vector3Int endPosition, Vector3Int startPosition, GameObject character) {
        GridManager.i.goMethods.RemoveGameObject(startPosition);
        GridManager.i.goMethods.SetGameObject(endPosition, character);
        FlipCharacter(character, endPosition, startPosition);
        Manager.OnMoveEventCall(endPosition,startPosition);
    }

    public void Roll(Vector3Int endPosition, Vector3Int startPosition, float speed) {
        if (endPosition.GameObjectSpawn() == null) {
            var character = startPosition.GameObjectSpawn();
            if (character == null) { return; }
            if (CheckMoveImmunity(character)) { return; }
            character.GetComponent<SpringToTarget3D>().StopAllCoroutines();
            character.TryGetComponent<LightCollider2D>(out LightCollider2D lightCollider);
            if (lightCollider) {lightCollider.enabled = false; }
            StartCoroutine(GridManager.i.graphics.RollToPosition(startPosition, endPosition, character, speed,lightCollider));
            MovePosition(endPosition, startPosition, character);
            character.GetComponent<SpringToTarget3D>().spring.Reset();
        }
    }

    public Vector3Int Teleport(Vector3Int endPosition, Vector3Int startPosition) {
        var character = startPosition.GameObjectSpawn();
        if (!character) { return startPosition; }
        if (CheckMoveImmunity(character)) { return startPosition; }
        var spring = character.GetComponent<SpringToTarget3D>();
        spring.StopAllCoroutines();
        spring.spring.Reset();
        spring.disableSpring = true;
        GridManager.i.goMethods.RemoveGameObject(startPosition);
        var pos =GridManager.i.goMethods.FindFloodFillCellForGo(endPosition);
        GridManager.i.goMethods.SetGameObject(pos, character);
        if (!character) { return pos; }
        FlipCharacter(character, pos, startPosition);
        StartCoroutine(TeleportAnimation(endPosition, pos, character,spring));
        return pos;
    }

    public IEnumerator TeleportAnimation(Vector3Int landedPosition,Vector3Int finalPosition, GameObject character,SpringToTarget3D spring) {
        character.transform.position = landedPosition + new Vector3(0.5f, 3f);
        spring.SpringTo(landedPosition, 40, 800);
        yield return new WaitForSeconds(0.1f);
        spring.disableSpring = false;
        spring.SpringTo(finalPosition, 50, 700);

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
