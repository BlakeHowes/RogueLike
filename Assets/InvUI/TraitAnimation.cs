using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TraitAnimation : MonoBehaviour
{
    GameObject prefab;
    public float delay = 0;
    public List<GameObject> traits = new List<GameObject>();
    public List<GameObject> history = new List<GameObject>();
    public int historyLength;
    bool showHistory;
    public void AddTrait(string description, Sprite sprite,GameObject parentGO,ItemAbstract item,GameObject positionGO) {
        foreach (Transform child in transform) {
            if (child.gameObject.activeSelf) { continue; }
            if (history.Contains(child.gameObject)) { continue; }
            if(traits.Contains(child.gameObject)) { continue; }
            child.Find("Image").gameObject.GetComponent<Image>().sprite = sprite;

            var text = parentGO.name + " used "+ item.name;
            if (positionGO) {
                if(positionGO != parentGO) {
                    text += " on " + positionGO.name;
                }
            }
            text += " " + description;
            child.Find("Description").gameObject.GetComponent<TextMeshProUGUI>().text = text;

            traits.Add(child.gameObject);
            if (!stackRunning) { StartCoroutine(Stack()); }
            
            return;
        }
    }

    public void ResetAndStopAnimations() {
        foreach (var go in history) {
            go.SetActive(true);
            StartCoroutine(PauseAnimation(go.GetComponent<Animation>()));
            GetComponent<VerticalLayoutGroup>().enabled = true;
        }
    }

    public IEnumerator PauseAnimation(Animation animation) {
        animation.Rewind();
        yield return new WaitForSeconds(0.01f); 
        animation.enabled = false;
    }

    public void ToggleHistory() {
        showHistory = !showHistory;
        if (showHistory) {
            foreach(Transform go in transform) {
                if (go.gameObject.activeSelf) { StartCoroutine(PauseAnimation(go.GetComponent<Animation>())); }
            }
            GetComponent<VerticalLayoutGroup>().enabled = true;
            ResetAndStopAnimations();
        }
        else {
            foreach (Transform go in transform) {
                go.gameObject.SetActive(false);
                go.GetComponent<Animation>().enabled = true;
                GetComponent<VerticalLayoutGroup>().enabled = false;
            }
        }
    }
    bool stackRunning = false;
    public IEnumerator Stack() {
        stackRunning = true;
        while (traits.Count > 0) {
            traits[0].SetActive(true);
            if (showHistory) { StartCoroutine (PauseAnimation(traits[0].GetComponent<Animation>())); }
            yield return new WaitForSeconds(delay);
          
            history.Add(traits[0]);
            traits.Remove(traits[0]);
          
          if (history.Count > historyLength) {
             history[0].SetActive(false);
              history.RemoveAt(0);

          }
       
        }
        stackRunning = false;
    }
}
