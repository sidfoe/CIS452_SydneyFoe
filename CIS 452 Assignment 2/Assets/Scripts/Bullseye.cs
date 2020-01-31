using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullseye : Target
{
    private void Awake()
    {
        MoveBehaviour = gameObject.AddComponent<PopUp>();
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.CompareTag("wall"))
        {
            Destroy(gameObject);
        }
    }

    private void LateUpdate()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Destroy(GetComponent<PopUp>());
            MoveBehaviour = gameObject.AddComponent<StopAndGo>();
        }
    }

    public override void Shot()
    {
        GameManager.score++;
        Destroy(gameObject);
    }
}
