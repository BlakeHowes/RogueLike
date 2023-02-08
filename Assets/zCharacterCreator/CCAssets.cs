using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CCAssets : MonoBehaviour
{
    public static CCAssets i;
    public List<Sprite> bodies,hairs,faces = new List<Sprite>();
    public List<CCRace> races = new List<CCRace>();
    public List<CCLoadout> loadouts = new List<CCLoadout>();
    public List<CCPalette> hairPalettes,facePalettes = new List<CCPalette>();
    public void Awake() {
        i = this;
        var raceResources = Resources.LoadAll<CCRace>("Character Creator/Races");
        foreach (CCRace race in raceResources) { races.Add(race); }
        var loadoutResources = Resources.LoadAll<CCLoadout>("Character Creator/Loadouts");
        foreach (CCLoadout loadout in loadoutResources) { loadouts.Add(loadout); }
        var hairResources = Resources.LoadAll<Sprite>("Character Creator/Hair");
        foreach (Sprite sprite in hairResources) { hairs.Add(sprite); }
        var hairPaletteResources = Resources.LoadAll<CCPalette>("Character Creator/Palettes/Hair");
        foreach (CCPalette palette in hairPaletteResources) { hairPalettes.Add(palette); }
        var faceResources = Resources.LoadAll<Sprite>("Character Creator/Faces");
        foreach (Sprite sprite in faceResources) { faces.Add(sprite); }
        var facePaletteResources = Resources.LoadAll<CCPalette>("Character Creator/Palettes/Faces");
        foreach (CCPalette palette in facePaletteResources) { facePalettes.Add(palette); }
    }

    public T NextOption<T>(int direction, List<T> list, T current) {
        Debug.Log("next item");
        int i = 0;
        foreach (T option in list) {
            if (EqualityComparer<T>.Default.Equals(option, current)) { break; }
            i++;
        }
        i += direction;
        if (i < 0) { i = list.Count - 1; }
        if (i > list.Count - 1) { i = 0; }
        return list[i];
    }
}
