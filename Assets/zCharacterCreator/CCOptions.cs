using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CCOptions : MonoBehaviour
{
    public CCRace race;
    public Sprite body;
    public CCPalette bodyPalette;
    public Sprite hair;
    public CCPalette hairPalette;
    public CCLoadout loadout;
    public Sprite face;
    public CCPalette facePalette;
    public Sprite feature;
    public CCPalette featurePalette;
    public Vector3Int headOffset = new Vector3Int(1, 19);
    public Vector3Int mainHandOffset = new Vector3Int(0, 0);
    public Vector3Int offHandOffset = new Vector3Int(0, 0);
    public Vector3Int characterOffset = new Vector3Int(31, 15, 0);
    [HideInInspector] public bool hideHelmet;
    public void SaveCharacterSpriteToFile() {
        Debug.Log("Called save");
    }
}
