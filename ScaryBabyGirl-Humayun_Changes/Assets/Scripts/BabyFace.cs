using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BabyFace : MonoBehaviour
{
    public float moveSpeed;

    public Transform target;
    public float minDistance;
    private float range;

    [SerializeField]
    private Transform _sphere;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

       // target = GameObject.FindWithTag("Player").transform;

       // range = Vector2.Distance(transform.position, target.position);

       // transform.LookAt(target.position);
       //// transform.Rotate(new Vector3(0, 90, 0), Space.Self);

       // if (range < minDistance)
       // {
       //     transform.position = Vector2.MoveTowards(transform.position, target.position, moveSpeed * Time.deltaTime);
       // }


        Vector3 dirToFace = target.position - transform.position;
        Quaternion tragetRot = Quaternion.LookRotation(dirToFace);
        transform.rotation = Quaternion.Slerp(transform.rotation, tragetRot, Time.deltaTime);
       


    }
}

