/*
 * Sydney Foe
 * Food Order
 * Assignment 5
 * Sets up the starting panel and puts that away when the player starts. Orders food from the factory. Randomly generates the string of the food ordered.
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FoodOrder : MonoBehaviour
{
    public GameObject panel;
    public GameObject circle;
    public GameObject square;
    public GameObject capsule;

    public FoodFactory ff;
    public GameObject food1;
    public GameObject food2;
    public GameObject food3;

    public float min;
    public float max;

    public float speed = .0015f;

    // Start is called before the first frame update
    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            panel.SetActive(false);
            circle.SetActive(true);
            square.SetActive(true);
            capsule.SetActive(true);
            GameManager.canPlay = true;
            StartCoroutine("Spawn");
        }

        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }
    }

    void orderFood(string type, GameObject fab)
    {
        GameObject foo;

        foo = ff.CreateFood(type, fab, speed);

        foo.GetComponent<Food>().ToComplete();
    }

    IEnumerator Spawn()
    {
        if (GameManager.canPlay == true)
        {
            float rand = Random.Range(min, max);
            yield return new WaitForSeconds(rand);

            int type = Random.Range(0, 3);

            if(type == 0)
            {
                orderFood("Food1", food1);
            }

            if(type == 1)
            {
                orderFood("Food2", food2);
            }

            if (type == 2)
            {
                orderFood("Food3", food3);
            }

            if (min > 0)
            {
                min -= .1f;
            }

            if (max > 0)
            {
                max -= .1f;
            }

            speed += .00005f;

        
            StartCoroutine("Spawn");
        }
    }
}
