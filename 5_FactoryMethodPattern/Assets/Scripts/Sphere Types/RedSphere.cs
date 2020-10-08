/*
 * Sydney Foe
 * RedSphere
 * Assignment 6
 * Changes the color of the food to be the food type that it is
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedSphere : Food
{
    public override void ChangeColor()
    {
        GetComponent<MeshRenderer>().material.color = Color.red;
    }
}
