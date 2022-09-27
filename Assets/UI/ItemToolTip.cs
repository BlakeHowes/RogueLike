using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemToolTip : MonoBehaviour
{
    public Text Title;
    public Text Description;
    public Image image;
    public void UpdateToolTip(ItemAbstract item) {
        if(item == null) {      
            return;
        }
        Title.text = item.name.ToString();
        var description = item.Description();
        if (description != null) {
            Description.text = item.Description();
        }
        else {
            description = "Missing Description";
        }
        image.sprite = item.tile.sprite;

    }

    public void Update() {
        var position = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        transform.position = new Vector3(position.x, position.y, 0);
    }
}
