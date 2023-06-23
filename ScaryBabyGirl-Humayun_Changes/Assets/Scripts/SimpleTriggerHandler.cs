using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SimpleTriggerHandler : MonoBehaviour
{
    [Header("Write the tag of other GameObject")]
    public string ColliderTag;
    [Header("Leave unchecked if want to trigger else check it")]
    public bool  isCollider;
    [Header("Call Event Here")]
    public UnityEvent OnEnter,OnExit;
    private void OnTriggerEnter(Collider other)
    {
        if (!isCollider)
        {
            if (other.CompareTag(ColliderTag))
            {
                OnEnter.Invoke();
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (!isCollider)
        {
            if (other.CompareTag(ColliderTag))
            {
                OnExit.Invoke();
            }
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (isCollider)
        {
            if (collision.gameObject.CompareTag(ColliderTag))
            {
                OnEnter.Invoke();
            }
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (isCollider)
        {
            if (collision.gameObject.CompareTag(ColliderTag))
            {
                OnExit.Invoke();
            }
        }
    }
    public void DebuggerString(string temp)
    {
        Debug.Log(temp);
    }
}
