/*
 * Sydney Foe
 * OrangeSphere
 * Assignment 6
 * Changes the color of the food to be the food type that it is
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrangeSphere : Food
{
    public override void ChangeColor()
    {
        Color c = new Color(1, .337f, 0, 1);
        GetComponent<MeshRenderer>().material.color = c;
    }
}
