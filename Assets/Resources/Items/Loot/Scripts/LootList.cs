using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static LootGenerator;

[System.Serializable]
[CreateAssetMenu(fileName = "Loot List", menuName = "Loot/Loot List")]
public class LootList : ScriptableObject {
    public List<Loot> loot = new List<Loot>();
}
