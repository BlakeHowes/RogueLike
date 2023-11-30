using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbilityUICard : MonoBehaviour
{
    public ItemAbstract trait;

    public void AddAbility(ItemAbstract item) {
        trait = item;
    }

    public void SelectAbility() {
        transform.parent.gameObject.GetComponent<AbilitySelection>().GiveAbilityToCharacter(trait);
        Manager.GetGlobalValues().chosenItems.Add(trait as Trait);
    }
}
