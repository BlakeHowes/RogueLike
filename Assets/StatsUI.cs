using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class StatsUI : MonoBehaviour
{
    public TextMeshProUGUI health;
    public TextMeshProUGUI armour;
    public TextMeshProUGUI ap;
    public void UpdateStats(GameObject go) {
        var stats = go.GetComponent<Stats>();
        health.text = "Health: " +stats.health +"/"+stats.maxHealthTemp;
        armour.text = "Armour: " + stats.armour + "/"+stats.maxArmourTemp;
        ap.text = "AP: " + stats.actionPoints + "/"+stats.actionPointsTemp;
    }
}
