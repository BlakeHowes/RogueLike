using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Tilemaps;

public class GridGraphics 
{
    int width;
    int height;
    Tile goTile;
    Tilemap mechTilemap;
    Tilemap itemTilemap;
    Tilemap goTilemap;
    Tilemap surfaceTilemap;
    SurfaceAbstract[,] mechGrid;
    SurfaceAbstract[,] surfaceGrid;
    ItemAbstract[,] itemGrid;
    GameObject[,] goGrid;
    public GridGraphics(int width, int height, SurfaceAbstract[,] mechGrid, SurfaceAbstract[,] surfaceGrid, GameObject[,] goGrid, ItemAbstract[,] itemGrid, Tilemap goTilemap, Tilemap itemTilemap, Tilemap mechTilemap, Tilemap surfaceTilemap,Tile goTile) {
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
        this.goTile = goTile;
    }
    public void UpdateGameObjects(int width,int height, GameObject[,] goGrid,Tilemap tilemap) {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                if (goGrid[x,y] != null) {
                    var tile = goGrid[x, y].GetComponent<Stats>().tile;
                    if (tile != null) {
                        tilemap.SetTile(new Vector3Int(x, y, 0), tile);
                    }
                }
            }
        }
    }

    public void UpdateEverything() {
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                var position = new Vector3Int(x, y);
                if (itemGrid[x, y] != null) itemTilemap.SetTile(position, itemGrid[x, y].tile);
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

    public IEnumerator LerpPosition(Vector3Int startPosition, Vector3Int targetPosition, float duration, Tilemap tilemap) {
        float time = 0;
        Vector3 offset = new Vector3(0.5f, 0.5f);
        var gameobject = startPosition.gameobjectSpawn();
        var healthbar =gameobject.GetComponent<Stats>().healthbar;
        gameobject.transform.position = startPosition + offset;
        healthbar.transform.position = gameobject.transform.position;
        var distance = Vector3.Distance(startPosition, targetPosition);
        duration *= distance;
        while (time < duration) {
            {
                gameobject.transform.position = Vector3.Lerp(startPosition + offset, targetPosition + offset, time / duration);
                healthbar.transform.position = gameobject.transform.position;
                time += Time.deltaTime;
                yield return null;
            }
            gameobject.transform.position = targetPosition + offset;
            healthbar.transform.position = gameobject.transform.position;
        }
    }

    public IEnumerator TileLerp(Vector3Int targetTile,Vector3Int startlocation, Vector3Int endlocation, float lerpduration,Tilemap tilemap,GameObject particleEffect) {
        Vector3 start = startlocation - targetTile;
        Vector3 end = endlocation - targetTile;
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
        if (particleEffect != null) { EffectManager.i.CreateSingleParticleEffect(endlocation, startlocation, particleEffect); }
    }
}
