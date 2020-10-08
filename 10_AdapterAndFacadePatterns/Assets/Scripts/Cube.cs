/*
 * Sydney Foe
 * Assignment 11
 * Cube
 * Checks to see if the cube button has be hit by player
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube : MonoBehaviour
{
    public bool hit = false;

    private void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("Player"))
        {
            hit = true;
        }
    }
}
