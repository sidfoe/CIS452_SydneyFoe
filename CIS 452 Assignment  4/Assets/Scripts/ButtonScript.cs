/*
 * Sydney Foe
 * ButtonScript
 * Assignment 4
 * Controls buttons and spwans the prefabs for the cube and sphere when clicked
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    public Moveable obj;

    public GameObject cube;
    public GameObject sphere;
    public GameObject can;

    public void SpawnSphere()
    {
        GameObject g = Instantiate(sphere, new Vector3(0, .5f, 0), Quaternion.identity);
        can.SetActive(false); //turns canvas off so no more can be spawned
        obj = g.GetComponent<Sphere>();
        GameManager.canPlay = true;
    }

    public void SpawnCube()
    {
        GameObject g = Instantiate(cube, new Vector3(0, .5f, 0), Quaternion.identity);
        can.SetActive(false); //turns canvas off so no more can be spawned
        obj = g.GetComponent<Cube>();
        GameManager.canPlay = true;
    }
}

