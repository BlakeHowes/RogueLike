using Panda;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using static PartyManager;

//[CreateAssetMenu(fileName = "Pokeball", menuName = "Pokeball")]
public class Pokeball : Action {
    [HideInInspector] public GameObject capturedGO;
    [HideInInspector] public bool capture = false;
    [HideInInspector] public Pokeball pokeball;
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
        pokeball = this;
        GridManager.i.AddToStack(this);
        return true;
    }

    public override IEnumerator StackAction() {
        var go = position.GameObjectGo();
        if (capture) {
            if (!go) { yield break; }
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
        pokeball.capturedGO = null;
        pokeball.capture = true;
        yield return null;
    }

    public void Place() {
        if (PartyManager.i.party.Contains(capturedGO)) { return; }
        capturedGO.SetActive(true);
        capturedGO.GetComponent<Stats>().healthbar.gameObject.SetActive(false);
        GridManager.i.goMethods.SetGameObject(position, capturedGO);
        capturedGO.transform.position = position + new Vector3(0.5f, 0.5f);
        PartyManager.i.AddPartyMember(capturedGO);
        capturedGO.transform.SetParent(null);
        DontDestroyOnLoad(capturedGO);
        capturedGO.TryGetComponent(out NPCSearch npcSearch);
        capturedGO.TryGetComponent(out PandaBehaviour panda);
        capturedGO.TryGetComponent(out Behaviours behaviours);
        if (panda) Destroy(panda);
        if (behaviours) Destroy(behaviours);
        if (!npcSearch) {
            var search = capturedGO.AddComponent<NPCSearch>();
            search.targetsTags = Tags.Enemies;
            
        } 
        capturedGO.tag = "Party";
        foreach (Transform child in capturedGO.transform) {
            Destroy(child.gameObject);
        }
        capturedGO.GetComponent<NPCSearch>().CreateTargetTags();
        var light = GridManager.i.InstantiateGo(Manager.GetGlobalValues().characterLightPrefab);
        light.transform.SetParent(capturedGO.transform);
        light.transform.localPosition = Vector3.zero;
    }
}
