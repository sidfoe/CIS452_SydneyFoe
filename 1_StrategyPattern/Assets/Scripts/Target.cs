/*
 * Sydney Foe
 * Target
 * CIS 452 Assignment 2
 * Sets up the target super class where targets will draw their behaviour
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Target : MonoBehaviour
{
    public Transform start;
    public Transform end;

    public bool startLeft;

    public Movement MoveBehaviour;

    public abstract void Shot();

    public void DoMove()
    {
        MoveBehaviour.Move();
    }

    private void Update()
    {
        DoMove();
    }
}
