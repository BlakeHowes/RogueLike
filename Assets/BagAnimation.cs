using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BagAnimation : MonoBehaviour
{
    public Sprite closed;
    public Sprite open;
    public GameObject animationGO;
    public new Animation animation;
    public RawImage itemImage;
    bool openToggle = true;
    Image image;
    public void Awake() {
        image = GetComponent<Image>();
    }
    public void PlayAnimation(ItemAbstract item) {
        animationGO.SetActive(true);
        itemImage.texture = item.tile.sprite.texture;
        image.sprite = open;
        StartCoroutine(CloseBag());
    }
    public IEnumerator CloseBag() {
        yield return new WaitForSeconds(0.3f);
        image.sprite = closed;
    }


    public void ToggleSprite() {
        openToggle = !openToggle;
        if (!openToggle) { GetComponent<Image>().sprite = open; InventoryManager.i.UpdateInventory(PartyManager.i.currentCharacter); }
        if (openToggle) { GetComponent<Image>().sprite = closed; }
    }
}
