using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TriggerActionScript : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject cat;

    private void OnTriggerEnter(Collider other)
    {
        cat.SetActive(true);
    }
}
