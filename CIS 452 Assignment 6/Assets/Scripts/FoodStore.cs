/*
 * Sydney Foe
 * FoodStore
 * Assignment 6
 * Sets up the different factories and how to create with them and order food
 * */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class FoodStore
{
    public abstract void CreateFood(string type, GameObject fab);

    public void OrderFood(string type, GameObject fab)
    {
        Debug.Log(type);
        CreateFood(type, fab);
    }
}
