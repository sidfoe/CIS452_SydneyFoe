using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class State : MonoBehaviour
{
    public GameObject[] insides;
    public Material m;
    public abstract void ChangeColor();
    public abstract int ChangeIngredient();
}
