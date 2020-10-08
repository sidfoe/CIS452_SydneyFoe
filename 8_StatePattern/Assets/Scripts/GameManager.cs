using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public bool ingredientAdded = false;
    public int ingredientNeeded;
    public bool canClick = false;
    public GameObject insides;
    public int neededCorrect = 5;
    public int correctCount = 0;

    public GameObject lose;
    public GameObject win;
    public TextMeshProUGUI count;
    public GameObject count2;
    public GameObject panel;

    public State purpleState { get; set; }
    public State idleState { get; set; }
    public State redState { get; set; }
    public State blueState { get; set; }
    public State currentState { get; set; }

    // Use this for initialization
    void Start()
    {
        idleState = insides.GetComponent<IdleState>();
        purpleState = insides.GetComponent<PurpleState>();
        redState = insides.GetComponent<RedState>();
        blueState = insides.GetComponent<BlueState>();

        currentState = idleState;
        
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            panel.SetActive(false);
            count2.SetActive(true);
            StartCoroutine("StateChange");
        }

        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }
    }

    public void RedState() 
    {
        redState.ChangeColor();
        ingredientNeeded = redState.ChangeIngredient();
    }

    public void PurpleState()
    {
        purpleState.ChangeColor();
        ingredientNeeded = purpleState.ChangeIngredient();
    }

    public void BlueState()
    {
        blueState.ChangeColor();
        ingredientNeeded = blueState.ChangeIngredient();
    }

    public void IdleState()
    {
        idleState.ChangeColor();
        idleState.ChangeIngredient();
    }

    public IEnumerator StateChange()
    {
        currentState = idleState;
        IdleState();
        int rand = Random.Range(2, 6);
        yield return new WaitForSeconds(rand);
        int state = Random.Range(0, 3);

        switch (state)
        {
            case 0:
                currentState = purpleState;
                PurpleState();
                break;
            case 1:
                currentState = redState;
                RedState();
                break;
            case 2:
                currentState = blueState;
                BlueState();
                break;
        }

        canClick = true;
        StartCoroutine("WaitToSwitch");
    }

    public IEnumerator WaitToSwitch()
    {
        yield return new WaitForSeconds(.9f);

        ParticleSystem ps = insides.GetComponent<ParticleSystem>();

        ParticleSystem.MainModule ma = ps.main;

        if (ingredientAdded == true) //did it and right
        {
            currentState = idleState;
            Debug.Log("Correct");
            ma.startColor = Color.green;
            canClick = false;
            yield return new WaitForSeconds(1);
            ma.startColor = Color.grey;

            correctCount++;
            count.text = "Correct: " + correctCount;

            if (correctCount == neededCorrect)
            {
                win.SetActive(true);
            }

            else
            {
                StartCoroutine("StateChange");
            }
        }

        else //wrong
        {
            currentState = idleState;
            Debug.Log("Wrong");
            ma.startColor = Color.red;
            canClick = false;
            yield return new WaitForSeconds(1);
            ma.startColor = Color.grey;
            //gameover
            lose.SetActive(true);
        }
        
        
    }
}
