using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyesLock : MonoBehaviour
{
    public Transform dir;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.LookAt(dir);
    }
}
