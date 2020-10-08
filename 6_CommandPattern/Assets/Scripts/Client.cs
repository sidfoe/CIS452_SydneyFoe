/*Sydney Foe
 * Client
 * Assignment 7
 * Sets up the command and the recievers for the x's and o's. When the button is pressed calls the right command or the undo function
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Client : MonoBehaviour
{
    Invoker voker = new Invoker();
    private bool isXPlacing = true; //x will start first
    public GameObject xButtons;
    public GameObject oButtons;

    public PlaceOReciever oReciever;
    public PlaceXReciever xReciever;

    // Start is called before the first frame update
    void Start()
    {
        oButtons.SetActive(false);

        PlaceOCommand placeO = new PlaceOCommand(oReciever);
        PlaceXCommand placeX = new PlaceXCommand(xReciever);

        voker.AddCommand("placeO", placeO);
        voker.AddCommand("placeX", placeX);
    }

    public void PlaceX(int x)
    {
        GameObject g = EventSystem.current.currentSelectedGameObject;

        switch (x)
        {
            case 1:
                voker.CallCommand("placeX", new Vector3(-3.5f, 0, 3.6f), g);
                break;
            case 2:
                voker.CallCommand("placeX", new Vector3(.06f,0 , 3.6f), g);
                break;
            case 3:
                voker.CallCommand("placeX", new Vector3(3.59f, 0, 3.6f), g);
                break;
            case 4:
                voker.CallCommand("placeX", new Vector3(-3.5f, 0, .08f), g);
                break;
            case 5:
                voker.CallCommand("placeX", new Vector3(.06f, 0, .08f), g);
                break;
            case 6:
                voker.CallCommand("placeX", new Vector3(3.59f, 0, .08f), g);
                break;
            case 7:
                voker.CallCommand("placeX", new Vector3(-3.5f, 0, -3.64f), g);
                break;
            case 8:
                voker.CallCommand("placeX", new Vector3(.06f, 0, -3.64f), g);
                break;
            case 9:
                voker.CallCommand("placeX", new Vector3(3.59f, 0, -3.64f), g);
                break;
        }

        xButtons.SetActive(false);
        oButtons.SetActive(true);
    }

    public void PlaceO(int x)
    {
        GameObject g = EventSystem.current.currentSelectedGameObject;
        switch (x)
        {
            case 1:
                voker.CallCommand("placeO", new Vector3(-3.5f, 0, 3.6f), g);
                break;
            case 2:
                voker.CallCommand("placeO", new Vector3(.06f, 0, 3.6f), g);
                break;
            case 3:
                voker.CallCommand("placeO", new Vector3(3.59f, 0, 3.6f), g);
                break;
            case 4:
                voker.CallCommand("placeO", new Vector3(-3.5f, 0, .08f), g);
                break;
            case 5:
                voker.CallCommand("placeO", new Vector3(.06f, 0, .08f), g);
                break;
            case 6:
                voker.CallCommand("placeO", new Vector3(3.59f, 0, .08f), g);
                break;
            case 7:
                voker.CallCommand("placeO", new Vector3(-3.5f, 0, -3.64f), g);
                break;
            case 8:
                voker.CallCommand("placeO", new Vector3(.06f, 0, -3.64f), g);
                break;
            case 9:
                voker.CallCommand("placeO", new Vector3(3.59f, 0, -3.64f), g);
                break;
        }
        xButtons.SetActive(true);
        oButtons.SetActive(false);
    }

    public void PressUndo()
    {
        voker.UndoIt();
    }
}
