using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Buff Party", menuName = "Mods/Buff Party")]
public class BuffAreaAroundCharacter : ItemAbstract
{
    public int healingBase;
    public int healingBonus;

    public override bool Call(Vector3Int position, Vector3Int origin) {
        var party = PartyManager.i.party;

        foreach(GameObject member in party) {
            if (healingBase > 0) {
                var amount = Random.Range(healingBase, healingBonus);
                member.GetComponent<Stats>().Heal(amount);
            }
        }
        Actions.i.ChangeActionPoints(1f);
        return true;
    }

    public override string Description() {
        string description = "";
        if (healingBase > 0) {
            description += "Heals party for: "+healingBase+"-" + healingBonus+" health";
        }
        return description;
    }
}
