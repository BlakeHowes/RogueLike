using Panda;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;
using static PartyManager;

[CreateAssetMenu(fileName = "Pokeball", menuName = "SubItems/Pokeball")]
public class Pokeball : ItemAbstract {
    public Signal onSignal;

    [HideInInspector] public List<string> targetStrings = new List<string>();
    public Tags targetsTags;

    [HideInInspector] public GameObject capturedGO;

    public override void Call(Vector3Int position, Vector3Int origin, Signal signal, GameObject parentGO, ItemAbstract parentItem) {
        if (signal != onSignal) { return; }
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        this.position = position;

        var go = position.GameObjectGo();

        if (go && capturedGO == null) {
            if (!targetStrings.Contains(go.tag)) { return; }
            go.SetActive(false);
            capturedGO = go;
            go.transform.SetParent(null);
            go.GetComponent<Stats>().healthbar.gameObject.SetActive(false);
            
            GridManager.i.goMethods.RemoveGameObject(position);
            PartyManager.i.RemoveEnemy(capturedGO);
            return;
        }

        if (!go && capturedGO) {
            Place();
            return;
        }
        GridManager.i.AddToStack(this);
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
        if(panda)Destroy(panda);
        if (!npcSearch) capturedGO.AddComponent<NPCSearch>();
        capturedGO.tag = "Party";
        foreach(Transform child in capturedGO.transform) {
            Destroy(child.gameObject);
        }
        capturedGO = null;
    }

    public override IEnumerator Action() {
        yield return null;
    }

    public override string Description() {
        return "";
    }
}




