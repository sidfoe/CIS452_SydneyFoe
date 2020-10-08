/*
 * Sydney Foe
 * FoodFactory
 * Assignment 5
 * Creates the food. Sets up the speed and stuff.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodFactory : MonoBehaviour
{
   public GameObject CreateFood(string type, GameObject fab, float spe)
   {
        GameObject foo = Instantiate(fab, new Vector3(-2, .6f, -4.62f), Quaternion.identity);

        if(type.Equals("Food1"))
        {
            foo.AddComponent<Food1>();
            foo.GetComponent<Food1>().speed = spe;
        }
        
        else if(type.Equals("Food2"))
        {
            foo.AddComponent<Food2>();
            foo.GetComponent<Food2>().speed = spe;
        }

        else if (type.Equals("Food3"))
        {
            foo.AddComponent<Food3>();
            foo.GetComponent<Food3>().speed = spe;
        }

        return foo;
   }
}
