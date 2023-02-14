using UnityEngine;
[System.Serializable]
public class Loot
{
    public ItemAbstract item;
    [Range(0.001f, 1.000f)]
    public float rarity = 0.5f;
    public int pool;
}
