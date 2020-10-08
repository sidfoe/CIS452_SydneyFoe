/*
 * Sydney Foe
 * Assignment 11
 * GameManager
 * Controls the game. Checks if the game has started and if the player has won or lost. It also is the client for the facade pattern and calls the facade.
 */

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public SubManager sm;
    public GameObject cube1;
    public GameObject cube2;
    public GameObject cube3;
    private int stage = 1;

    public GameObject startPanel;
    public bool canPlay = false;

    public TextMeshProUGUI timeText;
    public float playTime = 0;

    public GameObject lose;
    public GameObject win;


    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            startPanel.SetActive(false);
            canPlay = true;
        }

        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }

        if(canPlay == true)
        {
            playTime -= Time.deltaTime;
            timeText.text = "Time :" + Mathf.Round(playTime);

            if(playTime <= 0)
            {
                canPlay = false;
                lose.SetActive(true);
            }
        }

        if(cube1.GetComponent<Cube>().hit == true)
        {
            stage = sm.OneToTwo();
            cube1.GetComponent<Cube>().hit = false;
        }

        if (cube2.GetComponent<Cube>().hit == true)
        {
            stage = sm.TwoToThree();
            cube2.GetComponent<Cube>().hit = false;
        }

        if (cube3.GetComponent<Cube>().hit == true)
        {
            cube3.GetComponent<Cube>().hit = false;
            //end game
            canPlay = false;
            win.SetActive(true);
        }
    }
}
