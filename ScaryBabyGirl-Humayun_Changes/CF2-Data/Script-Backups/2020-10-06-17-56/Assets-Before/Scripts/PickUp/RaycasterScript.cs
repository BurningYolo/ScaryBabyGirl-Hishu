using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaycasterScript : MonoBehaviour
{
    // Start is called before the first frame update
    public float raycastlength;
    public ControllerManager Character;
    public RaycastHit hit;
    public GameObject Target;
    public CursorLockMode cursor;
    void Start()
    {
        Cursor.lockState = cursor;
    }

    // Update is called once per frame

    void FixedUpdate()
    {

        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, raycastlength))
        {
            if (hit.collider.gameObject.tag == "Sink")
            {
                if (!hit.collider.gameObject.GetComponent<DoActionScript>().isNoanim)
                {
                    Character.AnimationCounter = 2;
                }
                print(hit.collider.gameObject);
                Character.GpButtons[0].SetActive(true);
                Target = hit.collider.gameObject;
            }
            else if (hit.collider.gameObject.tag == "Pickable")
            {
                print(hit.collider.gameObject);
                print("pick");
                Character.GpButtons[1].SetActive(true);
                Character.ObjectToActivate = hit.collider.gameObject.GetComponent<PickUp>().pickUp;
                Target = hit.collider.gameObject;
            }
            else if (hit.collider.gameObject.tag == "Baby")
            {
                print(hit.collider.gameObject);
                Character.GpButtons[2].SetActive(true);
                Target = hit.collider.gameObject;
            }
            else if(hit.collider.gameObject.tag == "Untagged")
            {
                for (int i = 0; i < Character.GpButtons.Length; i++)
                {
                    Character.GpButtons[i].SetActive(false);
                }
            }

        }
        Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * raycastlength, Color.white);
    }
}
