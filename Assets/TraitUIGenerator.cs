using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public static class TraitUIGenerator
{
    public static Dictionary<string, string> colourLookup = new Dictionary<string, string>() {
        {"Party","<color=\"green\">" },
        {"Enemy","<color=\"red\">" },
        {"Summon","<color=\"purple\">" },
        {"Passive","<color=\"yellow\">" },
    };
    public static GameObject CreateTraitEventElement(GameObject prefab,string description, Sprite sprite, GameObject parentGO, ItemAbstract item, GameObject positionGO) {
        var clone = GridManager.i.InstantiateGo(prefab);
        clone.transform.Find("Image").GetComponent<Image>().sprite = sprite;
        var text = colourLookup[parentGO.tag] + parentGO.name + " <color=\"white\">used <color=\"yellow\">" + item.name + "<color=\"white\">";
        if (positionGO) {
            if (positionGO != parentGO) {
                text += " on " + colourLookup[positionGO.tag] + positionGO.name + "<color=\"white\">";
            }
        }
        text += " " + description;
        clone.transform.Find("Description").gameObject.GetComponent<TextMeshProUGUI>().text = text;
        return clone;
    }

    public static GameObject CreateTraitElement(Sprite sprite, string description,GameObject prefab) {
        var clone = InventoryManager.i.InstantiateGo(prefab);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = description;
        if (sprite) text.Find("Icon").GetComponent<Image>().sprite = sprite;
        return clone;
    }

    public static List<GameObject> GetUIElementsFromItem(ItemAbstract item,GameObject parentGO,GameObject prefab) {
        List<GameObject> elements = new List<GameObject>();
        foreach (var ability in item.abilities) {
            foreach (var container in ability.actionContainers) {
                if (container.action is UITrait) {
                    UITrait uiTrait = container.action as UITrait;
                    uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, parentGO, item, ability, container);
                    elements.Add(CreateTraitElement(uiTrait.icon, uiTrait.description,prefab));
                }
            }
        }
        return elements;
    }
}
