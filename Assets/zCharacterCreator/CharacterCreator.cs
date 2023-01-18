using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class CharacterCreator : MonoBehaviour {
    public static CharacterCreator i;
    public List<Race> races;
    public List<Sprite> hair;
    public List<LoadOut> loadouts;
    public List<GameObject> characters;
    public GameObject editingCharacter;
    public void Awake() {
        i = this;
    }
    public void NextRace(int direction) {
        var info = editingCharacter.GetComponent<CInfo>();
        var race = info.race;
        int i = 0;
        foreach (Race race1 in races) {
            if (race1 == race) {
                break;
            }
            i++;
        }
        if (i >= races.Count) {
            i = 0;
        }
        UpdateBody(info);
    } 

    public void UpdateBody(CInfo info) {
        var rend = editingCharacter.GetComponent<SpriteRenderer>();
        rend.sprite = info.race.femaleBody;
        if (info.male) rend.sprite = info.race.maleBody;
    }

    public void ToggleGender() {
        var info = editingCharacter.GetComponent<CInfo>();
        info.male = !info.male;
        UpdateBody(info);
    }
}
