using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Tilemaps;

public class ActiveTilemapSwitch : MonoBehaviour
{
    UnityEvent m_MyEvent = new UnityEvent();
    public List<Tilemap> Tilemaps = new List<Tilemap>();
    public void SwitchTilemap() {
        //foreach (var tilemap in Tilemaps) { 
            //if(tilemap.name == GridPaintingState.palette.name) {
            //    UnityEditor.Selection.activeGameObject = tilemap.gameObject;
            //}
       // }
    }
}
