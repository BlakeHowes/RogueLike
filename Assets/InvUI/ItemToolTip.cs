using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class ItemToolTip : MonoBehaviour
{
    public GameObject handle;
    public TextMeshProUGUI Title;
    public GameObject titleGo;
    //public Text Description;
    //public Image image;
    public Vector3 offset;
    public Transform traitsLayout;
    public GameObject traitPrefab;
    public GameObject statsPrefab;
    public void OnEnable() {
        //gameObject.SetActive(false);
    }
    public void UpdateToolTip(ItemAbstract item,bool top) {
        if(item == null) {
            gameObject.SetActive(false);
            return;
        }

        if (top) {
            handle.transform.localPosition = new Vector3(offset.x, offset.y * -1, 0);
        }
        else {
            handle.transform.localPosition = new Vector3(offset.x, offset.y, 0);
        }
        foreach(Transform trait in traitsLayout) {
            if(trait.gameObject != titleGo) Destroy(trait.gameObject);
        }

        Title.text = item.name.ToString();
        if(item is Weapon) {
            AddTraitUIItem(item.tile.sprite, ((Weapon)item).CreateDescription());
        }
        foreach (var ability in item.abilities) { 
            foreach(var container in ability.actionContainers) {
                if(container.action is UITrait) {
                    UITrait uiTrait = container.action as UITrait;
                    uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, null, item, ability, container);
                    AddTraitUIItem(uiTrait.icon, uiTrait.description);
                }
            }
        }
        var position = Input.mousePosition;
        transform.position = new Vector3(position.x, position.y, 0);
        //if(item.tile)
        //handle.transform.Find("Image").GetComponent<Image>().sprite = item.tile.sprite;
    }

    public void UpdateToolTip(GameObject character) {
   
        if (character == null) { return; }
        foreach (Transform trait in traitsLayout) {
            if (trait.gameObject != titleGo) Destroy(trait.gameObject);
        }

        var statsClone =Instantiate(statsPrefab, traitsLayout);
        statsClone.GetComponent<StatsUI>().UpdateStats(character);

        Title.text = character.name.ToString();
        foreach (var ability in character.GetComponent<Inventory>().generalAbilities) {
            foreach (var container in ability.actionContainers) {
                if (container.action is UITrait) {
                    UITrait uiTrait = container.action as UITrait;
                    uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, null, null, ability, container);
                    AddTraitUIItem(uiTrait.icon, uiTrait.description);
                }
            }
        }
        foreach(var item in character.GetComponent<Inventory>().traits) {
            if(item is Skill) { continue; }
            foreach (var ability in item.abilities) {
                foreach (var container in ability.actionContainers) {
                    if (container.action is UITrait) {
                        UITrait uiTrait = container.action as UITrait;
                        uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, null, null, ability, container);
                        AddTraitUIItem(uiTrait.icon, uiTrait.description);
                    }
                }
            }
        }
        var position = Input.mousePosition;
        var offset = 0;
        if (position.x > 1500) { offset = -420; } else {
            offset = 400;
        }
        handle.transform.localPosition = Vector3.zero;
        Debug.Log(position.x);
        transform.position = new Vector3(position.x + offset, position.y-150, 0);
        //if(item.tile)
        //handle.transform.Find("Image").GetComponent<Image>().sprite = item.tile.sprite;
    }

    public void AddTraitUIItem(Sprite sprite,string description) {
        var clone = Instantiate(traitPrefab, traitsLayout);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = description;
        if(sprite)text.Find("Icon").GetComponent<Image>().sprite = sprite;
    }

    public void Update() {
        //var position = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        //transform.position = new Vector3(position.x, position.y, 0);
    }
}
