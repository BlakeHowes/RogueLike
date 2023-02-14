using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemToolTip : MonoBehaviour
{
    public GameObject handle;
    public Text Title;
    public Text Description;
    public Image image;
    public Vector3 offset;
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

        Title.text = item.name.ToString();
        var description = item.Description();
        if (description != null) {
            Description.text = item.Description();
        }
        else {
            description = "Missing Description";
        }
        if(image.sprite)
        image.sprite = item.tile.sprite;
    }

    public void Update() {
        var position = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        transform.position = new Vector3(position.x, position.y, 0);
    }
}
