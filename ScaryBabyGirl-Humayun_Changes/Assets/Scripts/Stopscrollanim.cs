using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stopscrollanim : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnEnable()
    {
        CancelInvoke("StopAnim");

        gameObject.GetComponent<Animator>().Rebind();
        gameObject.GetComponent<Animator>().enabled = true;
        Invoke("StopAnim",1.5f);

    }

    void StopAnim() 
    {
        gameObject.GetComponent<Animator>().Rebind();
        gameObject.GetComponent<Animator>().enabled = false;
    }

    void OnDisable()
    {
        CancelInvoke("StopAnim");
        gameObject.GetComponent<Animator>().Rebind();
        gameObject.GetComponent<Animator>().enabled = true;


    }

}
