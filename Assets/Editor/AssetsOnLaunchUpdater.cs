using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEditor;
using UnityEngine;
[InitializeOnLoad]
public static class AssetsOnLaunchUpdater {
    static AssetsOnLaunchUpdater() {
        EditorApplication.playModeStateChanged += UpdateAssets;
    }

    private static void UpdateAssets(PlayModeStateChange state) {
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
}
