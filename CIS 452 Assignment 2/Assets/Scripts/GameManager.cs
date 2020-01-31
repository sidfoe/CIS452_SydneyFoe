using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    private int pos = 0; //height/level
    private int time = 0;
    private int loc = 0; //left or right
    private int tar = 0; //duck or bullseye

    public GameObject duck; //1
    public GameObject bullseye; //2

    private bool spawnAgain = true;

    public float[] heights = new float[] { -.567f, 0.038f, .493f }; //which level, lower mid upper
    public float[] zLoc = new float[] { -5.334f, -4.662f, -4.028f }; //z position
    public float[] sides = new float[] { -2.97f, 3.5f }; //left or right

    public Text scoreText;
    public static int score;

    public Texture2D crosshairImage;

    public Text timeText;
    public float playTime = 0;
    private float currentTime = 0;

    // Update is called once per frame
    void Update()
    {
        if (playTime > 0)
        {
            if (spawnAgain == true)
            {
                time = Random.Range(1, 5);
                spawnAgain = false;
                StartCoroutine("Spawn");
            }

            playTime -= Time.deltaTime;
            timeText.text = "Time :" + Mathf.Round(playTime);
            scoreText.text = "Score: " + score;
        }
    }

    void OnGUI()
    {
        float xMin = Screen.width - (Screen.width - Input.mousePosition.x) - (crosshairImage.width / 2);
        float yMin = (Screen.height - Input.mousePosition.y) - (crosshairImage.height / 2);
        GUI.DrawTexture(new Rect(xMin, yMin, (crosshairImage.width), (crosshairImage.height)), crosshairImage);
    }

    IEnumerator Spawn()
    {
        pos = Random.Range(0, 3); //which height
        tar = Random.Range(0, 2); //which prefab
        loc = Random.Range(0, 2); //which side
        GameObject g;

        if (tar == 0) //duck
        {
            g = Instantiate(duck, new Vector3(sides[loc], heights[pos], zLoc[pos]), Quaternion.identity);

            if (loc == 0)
            {
                g.GetComponent<Target>().startLeft = true;
            }

            if (loc == 1)
            {
                g.GetComponent<Target>().startLeft = false;
            }

            g.GetComponent<Duck>().DoMove();
        }


        if(tar == 1) //bullseye
        {
            g = Instantiate(bullseye, new Vector3(sides[loc], heights[pos], zLoc[pos]), Quaternion.Euler(90,0,0));

            if (loc == 0)
            {
                g.GetComponent<Target>().startLeft = true;
            }

            if (loc == 1)
            {
                g.GetComponent<Target>().startLeft = false;
            }

            //g.GetComponent<Bullseye>().DoMove();
        }

        

        yield return new WaitForSeconds(time);
        spawnAgain = true;
    }
}
