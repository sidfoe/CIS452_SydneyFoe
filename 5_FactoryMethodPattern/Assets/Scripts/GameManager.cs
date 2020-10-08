/*
 * Sydney Foe
 * GameManager
 * Assignment 6
 * Runs the game, keeps track of if the player wins or loses. Creates new orders and starts the order creating process.
 * */

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public string[] shapes = new string[3]{"cube", "sphere", "capsule"};
    public string[] colors = new string[5] {"red", "orange", "green", "blue", "purple"};

    public string orderShape;
    public string orderColor;

    private bool newOrder = false;

    public GameObject startPanel;

    public TextMeshProUGUI orderText;

    public FoodStore fs;

    public string ttype;

    public GameObject cube;
    public GameObject sphere;
    public GameObject capsule;
    public GameObject fab;

    public string shapeChoose;
    public string colorChoose;

    private ParticleSystem ps;
    ParticleSystem.MainModule ma;

    public TextMeshProUGUI countText;
    private int count;

    public GameObject winText;
    public GameObject loseText;

    private float timer = 20;
    public TextMeshProUGUI timeText;
    private bool startTime = false;

    public GameObject shapeButtons;
    public GameObject colorButtons;

    // Start is called before the first frame update
    void Start()
    {
        ps = GetComponent<ParticleSystem>();
        ma = ps.main;
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space) && startPanel.activeSelf == true)
        {
            newOrder = true;
            startTime = true;
            startPanel.SetActive(false);
        }

        if(newOrder == true)
        {
            newOrder = false;
            CreateOrder();
        }
        
        if(startTime == true)
        {
            timer -= Time.deltaTime;
            timeText.text = "Time Left: " + (int)timer;

            if(timer <= 0)
            {
                startTime = false;
                shapeButtons.SetActive(false);
                colorButtons.SetActive(false);

                if(count >= 10)
                {
                    winText.SetActive(true);
                }

                else
                {
                    loseText.SetActive(true);
                }
            }
        }

        if(Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }
    }

    public void CreateOrder()
    {
        int rand = Random.Range(0, 3);

        orderShape = shapes[rand];

        rand = Random.Range(0, 5);

        orderColor = colors[rand];

        orderText.text = "I want a " + orderShape + " that is " + orderColor + ".";
    }

    public void CheckOrder()
    {
        if(orderShape.Equals(shapeChoose) && orderColor.Equals(colorChoose))
        {
            //correct order ding ding
            count++;
            countText.text = "Correct Orders: " + count;
            ma.startColor = Color.green;
            ps.Play();
            CreateOrder();
        }

        else
        {
            //wrong order
            ma.startColor = Color.red;
            ps.Play();
            CreateOrder();
        }

        StartCoroutine("WaitDestory");
    }

    IEnumerator WaitDestory()
    {
        yield return new WaitForSeconds(.2f);
        Destroy(GameObject.FindGameObjectWithTag("food"));
    }

    public void StartFactory(string type)
    {
        ttype = type;

        if (type.Equals("cube"))
        {
            fab = Instantiate(cube, new Vector3(0, 1.5f, 0), Quaternion.Euler(-27.194f, 34.871f, -6.203f));
            shapeChoose = "cube";

            fs = new CubeFactory();
        }

        if (type.Equals("sphere"))
        {
            fab = Instantiate(sphere, new Vector3(0, 1.5f, 0), Quaternion.Euler(-27.194f, 34.871f, -6.203f));
            shapeChoose = "sphere";
            fs = new SphereFactory();
        }

        if (type.Equals("capsule"))
        {
            fab = Instantiate(capsule, new Vector3(0, 1.5f, 0), Quaternion.Euler(-24.35f, 9.423f, 31.245f));
            shapeChoose = "capsule";
            fs = new CapsuleFactory();
        }
        shapeButtons.SetActive(false);
        colorButtons.SetActive(true);
    }

    public void ChooseColor(string color)
    {
        colorChoose = color;
        fs.OrderFood(color + ttype, fab);
        shapeButtons.SetActive(true);
        colorButtons.SetActive(false);
        CheckOrder();
    }
}
