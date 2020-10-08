/* Sydney Foe
 * PlayerCollision
 * Assignment 8
 * Calls the template method when the player collides with a key. Gives feedback on what was got
 */

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerCollision : MonoBehaviour
{
    public string keyGotten;

    public TextMeshProUGUI t;

    public GameObject panel;

    public void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            panel.SetActive(false);
        }
    }

    private void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("key"))
        {
            keyGotten = col.gameObject.GetComponent<Template>().TemplateMethod();
            t.text = "Got " + keyGotten + ".";
            col.gameObject.SetActive(false);
        }
    }
}
