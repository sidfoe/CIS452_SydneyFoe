/*
 * Sydney Foe
 * GameManager
 * Assignment 3
 * This script controls the opening panel. It also checks the goal script to see if both cubes are on the goal.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public GameObject leftGoal;
    public GameObject rightGoal;
    public static bool canPlay = false;
    public GameObject panel;
    private bool once = false;
    public GameObject win;

    // Update is called once per frame
    void Update()
    {
        if(rightGoal.GetComponent<GoalScript>().cubeHere == true && leftGoal.GetComponent<GoalScript>().cubeHere)
        {
            if(once == false)
            {
                DoIt();
            }
            canPlay = false;
            //Debug.Log("Win");
        }

        if(Input.GetKeyDown(KeyCode.Space))
        {
            canPlay = true;
            panel.SetActive(false);
        }

        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }
    }

    public void DoIt()
    {
        once = true;
        win.SetActive(true);
        rightGoal.GetComponent<ParticleSystem>().Play();
        leftGoal.GetComponent<ParticleSystem>().Play();
    }
}
