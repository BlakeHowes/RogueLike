using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Loadout", menuName = "Character Creator/Loadout")]
public class CCLoadout : ScriptableObject {
    public ItemAbstract mainHand;
    public ItemAbstract offHand;
    public ItemAbstract helmet;
    public ItemAbstract armour;
    public List<ItemAbstract> trinkets;
}
