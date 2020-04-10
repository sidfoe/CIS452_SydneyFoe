using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public int goalScore = 250;
    public GameObject panel;
    public ScoreSingleton ss;
    public GameObject winText;
    public GameObject loseText;
    public TextMeshProUGUI ballText;
    public int ballCount = 10;
    public bool canDrop = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            canDrop = true;
            panel.SetActive(false);
        }

        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }

        if(ss.score >= goalScore)
        {
            //you win
            winText.SetActive(true);
            canDrop = false;
        }

        if(ballCount == 0 && ss.score < goalScore)
        {
            //lose
            loseText.SetActive(true);
            canDrop = false;
        }

        ballText.text = "Balls: " + ballCount;  
    }
}
