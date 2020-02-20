/*
 * Sydney Foe
 * GameManager
 * Assignment 5
 * Checks to see if the player has messed up three times or not. Also keeps track of how long the player lasts.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text miss;
    public Text timeText;
    public float playTime;

    private int count = 0;

    public static bool canPlay = false;

    public void Update()
    {
        if (count >= 3)
        {
            canPlay = false;
        }

        if (canPlay == true)
        {
            playTime += Time.deltaTime;
            timeText.text = "Time :" + Mathf.Round(playTime);
        }
    }

    private void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("food1"))
        {
            if(col.gameObject.GetComponent<Food1>().finished == false)
            {
                count++;
                miss.text = miss.text + "X ";
            }
        }

        if (col.gameObject.CompareTag("food2"))
        {
            if (col.gameObject.GetComponent<Food2>().finished == false)
            {
                count++;
                miss.text += "X ";
            }
        }

        
    }
}
