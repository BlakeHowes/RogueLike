using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class CCAssets : MonoBehaviour
{
    public static CCAssets i;
    public List<Sprite> bodies,hairs,faces = new List<Sprite>();
    public List<CCRace> races = new List<CCRace>();
    public List<CCLoadout> loadouts = new List<CCLoadout>();
    public List<CCPalette> hairPalettes,facePalettes = new List<CCPalette>();
    public List<CCPalette> undeadPalettes = new List<CCPalette>();
    public List<ItemAbstract> undeadTraits = new List<ItemAbstract> ();
    public void Awake() {
        i = this;
        UpdateAssets();
        var raceResources = Resources.LoadAll<CCRace>("Character Creator/Races");
        foreach (CCRace race in raceResources) { races.Add(race); }
        var loadoutResources = Resources.LoadAll<CCLoadout>("Character Creator/ClassesLoadouts");
        foreach (CCLoadout loadout in loadoutResources) { loadouts.Add(loadout); }
        var hairResources = Resources.LoadAll<Sprite>("Character Creator/Hair");
        foreach (Sprite sprite in hairResources) { hairs.Add(sprite); }
        var hairPaletteResources = Resources.LoadAll<CCPalette>("Character Creator/Hair");
        foreach (CCPalette palette in hairPaletteResources) { hairPalettes.Add(palette); }
        var faceResources = Resources.LoadAll<Sprite>("Character Creator/Faces");
        foreach (Sprite sprite in faceResources) { faces.Add(sprite); }
        var facePaletteResources = Resources.LoadAll<CCPalette>("Character Creator/Faces");
        foreach (CCPalette palette in facePaletteResources) { facePalettes.Add(palette); }
        var undeadPaletteResources = Resources.LoadAll<CCPalette>("Character Creator/Races/Undead");
        foreach (CCPalette palette in undeadPaletteResources) { undeadPalettes.Add(palette); }
    }

    private static void UpdateAssets() {
        var races = Resources.LoadAll<CCRace>("Character Creator/Races");
        foreach (var race in races) {
            string path = "Character Creator/Races/" + race.name;
            race.bodyPalettes.Clear();
            race.featurePalettes.Clear();
            var palettes = Resources.LoadAll<CCPalette>(path + "/Palettes");
            foreach (var palette in palettes) {
                if (palette.name.Contains("Body")) { race.bodyPalettes.Add(palette); }
                if (palette.name.Contains("Feature")) { race.featurePalettes.Add(palette); }
            }
            var traits = Resources.LoadAll<ItemAbstract>(path + "/Traits");
            race.permanentTraits.Clear();
            foreach (var trait in traits) {
                race.permanentTraits.Add(trait);
            }
            var featureResources = Resources.LoadAll<Sprite>(path + "/Features");
            race.features.Clear();
            foreach (var feature in featureResources) {
                race.features.Add(feature);
            }
            var extraParts = Resources.LoadAll<Sprite>(path);
            race.extraPartHead = null;
            race.extraPartBody = null;
            foreach (var sprite in extraParts) {
                if (sprite.name.Contains("Head")) { race.extraPartHead = sprite; }
                if (sprite.name.Contains("Body")) { race.extraPartBody = sprite; }
            }
        }
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
