using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AbilityUICard : MonoBehaviour
{
    public ItemAbstract trait;

    public void AddAbility(ItemAbstract item) {
        trait = item;
    }

    public void SelectAbility() {
        foreach(Transform child in transform.parent) {
            child.gameObject.GetComponent<Image>().color = Color.black;
        }
        GetComponent<Image>().color = Color.white;
        transform.parent.gameObject.GetComponent<AbilitySelection>().GiveAbilityToCharacter(trait);
        Manager.GetGlobalValues().chosenItems.Add(trait as Trait);
    }
}
