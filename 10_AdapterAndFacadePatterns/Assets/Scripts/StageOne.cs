/*
 * Sydney Foe
 * Assignment 11
 * StageOne
 * Sets up stage one subsystem. Turns on and off and returns stage num
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageOne : MonoBehaviour
{
    public GameObject stage;

    public void TurnOnStageOne()
    {
        stage.SetActive(true);
    }

    public void TurnOffStageOne()
    {
        stage.SetActive(false);
    }

    public int StageNum()
    {
        return 1;
    }
}
