using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "LoadOut", menuName = "ScriptablePrefabs/LoadOut")]
public class LoadOut : ScriptableObject
{
    public List<ItemAbstract> items = new List<ItemAbstract>();
    public ItemAbstract mainHand;
    public ItemAbstract offHand;
    public ItemAbstract helmet;
    public ItemAbstract armour;
    public List<ItemAbstract> trinkets;
}
