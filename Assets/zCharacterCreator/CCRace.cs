using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "Race", menuName = "Character Creator/Race")]
public class CCRace : ScriptableObject {
    public List<CCPalette> bodyPalettes;
    public List<Sprite> features;
    public List<CCPalette> featurePalettes;
    public List<ItemAbstract> permanentTraits;

    public Sprite extraPartHead;
    public Sprite extraPartBody;
}
