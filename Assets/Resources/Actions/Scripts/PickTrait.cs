using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "PickTrait", menuName = "Actions/PickTrait")]
public class PickTrait : Action,IDescription{
    public CharacterClass characterClass;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {

        var globalValues = Manager.GetGlobalValues();
        List<Trait> traits = globalValues.GetThreeRandomTraits(characterClass);
        if (!GameUIManager.i.AbilitySelectLayout) { return true; }
        GameUIManager.i.AbilitySelectLayout.SetActive(true);
        GameUIManager.i.abilitySelection.AddTrait(traits);
        return true;
    }

    public override IEnumerator StackAction() {
        yield return null;
    }

    public string Description(ItemAbstract parentItem, ActionContainer actionContainer) {
        return "Pick a " + characterClass + " Trait";
    }
}
