using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Duck : Target
{
    private void Awake()
    {
        MoveBehaviour = gameObject.AddComponent<PlainGo>();
        
    }

    private void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.CompareTag("wall"))
        {
            Destroy(gameObject);
        }
    }

    private void LateUpdate()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Destroy(GetComponent<PlainGo>());
            MoveBehaviour = gameObject.AddComponent<PopUp>();
        }
    }

    public override void Shot()
    {
        GameManager.score += 2;
        Destroy(gameObject);
    }
}
