using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ItemToolTip : MonoBehaviour
{
    public GameObject handle;
    public Text Title;
    //public Text Description;
    //public Image image;
    public Vector3 offset;
    public Transform traitsLayout;
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
            trait.gameObject.SetActive(false);
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
        //if(item.tile)
        //handle.transform.Find("Image").GetComponent<Image>().sprite = item.tile.sprite;
    }

    public void UpdateToolTip(GameObject character) {
        if (character == null) { return; }
        foreach (Transform trait in traitsLayout) {
            trait.gameObject.SetActive(false);
        }

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
        //if(item.tile)
        //handle.transform.Find("Image").GetComponent<Image>().sprite = item.tile.sprite;
    }

    public void AddTraitUIItem(Sprite sprite,string description) {
        foreach(Transform child in traitsLayout) {
            if (child.gameObject.activeSelf) { continue; }
            child.gameObject.SetActive(true);
            child.GetComponent<TextMeshProUGUI>().text = description;
            child.Find("Icon").GetComponent <Image>().sprite = sprite;
            return;
        }
    }

    public void Update() {
        //var position = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        //transform.position = new Vector3(position.x, position.y, 0);
    }
}
