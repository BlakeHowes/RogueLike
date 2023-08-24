using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbilityChest : MonoBehaviour
{
    public void OnDisable() {
        List<ItemAbstract> traits = new();
        var globalValues = Manager.GetGlobalValues();
        traits.Add(globalValues.GetRandomLootTrait());
        traits.Add(globalValues.GetRandomLootTrait());
        traits.Add(globalValues.GetRandomLootTrait());
        GameUIManager.i.AbilitySelectLayout.SetActive(true);
        GameUIManager.i.abilitySelection.AddAbilities(traits);
    }
}
