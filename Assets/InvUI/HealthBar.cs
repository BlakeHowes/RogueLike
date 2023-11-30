using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    public Slider healthSlider;
    public GameObject entireUILayout;
    public GameObject armourLayout;
    public TextMeshProUGUI armourText;
    public GameObject statusEffectLayout;
    private Inventory inventory;
    private Stats stats;

    public void InitializeHealthbar(Stats stats, Inventory inventory) {
        this.stats = stats;
        this.inventory = inventory;
    }

    public void UpdateStatusEffectUI() {
        if (statusEffectLayout == null) { Debug.LogError("Status Effect UI Missing"); return; }
        foreach (Transform child in statusEffectLayout.transform) {
            child.gameObject.SetActive(false);
        }
        int i = 0;
        int statusEffectsTotal = inventory.statusEffects.Count;
        if (statusEffectsTotal > 0) {
            entireUILayout.SetActive(true);
            if (statusEffectsTotal > 6) {
                Debug.LogError("Improve the status effect UI, its trying to show more than 6 :(");
            }
        }
        foreach (var statusEffect in inventory.statusEffects) {
            if (!statusEffect) { continue; }
            var child = statusEffectLayout.transform.GetChild(i);
            var tile = statusEffect.tile;
            if (tile == null) { Debug.LogError("Tile missing for " + statusEffect); continue; }
            child.GetComponent<Image>().sprite = tile.sprite;
            child.gameObject.SetActive(true);
            i++;
        }
    }

    public void UpdateHealthBar() {
        armourText.text = stats.armour.ToString();
        if (stats.health < stats.maxHealthTemp || stats.armour < stats.maxArmourTemp || inventory.statusEffects.Count > 0) {
            entireUILayout.SetActive(true);
            healthSlider.maxValue = stats.maxHealthTemp;
            healthSlider.value = stats.health;
            transform.position = stats.gameObject.transform.position;
            
            if(stats.armour < stats.maxArmourTemp) {
                armourLayout.SetActive(true);
            }
            else {
                armourLayout.SetActive(false);
            }
        }
        else {
            entireUILayout.SetActive(false);
        }
        UpdateStatusEffectUI();
    }
}
