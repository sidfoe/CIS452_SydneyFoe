using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PurpleState : State
{
    public override void ChangeColor()
    {
        foreach (GameObject g in insides)
        {
            g.GetComponent<MeshRenderer>().material = m;
        }
    }

    public override int ChangeIngredient()
    {
        return 2;
    }
}
