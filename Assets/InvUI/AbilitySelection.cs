using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AbilitySelection : MonoBehaviour
{
    public UIPartySelector partySelector;

    public void GiveAbilityToCharacter(ItemAbstract item) {
        if(partySelector.selectedGO) partySelector.selectedGO.GetComponent<Inventory>().AddAbility(item,false);
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
            card.transform.Find("Image").GetComponent<Image>().sprite = item.tile.sprite;
            var description = "";
            foreach (var ability in item.abilities) {
                foreach (var container in ability.actionContainers) {
                    if (container.action is UITrait) {
                        UITrait uiTrait = container.action as UITrait;
                        uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, null, null, ability, container);
                        description += uiTrait.description;
                    }
                }
                description += "\n\n";
            }
            card.transform.Find("Description").GetComponent<TextMeshProUGUI>().text = description;
            i++;
        }
    }
}
