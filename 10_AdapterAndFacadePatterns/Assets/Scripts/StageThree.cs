/*
 * Sydney Foe
 * Assignment 11
 * StageThree
 * Sets up stage three subsystem. Turns on and off and returns stage num
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageThree : MonoBehaviour
{
    public GameObject stage;

    public void TurnOnStageThree()
    {
        stage.SetActive(true);
    }

    public void TurnOffStageThree()
    {
        stage.SetActive(false);
    }

    public int StageNum()
    {
        return 3;
    }

}
