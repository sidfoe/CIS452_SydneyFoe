/*
 * Sydney Foe
 * CapsuleFactory
 * Assignment 6
 * Factory for the capsule type of food. Creates all the different capsule variations
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CapsuleFactory : FoodStore
{
    public override void CreateFood(string type, GameObject foo)
    {
        Debug.Log(foo.name);

        if (type.Equals("redcapsule"))
        {
            foo.AddComponent<RedCapsule>();
            foo.GetComponent<RedCapsule>().ChangeColor();
        }

        if (type.Equals("orangecapsule"))
        {
            foo.AddComponent<OrangeCapsule>();
            foo.GetComponent<OrangeCapsule>().ChangeColor();
        }

        if (type.Equals("greencapsule"))
        {
            foo.AddComponent<GreenCapsule>();
            foo.GetComponent<GreenCapsule>().ChangeColor();
        }

        if (type.Equals("bluecapsule"))
        {
            foo.AddComponent<BlueCapsule>();
            foo.GetComponent<BlueCapsule>().ChangeColor();
        }

        if (type.Equals("purplecapsule"))
        {
            foo.AddComponent<PurpleCapsule>();
            foo.GetComponent<PurpleCapsule>().ChangeColor();
        }
    }
}
