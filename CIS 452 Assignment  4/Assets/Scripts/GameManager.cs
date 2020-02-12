/*
 * Sydney Foe
 * GameManager
 * Assignment 4
 * Sets up timer and size and their text. It checks to see if the player wins and shows text for that
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text timeText;
    public float playTime;
    public float goal;

    public static bool canPlay = false;

    public GameObject win;
    public GameObject lose;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }

        if (canPlay == true)
        {
            playTime -= Time.deltaTime;
            timeText.text = "Time :" + Mathf.Round(playTime);

            if (playTime < 0)
            {
                canPlay = false;
            }
        }

        if (canPlay == false && playTime <= 0)
        {
            if(Sphere.sizeCheck >= goal || Cube.sizeCheck >= goal)
            {
                win.SetActive(true);
            }

            else
            {
                lose.SetActive(true);
            }
        }
    }
}
