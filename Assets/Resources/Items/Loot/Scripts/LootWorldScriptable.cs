using static LootGenerator;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "LootWorldScriptable", menuName = "Loot/LootWorldScriptable")]
public class WorldLootScriptable : ScriptableObject {
    public List<LootList> loot = new List<LootList>();
}