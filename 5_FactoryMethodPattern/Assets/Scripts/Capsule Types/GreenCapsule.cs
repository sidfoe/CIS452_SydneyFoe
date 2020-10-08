/*
 * Sydney Foe
 * GreenCapsule
 * Assignment 6
 * Changes the color of the food to be the food type that it is
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GreenCapsule : Food
{
    public override void ChangeColor()
    {
        gameObject.GetComponent<MeshRenderer>().material.color = Color.green;
    }
}
