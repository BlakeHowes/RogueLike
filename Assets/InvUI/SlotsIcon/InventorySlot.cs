using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour
{
    public ItemAbstract item;
    public void AddItem(ItemAbstract item) {
        this.item = item;
        GetComponent<Image>().sprite = item.tile.sprite;
    }

    public void SelectItem() {
        if (MouseManager.i.itemSelected) { MouseManager.i.SelectItem(null); return; }
        MouseManager.i.SelectItem(item);
        GetComponent<Image>().color = Color.yellow;
    }

    public void EnableToolTip() {
        bool top = false;
        if(transform.parent.gameObject == InventoryManager.i.equipmentLayout) {
            top = true;
        }
        GameUIManager.i.tooltipGameObject.SetActive(true);
        GameUIManager.i.itemtooltip.UpdateToolTip(item,top);
        Debug.Log("Skill slot");
    }

    public void DisableToolTip() {
        GameUIManager.i.tooltipGameObject.SetActive(false);
    }
}
