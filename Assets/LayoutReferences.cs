using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LayoutReferences : MonoBehaviour
{
    public GameObject inventoryLayout;
    public GameObject equipmentLayout;
    public GameObject skillLayout;
    public GameObject bagLayout;
    public static LayoutReferences i;
    public void Awake() {
        i = this;
    }

    public void OnEnable() {
        if (InventoryManager.i == null) {
            InventoryManager.i = GameObject.Find("MouseManager").AddComponent<InventoryManager>();
            InventoryManager.i.globalValues = Manager.GetGlobalValues();
        }
        InventoryManager.i.skillSlots.Clear();
        foreach (Transform slot in skillLayout.transform) {
            InventoryManager.i.skillSlots.Add(slot.gameObject.GetComponent<SkillSlot>());
        }

    }
}
