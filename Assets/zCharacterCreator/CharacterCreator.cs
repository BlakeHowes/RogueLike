using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterCreator : MonoBehaviour {
    public List<CCRace> races;
    public List<Sprite> hairs;
    public List<CCLoadout> loadouts;
    public List<Sprite> faces;
    public bool male;
    public CCRace race;
    public Sprite hair;
    public CCLoadout loadout;
    public Sprite face;
    public Inventory inventory;
    public Stats stats;
    public void Start() {
        inventory = GetComponent<Inventory>();
        stats = gameObject.GetComponent<Stats>();
        race = races[0];
        hair = hairs[0];
        loadout = loadouts[0];
    }
    public void NextRace(int direction) {
        stats.baseSprite = NextOption(direction, races, race).bodies[0];
        UpdateCharacter();
    }

    public void NextSex() {
        male = !male;
        NextBody(0);
    }

    public void NextBody(int direction) {
        stats.baseSprite = NextOption(direction, race.bodies, stats.baseSprite);
        UpdateCharacter();
    }

    public T NextOption<T>(int direction, List<T> list, T current) {
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

    public void NextLoadout(int direction) {
        loadout = NextOption(direction,loadouts,loadout);
        inventory.mainHand = loadout.mainHand;
        inventory.offHand = loadout.offHand;
        inventory.helmet = loadout.helmet;
        inventory.armour = loadout.armour;
        inventory.trinkets.Clear();
        foreach(ItemAbstract item in loadout.trinkets) {
            inventory.trinkets.Add(item);
        }
        UpdateCharacter();
    }

    public void NextHair(int direction) {
        hair = NextOption(direction, hairs, hair);
        stats.baseHair = hair;
        UpdateCharacter();
    }

    public void NextFace(int direction) {
        face = NextOption(direction, faces, face);
        stats.baseFace = face;
        UpdateCharacter();
    }

    public void UpdateCharacter() {
        InventoryManager.i.UpdateEquipmentSprites(inventory);
        InventoryManager.i.CreateCharacterSprite(gameObject);
    }
}
