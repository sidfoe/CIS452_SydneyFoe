/*
 * Sydney Foe
 * SphereFactory
 * Assignment 6
 * Factory for the sphere type of food. Creates all the different sphere variations
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereFactory : FoodStore
{
    public override void CreateFood(string type, GameObject foo)
    {
        Debug.Log(foo.name);
        if (type.Equals("redsphere"))
        {
            foo.AddComponent<RedSphere>();
            foo.GetComponent<RedSphere>().ChangeColor();
        }

        if (type.Equals("orangesphere"))
        {
            foo.AddComponent<OrangeSphere>();
            foo.GetComponent<OrangeSphere>().ChangeColor();
        }

        if (type.Equals("greensphere"))
        {
            foo.AddComponent<GreenSphere>();
            foo.GetComponent<GreenSphere>().ChangeColor();
        }

        if (type.Equals("bluesphere"))
        {
            foo.AddComponent<BlueSphere>();
            foo.GetComponent<BlueSphere>().ChangeColor();
        }

        if (type.Equals("purplesphere"))
        {
            foo.AddComponent<PurpleSphere>();
            foo.GetComponent<PurpleSphere>().ChangeColor();
        }
    }
}
