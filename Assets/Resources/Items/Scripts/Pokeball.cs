using Panda;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static ItemStatic;
using static MechStatic;
using static PartyManager;

//[CreateAssetMenu(fileName = "Pokeball", menuName = "Pokeball")]
public class Pokeball : Action {
    [HideInInspector] public GameObject capturedGO;
    [HideInInspector] public bool capture = false;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        this.position = position;
        SaveValues(position, origin, parentGO, parentItem);
        if (!capturedGO) {
            capturedGO = position.GameObjectGo();
            capture = true;
        }
        else {
            capture = false;
        }
        
        GridManager.i.AddToStack(this);
        return true;
    }

    public override IEnumerator StackAction() {
        var go = position.GameObjectGo();

        if (capture) {
            go.SetActive(false);
            capturedGO = go;
            go.transform.SetParent(null);
            go.GetComponent<Stats>().healthbar.gameObject.SetActive(false);

            GridManager.i.goMethods.RemoveGameObject(position);
            PartyManager.i.RemoveEnemy(capturedGO);
            yield break;
        }

        if (!capture) {
            Place();
        }
        yield return null;
    }

    public void Place() {
        capturedGO.SetActive(true);
        capturedGO.transform.SetParent(GameObject.Find("GridManager").transform);
        capturedGO.GetComponent<Stats>().healthbar.gameObject.SetActive(false);
        GridManager.i.goMethods.SetGameObject(position, capturedGO);
        capturedGO.transform.position = position + new Vector3(0.5f, 0.5f);
        PartyManager.i.AddPartyMember(capturedGO);
        capturedGO.TryGetComponent(out NPCSearch npcSearch);
        capturedGO.TryGetComponent(out PandaBehaviour panda);
        if (panda) Destroy(panda);
        if (!npcSearch) capturedGO.AddComponent<NPCSearch>();
        capturedGO.tag = "Party";
        foreach (Transform child in capturedGO.transform) {
            Destroy(child.gameObject);
        }
        capturedGO = null;
    }
}
