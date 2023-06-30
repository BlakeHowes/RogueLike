using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static ItemStatic;

[CreateAssetMenu(fileName = "Sprite Changer", menuName = "Mods/Sprite Changer")]
public class SpriteChanger : ItemAbstract {
    public GameObject gameobject;
    public List<ChangeSpritePercentage> changeSprites;
    public override void Call(Vector3Int position, Vector3Int origin, Signal signal) {
        if(signal == Signal.TakeDamage) {
            var go = position.GameObjectGo();
            if (!go) { return; }
            var stats = go.GetComponent<Stats>();
            var healthPercentage = stats.health/stats.maxHealthBase * 100;
            Debug.Log("Health Percentage " + healthPercentage);
            foreach (var changesprite in changeSprites) { 
                if(healthPercentage <= changesprite.percentage) {
                    go.GetComponent<SpriteRenderer>().sprite = changesprite.sprite;
                }
            }
        }
    }
    public override string Description() {
        throw new System.NotImplementedException();
    }

    public override IEnumerator Action() {
        yield break;
    }
}

[System.Serializable]
public struct ChangeSpritePercentage {
    public Sprite sprite;
    [Range(0,100)]public float percentage;
}