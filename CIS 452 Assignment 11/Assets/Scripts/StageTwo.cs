/*
 * Sydney Foe
 * Assignment 11
 * StageThree
 * Sets up stage three subsystem. Turns on and off and returns stage num
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageTwo : MonoBehaviour
{
    public GameObject stage;

    public void TurnOnStageTwo()
    {
        stage.SetActive(true);
    }

    public void TurnOffStageTwo()
    {
        stage.SetActive(false);
    }

    public int StageNum()
    {
        return 2;
    }
}
