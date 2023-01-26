using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Race", menuName = "Character Creator/Race")]
public class CCRace : ScriptableObject {
    public List<Sprite> bodies;
    public List<Sprite> features;
    public List<ItemAbstract> abilities;
}
