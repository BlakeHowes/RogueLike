using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "PickTrait", menuName = "Actions/PickTrait")]
public class PickTrait : Action {
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        List<ItemAbstract> traits = new();
        var globalValues = Manager.GetGlobalValues();
        traits.Add(globalValues.GetRandomLootTrait());
        traits.Add(globalValues.GetRandomLootTrait());
        traits.Add(globalValues.GetRandomLootTrait());
        if (!GameUIManager.i.AbilitySelectLayout) { return true; }
        GameUIManager.i.AbilitySelectLayout.SetActive(true);
        GameUIManager.i.abilitySelection.AddAbilities(traits);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}
