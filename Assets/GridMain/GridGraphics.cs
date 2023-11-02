using LlamAcademy.Spring;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GridGraphics 
{
    int width;
    int height;
    Tilemap mechTilemap;
    Tilemap itemTilemap;
    Tilemap goTilemap;
    Tilemap surfaceTilemap;
    Tilemap shadowTilemap;
    MechAbstract[,] mechGrid;
    Surface[,] surfaceGrid;
    ItemAbstract[,] itemGrid;
    GameObject[,] goGrid;
    GlobalValues globalValues;
    public bool lerping;
    public int[,] fogMap;
    public GridGraphics(int width, int height, MechAbstract[,] mechGrid, Surface[,] surfaceGrid, GameObject[,] goGrid, ItemAbstract[,] itemGrid, Tilemap goTilemap, Tilemap itemTilemap, Tilemap mechTilemap, Tilemap surfaceTilemap,Tilemap shadowTilemap, GlobalValues globalValues) {
        this.width = width;
        this.height = height;
        this.mechTilemap = mechTilemap;
        this.itemTilemap = itemTilemap;
        this.goTilemap = goTilemap;
        this.surfaceTilemap = surfaceTilemap;
        this.goGrid = goGrid;
        this.mechGrid = mechGrid;
        this.surfaceGrid = surfaceGrid;
        this.itemGrid = itemGrid;
        this.shadowTilemap = shadowTilemap;
        this.globalValues = globalValues;
    }

    public void UpdateEverything() {
        shadowTilemap.ClearAllTiles();
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var position = new Vector3Int(x, y);
                if (fogMap[x,y] == 0) { continue; }
                if (itemGrid[x, y] != null) {
                    itemTilemap.SetTile(position, itemGrid[x, y].tile);
                    shadowTilemap.SetTile(position, globalValues.shadowTile);
                }  
                if (mechGrid[x, y] != null) mechTilemap.SetTile(position, mechGrid[x, y].tile);
                if (surfaceGrid[x, y] != null) surfaceTilemap.SetTile(position, surfaceGrid[x, y].tile);
            }
        }
    }

    public void UpdateItemAbstracts(int width, int height,ItemAbstract[,] itemGrid, Tilemap tilemap) {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                if (itemGrid[x, y] != null) {
                    tilemap.SetTile(new Vector3Int(x, y, 0), itemGrid[x, y].tile);
                }
            }
        }
    }

    public IEnumerator LerpPosition(Vector3Int startPosition, Vector3Int targetPosition,GameObject character, float duration) {
        float time = 0;
        Vector3 offset = new Vector3(0.5f, 0.5f);
        if (!character) { yield return null; }
        var healthbar =character.GetComponent<Stats>().healthbarGameObject;
        character.transform.position = startPosition + offset;
        if(healthbar)healthbar.transform.position = character.transform.position;
        var distance = Vector3.Distance(startPosition, targetPosition);
        duration *= distance;
        
        while (time < duration) {
            {
                lerping = true;
                if (character) {
                    
                    character.transform.position = Vector3.Lerp(startPosition + offset, targetPosition + offset, time / duration);
                    if (healthbar) healthbar.transform.position = character.transform.position;
                    time += Time.deltaTime;
                    yield return null;
                }
                else {
                    break;
                }

            }
            if (character) {
                character.transform.position = targetPosition + offset;
                if (healthbar) healthbar.transform.position = character.transform.position;
            }
            else {
                break;
            }

        }
        lerping = false;
    }

    public Sprite CreateSpriteWithPivot(Sprite existingSprite, Vector2 pivot) {
        return Sprite.Create(existingSprite.texture, existingSprite.rect, pivot,16);
    }

    public IEnumerator RollToPosition(Vector3Int startPosition, Vector3Int targetPosition, GameObject character, float duration) {
        float time = 0;
        Vector3 offset = new Vector3(0.5f, 0.5f);
        if (!character) { yield return null; }
        var healthbar = character.GetComponent<Stats>().healthbarGameObject;
        character.transform.position = startPosition + offset;
        if (healthbar) healthbar.transform.position = character.transform.position;
        var distance = Vector3.Distance(startPosition, targetPosition);
        duration *= distance;


        var rend = character.GetComponent<SpriteRenderer>();
        var pivot = CharacterSpriteGenerator.GetPivot(rend.sprite);
        rend.sprite = CreateSpriteWithPivot(rend.sprite, new Vector2(0.5f,0.5f));

        offset.y += Mathf.Abs(pivot.y - 0.5f);
        var direction = 1;
        if (startPosition.x < targetPosition.x) { direction = -90; }
        while (time < duration) {
            {
                lerping = true;
                if (character) {
                    character.transform.Rotate(Vector3.forward*direction,700 * Time.deltaTime);
                    character.transform.position = Vector3.Lerp(startPosition + offset, targetPosition + offset, time / duration);
                    if (healthbar) healthbar.transform.position = character.transform.position;
                    time += Time.deltaTime;
                    yield return null;
                }
                else {
                    break;
                }

            }
            if (character) {
                character.transform.position = targetPosition + offset;
                if (healthbar) healthbar.transform.position = character.transform.position;
            }
            else {
                break;
            }

        }
        character.transform.rotation = Quaternion.identity;
        character.transform.position = new Vector3(character.transform.position.x, character.transform.position.y - (offset.y - 0.5f));
        rend.sprite = CreateSpriteWithPivot(rend.sprite, pivot);
        lerping = false;
    }

    public IEnumerator NudgeSpring(Vector3Int position,Vector3Int origin,float amount,GameObject go) {
        Vector3 cellOffsetPosition = new Vector3(0.5f, 1) + (Vector3)position;
        Vector3 cellOffsetOrigin = new Vector3(0.5f, 1) + (Vector3)origin;
        Vector3 direction = Vector3.Normalize(cellOffsetPosition - cellOffsetOrigin);
        Vector3 offset = cellOffsetOrigin + direction * (amount * -1);
        var spring = new SpringVector2() { StartValue = go.transform.position, EndValue = go.transform.position };
        spring.Damping = 15;
        spring.Stiffness = 1000;
        spring.StartValue = go.transform.position;
        spring.EndValue = go.transform.position;
        spring.InitialVelocity = new Vector2(go.transform.position.x - offset.x,go.transform.position.y - offset.y);
        Vector3 targetPosition = go.transform.position;
        go.transform.position = spring.Evaluate(Time.deltaTime);
        float timeLimit = 0;
        var positionUpdate = go.transform.position;
        while (!Mathf.Approximately(0, Vector2.SqrMagnitude(targetPosition - positionUpdate))) {
            if(timeLimit > 1) { break; }
            timeLimit += Time.deltaTime;
            if (!go) { break; }
            positionUpdate = go.transform.position;
            go.transform.position = spring.Evaluate(Time.deltaTime);
            yield return null;
        }
    }

    public IEnumerator LerpPositionSpring(Vector3Int startPosition, Vector3Int targetPosition, GameObject character, float duration) {
        float time = 0;
        Vector3 offset = new Vector3(0.5f, 0.5f);
        if (!character) { yield return null; }
        var healthbar = character.GetComponent<Stats>().healthbarGameObject;
        if (healthbar) healthbar.transform.position = character.transform.position;
        var distance = Vector3.Distance(startPosition, targetPosition);
        duration *= distance;
        var spring = new SpringVector2() { StartValue = startPosition + offset,EndValue = targetPosition + offset };
        while (time < duration) {
            {
                if (character) {
                    character.transform.position = spring.Evaluate(Time.deltaTime);
                    if (healthbar) healthbar.transform.position = character.transform.position;
                    time += Time.deltaTime;
                    yield return null;
                }
                else {
                    break;
                }

            }
            if (character) {
                character.transform.position = targetPosition + offset;
                if (healthbar) healthbar.transform.position = character.transform.position;
            }
            else {
                break;
            }

        }

    }

    public float TimeFromSpeed(Vector3 position, Vector3 origin,float speed) {
        var distance = Vector3.Distance(position, origin);
        return distance * speed;
    }

    public IEnumerator TileLerp(Vector3Int targetTile,Vector3 startlocation, Vector3 endlocation, float lerpduration,Tilemap tilemap) {
        Debug.Log("Lerp Start, Start Location:" + startlocation+ ", End Location: " + endlocation + ", Target Tile: " + targetTile);
        Vector3 start = startlocation - targetTile;
        Vector3 end = endlocation - targetTile;
        Debug.Log("start:" + start + ", end:" + end);
        Vector3 lerpPos = start;
        float TimeElapsed = 0;
        while (TimeElapsed < lerpduration) {
            lerpPos.x = Mathf.Lerp(start.x, end.x, TimeElapsed / lerpduration);
            lerpPos.y = Mathf.Lerp(start.y, end.y, TimeElapsed / lerpduration);
            Matrix4x4 translatematrix = Matrix4x4.Translate(lerpPos);
            tilemap.SetTransformMatrix(targetTile, translatematrix);
            TimeElapsed += Time.deltaTime;
            yield return null;
        }
        Debug.Log("Lerp End");
    }

    public IEnumerator FlashAnimation(GameObject character, Vector3Int origin,Color colour) {
        if (character == null) yield break;
        //var position = character.position();
        var renderer = character.GetComponent<SpriteRenderer>();
        //var startPosition = character.transform.position;
        //GridManager.i.goTilemap.SetColor(position, Color.clear);

        if (renderer == null) { yield break; }
        //character.transform.position = Vector3.MoveTowards(character.transform.position, startPosition, -0.17f);
        renderer.material = globalValues.hitMaterial;
        yield return new WaitForSeconds(0.15f);
        if (renderer) { renderer.material = globalValues.normalMaterial; }
        //character.transform.position = startPosition;
        yield return new WaitForSeconds(0.15f);
        if (renderer) { renderer.material = globalValues.hitMaterial; }
        yield return new WaitForSeconds(0.15f);
        if (renderer) { renderer.material = globalValues.normalMaterial; }
       
        if (character == PartyManager.i.currentCharacter) {
            if (renderer) renderer.material = globalValues.outlineMaterial;
        }
    }
}
