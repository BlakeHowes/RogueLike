using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetInactiveAfterAnimation : MonoBehaviour
{
    private Animation animation;
    public void OnEnable() {
        animation = GetComponent<Animation>();
       
        StartCoroutine(WaitTillAnimEnds());
    }

    IEnumerator WaitTillAnimEnds() {

        yield return new WaitForSeconds(animation.clip.length);
        if (animation.isActiveAndEnabled)
            gameObject.SetActive(false);
    }
}
