using LlamAcademy.Spring.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BagAnimation : MonoBehaviour
{
    public Sprite closed;
    public Sprite open;
    public ParticleSystem particle;
    public SpringToRotation spring;

    public void PlayAnimation(ItemAbstract item) {
        particle.textureSheetAnimation.SetSprite(0, item.tile.sprite);
        particle.Play();
        StartCoroutine(OpenBag());
    }

    public IEnumerator OpenBag() {
        GetComponent<Image>().sprite = open;
        yield return new WaitForSeconds(0.3f);
        GetComponent<Image>().sprite = closed;
    }
}
