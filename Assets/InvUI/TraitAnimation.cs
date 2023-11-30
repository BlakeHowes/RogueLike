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

    public Dictionary<string, string> colourLookup = new Dictionary<string, string>() {
        {"Party","<color=\"green\">" },
        {"Enemy","<color=\"red\">" },
        {"Summon","<color=\"purple\">" },
        {"Passive","<color=\"yellow\">" },
        {"Door","<color=\"yellow\">" },
    };

    public string GetTagColour(string tag) {
        return colourLookup[tag];
    }

    public void AddTrait(string description, Sprite sprite,GameObject parentGO,ItemAbstract item,GameObject positionGO) {
        if (!gameObject.transform.parent.gameObject.activeSelf) { gameObject.transform.parent.gameObject.SetActive(true); }
        foreach (Transform child in transform) {
            if (child.gameObject.activeSelf) { continue; }
            if (history.Contains(child.gameObject)) { continue; }
            if(traits.Contains(child.gameObject)) { continue; }
            child.Find("Image").gameObject.GetComponent<Image>().sprite = sprite;
            var itemName = parentGO.name;
            if (item) { itemName = item.name; }
            var text = GetTagColour(parentGO.tag) + parentGO.name + " <color=\"white\">used <color=\"yellow\">" + itemName + "<color=\"white\">";
            if (positionGO) {
                if(positionGO != parentGO) {
                    text += " on " + GetTagColour(positionGO.tag) + positionGO.name + "<color=\"white\">";
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
