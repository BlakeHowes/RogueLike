using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BagAnimation : MonoBehaviour
{
    public Sprite closed;
    public Sprite open;
    public new Animation animation;
    public Image itemImage;
    bool openToggle = true;
    public void PlayAnimation(ItemAbstract item) {
        animation.Play();
        itemImage.sprite = item.tile.sprite;
        StartCoroutine(OpenBag());
    }

    public IEnumerator OpenBag() {
        GetComponent<Image>().sprite = open;
        yield return new WaitForSeconds(0.3f);
        GetComponent<Image>().sprite = closed;
    }

    public void ToggleSprite() {
        openToggle = !openToggle;
        if (!openToggle) { GetComponent<Image>().sprite = open; InventoryManager.i.UpdateInventory(); }
        if (openToggle) { GetComponent<Image>().sprite = closed; }
    }
}
