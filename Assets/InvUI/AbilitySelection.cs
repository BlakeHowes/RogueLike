using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AbilitySelection : MonoBehaviour
{
    public UIPartySelector partySelector;

    public void GiveAbilityToCharacter(ItemAbstract item) {
        if(partySelector.selectedGO) partySelector.selectedGO.GetComponent<Inventory>().AddTrait(item,false);
    }
    public void AddTrait(List<Trait> traits) {

        foreach(Transform child in transform) {
            child.gameObject.SetActive(false);
        }

        int i = 0;
        foreach(var trait in traits) {
            if(trait == null) continue;
            var card = gameObject.transform.GetChild(i);
            card.gameObject.SetActive(true);
            card.GetComponent<AbilityUICard>().AddAbility(trait);
            card.transform.Find("Title").GetComponent<TextMeshProUGUI>().text = trait.name;
            card.transform.Find("Image").GetComponent<Image>().sprite = trait.tile.sprite;
            if(trait.cardBack)card.GetComponent<Image>().sprite = trait.cardBack;
            var description = "";
            foreach (var ability in trait.abilities) {
                foreach (var container in ability.actionContainers) {
                    if (container.action is UITrait) {
                        UITrait uiTrait = container.action as UITrait;
                        uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, null, trait, ability, container);
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
