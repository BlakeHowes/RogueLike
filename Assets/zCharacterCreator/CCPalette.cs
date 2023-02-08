using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CCPalette", menuName = "Character Creator /Palette")]
public class CCPalette : ScriptableObject {
    public Color lightestColour = Color.white;
    public Color lightColour = Color.white;
    public Color midColour = Color.white;
    public Color darkColour = Color.white;
    public Color darkestColour = Color.white;
}