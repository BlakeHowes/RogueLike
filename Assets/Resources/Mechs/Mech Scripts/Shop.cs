using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static MechStatic;

[CreateAssetMenu(fileName = "Shop", menuName = "Mechs/Shop")]
public class Shop : MechAbstract
{
    private bool createdUI;
    public GameObject priceUIPrefab;
    private TextMeshProUGUI text;
    private GameObject image;
    public override void Call(Vector3Int position,Signal signal) {
        if (!createdUI) {
            var priceUI = GridManager.i.InstantiateGo(priceUIPrefab);
            priceUI.transform.SetParent(GameUIManager.i.canvasWorld);
            priceUI.transform.position = position + new Vector3(0.5f, -0.2f);
            text = priceUI.transform.Find("Text").GetComponent<TextMeshProUGUI>();
            image = priceUI.transform.Find("Image").gameObject;
            var item = position.Item();
      
            if (item) { 
                image.SetActive(true);
                text.text = GetValue(item).ToString();
            }
            else {
                image.SetActive(false);
                text.text = "";
            }
            createdUI = true;
        }

        if (signal == Signal.OnPickupItem) {
            var item = position.Item();
            if (!item) { return; }
            var value = GetValue(item);
            if (item is GeneralItem) {
                var generalItem = item as GeneralItem;
                value = generalItem.shopValue;
            }
  
            if (item is Weapon) {
                var weapon = item as Weapon;
                value = weapon.shopValue;
            }
            if(item is Equipment) {
                var equipment = item as Equipment;
                value = equipment.shopValue;
            }
            if (!GameUIManager.i.ChangeCoinsValue(value * -1)) { 
                MouseManager.i.blockPickup = true;
            }
            else {
                text.text = "";
                image.SetActive(false);
            }
        }

        if(signal == Signal.ItemDroppedOnto) {
           
            var item = GridManager.i.itemMethods.GetItem(position);
            Debug.Log(item+" on Shop " + position);
            if (item) {
                var value = GetValue(item);
                Debug.Log("Value Changed");
                GameUIManager.i.ChangeCoinsValue(value);
                text.text = value.ToString();
                image.SetActive(true);
            }

        }

    }

    public int GetValue(ItemAbstract item) {
   
        var value = 0;
        if (!item) { return 0; }
        if (item is GeneralItem) {
            var generalItem = item as GeneralItem;
            value = generalItem.shopValue;
        }
        if (item is Weapon) {
            var weapon = item as Weapon;
            value = weapon.shopValue;
        }
        if (item is Equipment) {
            var equipment = item as Equipment;
            value = equipment.shopValue;
        }
        return value;
    }
}
