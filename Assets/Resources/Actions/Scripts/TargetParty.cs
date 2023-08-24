using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static PartyManager;
using UnityEngine.UIElements;
using static ItemStatic;
[CreateAssetMenu(fileName = "TargetParty", menuName = "Actions/TargetParty")]
public class TargetParty : Action {
    public CallType callType;
    public bool callParty;
    public override bool Condition(Vector3Int position, Vector3Int origin, GameObject parentGO, ItemAbstract parentItem, Ability ability, ActionContainer actionContainer) {
        var party = PartyManager.i.party;
        SaveValues(position, origin, parentGO, parentItem);
        List<GameObject> characters = new();

        if (party.Contains(parentGO)) {

            if (callParty) {
                foreach (var member in party) {
                    if (member == parentGO) { continue; }
                    member.GetComponent<Inventory>().CallEquipment(position, member.Position(), callType);
                }
                return true;
            }

            foreach (var member in party) {
                if (member == parentGO) { continue; }
                characters.Add(member);
            }
        }
       
        CallAbilities(characters, ability);
        return true;
    }

    public void CallAbilities(List<GameObject> characters, Ability ability) {
        foreach (var container in ability.actionContainers) {
            if (container.action == this) { continue; }
            foreach (var character in characters) {
                container.action.Condition(character.Position(), origin, parentGO, parentItem, ability, container);
            }
        }
    }

    public override IEnumerator StackAction() {
        yield return null;
    }
}