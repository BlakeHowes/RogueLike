using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Tilemaps;
using static UnityEngine.RuleTile.TilingRuleOutput;

public class GridGraphics
{
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
}
