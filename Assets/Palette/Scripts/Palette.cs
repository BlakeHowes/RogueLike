using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;

[CreateAssetMenu(fileName = "Palette", menuName = "ScriptablePrefabs/Palette")]
public class Palette : ScriptableObject {
    [Header("Mechanisms")]
    public ItemAbstract entrance;
    public ItemAbstract exit;
    public ItemAbstract spikes;
    public ItemAbstract grass;

    [Header("GameObjects")]
    public GameObject wall;
    public GameObject chest;
    public GameObject door;
}
