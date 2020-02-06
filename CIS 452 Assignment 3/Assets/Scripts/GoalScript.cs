/*
 * Sydney Foe
 * GoalScript
 * Assignment 3
 * This script checks to see if both of the blue cubes land on the green cubes at the same time.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalScript : MonoBehaviour
{
    public bool cubeHere = false;
    public ParticleSystem ps;

    public void Start()
    {
        ps = GetComponent<ParticleSystem>();
    }

    private void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("cube"))
        {
            cubeHere = true;
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.gameObject.CompareTag("cube"))
        {
            cubeHere = false;
        }
    }
}
