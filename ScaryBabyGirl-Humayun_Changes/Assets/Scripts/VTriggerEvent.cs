using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class VTriggerEvent : MonoBehaviour
{

    public UnityEvent onEnter;

    private void OnTriggerEnter(Collider other)
    {

        if (other.CompareTag("Cat") )
        {
            Debug.Log("Cat");
            onEnter.Invoke();
        }
        else
        {
            Debug.Log("Trigger");
            onEnter.Invoke();
        }
    }

}

