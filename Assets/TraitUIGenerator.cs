using FunkyCode.Rendering.Light;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public static class TraitUIGenerator
{
    public static Dictionary<string, string> ColourLookup = new Dictionary<string, string>() {
        {"Party","<color=\"green\">" },
        {"Enemy","<color=\"red\">" },
        {"Summon","<color=\"purple\">" },
        {"Passive","<color=\"yellow\">" },
    };
    public static GameObject CreateTraitEventElement(GameObject prefab,string description, Sprite sprite, GameObject parentGO, ItemAbstract item, GameObject positionGO) {
        var clone = GridManager.i.InstantiateGo(prefab);
        clone.transform.Find("Image").GetComponent<Image>().sprite = sprite;
        var text = $"{ColourLookup[parentGO.tag]} {parentGO.name} <color=\"white\">used <color=\"yellow\"> {item.name} <color=\"white\">";
        if (positionGO) {
            if (positionGO != parentGO) {
                text += " on " + ColourLookup[positionGO.tag] + positionGO.name + "<color=\"white\">";
            }
        }
        text += " " + description;
        clone.transform.Find("Description").gameObject.GetComponent<TextMeshProUGUI>().text = text;
        return clone;
    }

    public static List<GameObject> CreateAbilityDescriptions(List<Ability> abilities, GameObject parentGO,ItemAbstract item) {
        List<GameObject> descriptionElements = new();
        var prefab = Manager.GetGlobalValues().traitUIDescriptionPrefab;
        foreach (var ability in abilities) {
            foreach (var container in ability.actionContainers) {
                if (container.action is UITrait) {
                    UITrait uiTrait = container.action as UITrait;
                    uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, parentGO, item, ability, container);
                    descriptionElements.Add(CreateTraitDescription(prefab, uiTrait.icon, uiTrait.description));
                }
            }
        }
        return descriptionElements;
    }

    public static List<GameObject> AddList(List<GameObject> listRecieve, List<GameObject> listGive) {
        foreach (var item in listGive) {
            listRecieve.Add(item);
        }
        return listRecieve;
    }

    public static List<GameObject> CreateGoDescriptions(GameObject go) {
        var inventory = go.GetComponent<Inventory>();
        var prefab = Manager.GetGlobalValues().traitUIDescriptionPrefab;
        List<GameObject> descriptionElements = new();

        //Trait Items
        foreach(var item in inventory.traits) {
            if (!item) { continue; }
            descriptionElements = AddList(descriptionElements, CreateAbilityDescriptions(item.abilities,go, item));
        }

        //General abilities
        descriptionElements = AddList(descriptionElements, CreateAbilityDescriptions(inventory.generalAbilities, go, null));

        //Immunities
        go.TryGetComponent(out ElementalStats elementalStats);
        if (elementalStats) {
            if (elementalStats.pushImmunity) { descriptionElements.Add(CreateTraitDescription(prefab, null, $"Immune too being moved and teleported")); }
            foreach (var status in elementalStats.statusImmunites) {
                descriptionElements.Add(CreateTraitDescription(prefab, status.tile.sprite, $"Immune too {status.name}"));
            }
            foreach (var damageInteraction in elementalStats.damageInteractions) {
                var damageMultiplier = damageInteraction.damageMultiplier;
                string damageDescription = "";
                if(damageMultiplier == 1) { continue; }
                if(damageMultiplier < 1) {
                    damageDescription = $"-{(1-damageMultiplier)*100}%";
                }
                if (damageMultiplier > 1) {
                    damageDescription = $"+{(damageMultiplier - 1) * 100}%";
                }

                if (damageInteraction.weaponType != ItemStatic.WeaponType.none) {
                    descriptionElements.Add(CreateTraitDescription(prefab, null, $"takes {damageDescription} {damageInteraction.weaponType} damage"));
                    continue;
                }
                if (damageInteraction.surface) {
                    var texture = MakeTinyTex(damageInteraction.surface.iconColour);
                    var sprite =Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f), 100.0f);
                    descriptionElements.Add(CreateTraitDescription(prefab, sprite, $"takes {damageDescription} {damageInteraction.surface.name} damage"));
                }
            }
        }

        foreach (var item in inventory.statusEffects) {
            if (!item) { continue; }
            descriptionElements = AddList(descriptionElements, CreateAbilityDescriptions(item.abilities, go, item));
        }

        return descriptionElements;
    }

    public static List<GameObject> CreateMechDescriptions(MechAbstract mech) {
        var list = new List<GameObject>();
        list.Add(CreateMechDescription(mech));
        return list;
    }

    public static List<GameObject> CreateSurfaceDescriptions(Surface surface) {
        var list = new List<GameObject>();
        list.Add(CreateSurfaceDescription(surface));
        return list;
    }

    static Texture2D _tex;
    static Texture2D MakeTinyTex(Color _col) {
        _tex = new Texture2D(1, 1);
        _tex.SetPixel(0, 0, _col);
        _tex.Apply();
        return _tex;
    }

    private static GameObject CreateTraitDescription(GameObject prefab,Sprite icon,string description) {
        var clone = InventoryManager.i.InstantiateGo(prefab);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = description;
        if (icon) text.Find("Icon").GetComponent<Image>().sprite = icon;
        return clone;
    }

    private static GameObject CreateSurfaceDescription(Surface surface) {
        var texture = MakeTinyTex(surface.iconColour);
        var sprite = Sprite.Create(texture, new Rect(0.0f, 0.0f, texture.width, texture.height), new Vector2(0.5f, 0.5f), 100.0f);
        var clone = GridManager.i.InstantiateGo(Manager.GetGlobalValues().traitUIDescriptionPrefab);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = surface.description;
        text.Find("Icon").GetComponent<Image>().sprite = sprite;
        return clone;
    }

    private static GameObject CreateMechDescription(MechAbstract mech) {
        var clone = GridManager.i.InstantiateGo(Manager.GetGlobalValues().traitUIDescriptionPrefab);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = mech.description;
        if (mech.tile) text.Find("Icon").GetComponent<Image>().sprite = mech.tile.sprite;
        return clone;
    }

    private static GameObject CreateTraitElement(Sprite sprite, string description,GameObject prefab) {
        var clone = InventoryManager.i.InstantiateGo(prefab);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = description;
        if (sprite) text.Find("Icon").GetComponent<Image>().sprite = sprite;
        return clone;
    }
}
