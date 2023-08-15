using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static PartyManager;
using static UnityEngine.UI.Image;

[CreateAssetMenu(fileName = "Skill", menuName = "Items/Skill")]
public class Skill : ItemAbstract {
    public Type type;
    public Tags targetsTags;
    [Range(0, 16)]
    public int range = 5;
    public int AOE = 0;
    [Range(0, 6)]
    public int actionPointCost = 2;
    [NonSerialized] public int actionPointCostTemp;
    [Range(0, 17)]
    public int coolDown = 2;
    [Range(0f, 3f)]
    public float CameraZoomDuration;

    public bool requireTarget = true;
    public GameObject particles;
    public bool useParticlesInWholeArea;

    public List<ItemAbstract> subItems;
    public List<ItemAbstract> statusEffects = new List<ItemAbstract>();
    public string customDescription;

    private List<string> targetStrings = new List<string>();

    public Vector3Int targetedStartPosition;
    public bool startPositionSet = false;
    //[HideInInspector] public GameObject parentGO;

    public List<Vector3Int> targets = new List<Vector3Int>();

    public enum Type {
        SingleTileUnderMouse,
        SelectTwoGOUnderMouse,
        AreaUnderMouse,
        JustTheUserTile,
        AreaAroundUser
    }

    public List<string> GetTags(GameObject parentGO) {
        targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        return targetStrings;
    }

    public bool CheckValidity(Vector3Int position, Vector3Int origin, GameObject parentGO) {
        var coolDownTimer = parentGO.GetComponent<Inventory>().GetCoolDown(this);
        if (parentGO.GetComponent<Stats>().actionPoints < actionPointCost) { return false; }
        if (coolDownTimer > 0) { return false; }
        if (type == Type.SingleTileUnderMouse) {
            if (!position.InRange(origin, range)) { return false; }
        }

        return true;
    }

    public void SingleTarget(Vector3Int position, Vector3Int origin) {
        var target = position.GameObjectGo();


        foreach (var item in subItems) {
            //item.Call(position, origin, CallType.Attack, parentGO, this);
        }
        if (!target && requireTarget) { return; }
        //if (!targetStrings.Contains(target.tag)) { return; }
        foreach (var item in statusEffects) {
            position.GameObjectGo().GetComponent<Inventory>().AddStatusEffect(position, origin, item);
        }
        if (target) target.GetComponent<Stats>().RefreshCharacter(position);
        if (particles) { EffectManager.i.CreateSingleParticleEffect(position, particles); }
    }

    public void MultiTarget(Vector3Int position, Vector3Int origin) {
        //targetStrings = ConvertFlagsEnumToStringList(targetsTags, parentGO);
        var circle = GridManager.i.goMethods.PositionsInSight(origin.GameObjectGo().GetComponent<Stats>().skillRangeTemp, position);
        if (type == Type.AreaUnderMouse) { circle = GridManager.i.goMethods.PositionsInSight(AOE, position); }
        foreach (var pos in circle) {
            if (particles && useParticlesInWholeArea) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
            var target = pos.GameObjectGo();
            if (target) {
                if (!targetStrings.Contains(target.tag)) { continue; }
                foreach (var item in statusEffects) {
                    target.GetComponent<Inventory>().AddStatusEffect(pos, origin, item);
                }
            }

            foreach (var item in subItems) {
                //item.Call(pos, origin, CallType.Attack, parentGO, this);
            }
            if (target) target.GetComponent<Stats>().RefreshCharacter(pos);
            if (particles && !useParticlesInWholeArea) { EffectManager.i.CreateSingleParticleEffect(pos, particles); }
        }
    }

    public override string Description() {
        string description = name + ": ";
        description += customDescription;
        if (customDescription == "") {
            foreach (var item in subItems) {
                description += item.Description();
            }
        }
        description += " (" + actionPointCost + " AP)";
        return description;
    }
}
