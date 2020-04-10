using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Result : MonoBehaviour
{
    public int amount;
    public ScoreSingleton ss;
    public TextMeshProUGUI text;

    public BallPool bp;
    private GameManager gm;

    public void Start()
    {
        gm = FindObjectOfType<GameManager>();
        text.text = "" + amount;
    }

    public void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("ball"))
        {
            ss.ScoreAdd(amount);
            col.gameObject.GetComponent<BallDrop>().enabled = !col.gameObject.GetComponent<BallDrop>().enabled;
            col.gameObject.GetComponent<SphereCollider>().isTrigger = true;
            col.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;

            if (gm.ballCount > 0)
            {
                bp.SpawnFromPool("ball", new Vector3(.23f, 9.27f, 4.64f));
            }

            //Destroy(col);
        }
    }
}
