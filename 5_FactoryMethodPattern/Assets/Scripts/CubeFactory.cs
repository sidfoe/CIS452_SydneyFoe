/*
 * Sydney Foe
 * CubeFactory
 * Assignment 6
 * Factory for the cube type of food. Creates all the different cube variations
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeFactory : FoodStore
{
    public override void CreateFood(string type, GameObject foo)
    {
        Debug.Log(foo.name);

        if (type.Equals("redcube"))
        {
            foo.AddComponent<RedCube>();
            foo.GetComponent<RedCube>().ChangeColor();
        }

        if (type.Equals("orangecube"))
        {
            foo.AddComponent<OrangeCube>();
            foo.GetComponent<OrangeCube>().ChangeColor();
        }

        if (type.Equals("greencube"))
        {
            foo.AddComponent<GreenCube>();
            foo.GetComponent<GreenCube>().ChangeColor();
        }

        if (type.Equals("bluecube"))
        {
            foo.AddComponent<BlueCube>();
            foo.GetComponent<BlueCube>().ChangeColor();
        }

        if (type.Equals("purplecube"))
        {
            foo.AddComponent<PurpleCube>();
            foo.GetComponent<PurpleCube>().ChangeColor();
        }
    }
}
