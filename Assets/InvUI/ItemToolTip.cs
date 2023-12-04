using System.Collections;
using System.Collections.Generic;
using TMPro;
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
    public RectTransform backgroundRect;
    public RectTransform parentRect;

    public void UpdateToolTip(ItemAbstract item,bool top) {
        if(item == null) {
            gameObject.SetActive(false);
            return;
        }

        handle.transform.localPosition = new Vector3(offset.x, offset.y, 0);
        foreach (Transform trait in traitsLayout) {
            if(trait.gameObject != titleGo) Destroy(trait.gameObject);
        }

        Title.text = item.name.ToString();
        if(item is Weapon) {
            AddTraitUIItem(item.tile.sprite, ((Weapon)item).CreateDescription());
        }
        AddAbilitysToUI(item.abilities,null, item);
        var position = Input.mousePosition;
        transform.position = new Vector3(position.x, position.y, 0);
        KeepFullyOnScreen();
    }


    public void AddAbilitysToUI(List<Ability> abilities, GameObject go, ItemAbstract item) {
        foreach (var ability in abilities) {
            foreach (var container in ability.actionContainers) {
                if (container.action is UITrait) {
                    UITrait uiTrait = container.action as UITrait;
                    uiTrait.Condition(Vector3Int.zero, Vector3Int.zero, go, item, ability, container);
                    AddTraitUIItem(uiTrait.icon, uiTrait.description);
                }
            }
        }
    }

    public void ToolTipItem(ItemAbstract item) {
        if (item == null) { return; }
        foreach (Transform trait in traitsLayout) {
            if (trait.gameObject != titleGo) Destroy(trait.gameObject);
        }
        Title.text = item.name.ToString();
        if (item is Weapon) {
            AddTraitUIItem(item.tile.sprite, ((Weapon)item).CreateDescription());
        }

        var descriptionElements = TraitUIGenerator.CreateAbilityDescriptions(item.abilities,null,item);
        AddElementsToToolTip(descriptionElements);
    }

    public void ToolTipMech(MechAbstract mech) {
        if (mech == null) { return; }
        foreach (Transform trait in traitsLayout) {
            if (trait.gameObject != titleGo) Destroy(trait.gameObject);
        }
        Title.text = mech.name.ToString();
        var descriptionElements = TraitUIGenerator.CreateMechDescriptions(mech);
        AddElementsToToolTip(descriptionElements);
    }

    public void ToolTipSurface(Surface surface) {
        if (surface == null) { return; }
        foreach (Transform trait in traitsLayout) {
            if (trait.gameObject != titleGo) Destroy(trait.gameObject);
        }
        Title.text = surface.name.ToString();
        var descriptionElements = TraitUIGenerator.CreateSurfaceDescriptions(surface);
        AddElementsToToolTip(descriptionElements);
    }

    public void ToolTipGo(GameObject character) {
        if (character == null) { return; }

        foreach (Transform trait in traitsLayout) {
            if (trait.gameObject != titleGo) Destroy(trait.gameObject);
        }

        var statsClone =Instantiate(statsPrefab, traitsLayout);
        statsClone.GetComponent<StatsUI>().UpdateStats(character);


        Title.text = character.name.ToString();
        var descriptionElements = TraitUIGenerator.CreateGoDescriptions(character);
        AddElementsToToolTip(descriptionElements);
    }

    public void KeepFullyOnScreen() {
        RectTransform canvas = transform.parent.GetComponent<RectTransform>(); ;
        RectTransform rect = backgroundRect;

        Vector2 sizeDelta = rect.sizeDelta * transform.localScale;
        Vector2 anchorOffset = canvas.sizeDelta * (rect.anchorMin - Vector2.one / 2);

        Vector2 maxPivotOffset = sizeDelta * (rect.pivot - (Vector2.one / 2) * 2);
        Vector2 minPivotOffset = sizeDelta * ((Vector2.one / 2) * 2 - rect.pivot);
        Vector2 position = rect.anchoredPosition;
        float minX = (canvas.sizeDelta.x) * -0.5f - anchorOffset.x - minPivotOffset.x + sizeDelta.x;
        float maxX = (canvas.sizeDelta.x) * 0.5f - anchorOffset.x + maxPivotOffset.x;
        float minY = (canvas.sizeDelta.y) * -0.5f - anchorOffset.y - minPivotOffset.y + sizeDelta.y;
        float maxY = (canvas.sizeDelta.y) * 0.5f - anchorOffset.y + maxPivotOffset.y;

        position.x = Mathf.Clamp(position.x, minX, maxX);
        position.y = Mathf.Clamp(position.y, minY, maxY);

        rect.anchoredPosition = position;
    }



    public void AddElementsToToolTip(List<GameObject> elements) {
        foreach (var descriptionElement in elements) {
            descriptionElement.transform.SetParent(traitsLayout.transform);
            descriptionElement.transform.localScale = new Vector3(1, 1, 1);
        }
        var position = Input.mousePosition;
        var offset = 0;
        if (position.x > 1500) { offset = -420; }
        else {
            offset = 400;
        }
        handle.transform.localPosition = Vector3.zero;
        transform.position = new Vector3(position.x + offset, position.y - 150, 0);
        KeepFullyOnScreen();
    }

    public void AddTraitUIItem(Sprite sprite,string description) {
        var clone = Instantiate(traitPrefab, traitsLayout);
        var text = clone.transform.Find("Text");
        text.GetComponent<TextMeshProUGUI>().text = description;
        if(sprite)text.Find("Icon").GetComponent<Image>().sprite = sprite;
    }
}
