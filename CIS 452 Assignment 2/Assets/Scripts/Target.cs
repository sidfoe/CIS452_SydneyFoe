using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Target : MonoBehaviour
{
    public Transform start;
    public Transform end;

    public bool startLeft;

    public Movement MoveBehaviour;

    public abstract void Shot();

    public void DoMove()
    {
        MoveBehaviour.Move();
    }

    private void Update()
    {
        DoMove();
    }
}
