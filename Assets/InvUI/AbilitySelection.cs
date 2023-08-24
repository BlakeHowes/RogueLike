using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class AbilitySelection : MonoBehaviour
{
    public UIPartySelector partySelector;

    public void GiveAbilityToCharacter(ItemAbstract item) {
        partySelector.selectedGO.GetComponent<Inventory>().AddAbility(item,false);
    }
    public void AddAbilities(List<ItemAbstract> items) {
        foreach(Transform child in transform) {
            child.gameObject.SetActive(false);
        }

        int i = 0;
        foreach(var item in items) {
            var card = gameObject.transform.GetChild(i);
            card.gameObject.SetActive(true);
            card.GetComponent<AbilityUICard>().AddAbility(item);
            card.transform.Find("Title").GetComponent<TextMeshProUGUI>().text = item.name;
            i++;
        }
    }
}
