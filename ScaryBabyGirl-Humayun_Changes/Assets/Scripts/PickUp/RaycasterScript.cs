using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum InteractItems
{
    BabyBottle,Diaper,Ring,Feeder,Baby,Toy1,Toy2,Book,ChocoloateCake,DeadBaby,KillerBaby,DropPlace,Door, Stick, cat, Eyedrops, soother, Nothing, fakebaby
}
public class RaycasterScript : MonoBehaviour
{
    [Header("UI Elements")]
    public GameObject InteractButton;
    public Text doorText;

    [Header("Interact Objects and ENUM")]
    public GameObject[] InteractItemobjects;
    public InteractItems[] PickableItemEnum;


    [Header("Raycast")]
    
    public float raycastlength;
    public RaycastHit hit;


    [Header("DEBUG")]
    public CursorLockMode cursor;
    public InteractItems HitItem;
    GameObject HitObj;

    public bool IsItemPicked = false;
    public bool IsDoor = false;



    public GameObject HittedObject;

    void Start()
    {
        ControlFreak2.CFCursor.lockState = cursor;
        
       
    }



    void FixedUpdate()
    {
        
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, raycastlength))
        {

            if (hit.transform.GetComponent<ItemDetail>() == null)
                return;

            if(hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Baby ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.BabyBottle ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Diaper ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Ring ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Feeder ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Toy1 ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Toy2 ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Book ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.ChocoloateCake ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.KillerBaby ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.DropPlace ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Door  ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Stick ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.cat ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Eyedrops ||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.soother||
                hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.fakebaby

                )
            {
                HitItem = hit.transform.GetComponent<ItemDetail>().ObjectName;
                
                HittedObject = hit.transform.gameObject;
                //transform.LookAt(HittedObject.transform);
                //Debug.LogError(hit.transform.position);
                InteractButton.SetActive(true);



                

                if (hit.transform.GetComponent<ItemDetail>().ObjectName == InteractItems.Door)
                {
                    IsDoor = true;
                    doorText.enabled = true;

                    if (hit.transform.GetComponent<InteractionAble>().unlocked)
                    {
                        doorText.text = "Door Open";
                    }
                    else
                    {
                        doorText.text = "Door Locked";
                    }
                }
                else
                {
                    IsDoor = false;
                    doorText.enabled = false;
                }
            }
            else 
            {
                HittedObject = null;
                IsDoor = false;
                doorText.enabled = false;
                HitItem = InteractItems.Nothing;
            }
            
        }else
        {
            InteractButton.SetActive(false);
            IsDoor = false;
            doorText.enabled = false;
        }

        if(HitItem == InteractItems.Nothing)
        {
            
            HittedObject = null;
            InteractButton.SetActive(false);

        }
 
    }

    public void PickButtonClicked()
    {
        if(HittedObject!=null)
        {
            //SoundManager._SoundManager.playPickDropSounds();
           
            for (int i = 0; i < PickableItemEnum.Length; i++)
            {
                if(HitItem == PickableItemEnum[i])
                {
                    IsItemPicked = true;
                    HittedObject.SetActive(false);
                    InteractItemobjects[i].SetActive(true);

                    if (HittedObject.GetComponent<ItemDetail>() != null)
                    {
                        HittedObject.GetComponent<ItemDetail>().OnDoAction.Invoke();
                    }

                    break;
                }
            }
            
        }
    }

    public void DropButtonClicked()
    {
        if(IsItemPicked)
        {
            //SoundManager._SoundManager.playPickDropSounds();
            if(HittedObject.GetComponent<ItemDetail>().ObjectName == InteractItems.DropPlace)
            {
                if (HittedObject.transform.childCount > 0)
                {
                    HittedObject.transform.GetChild(0).gameObject.SetActive(true);
                    HittedObject.GetComponent<Collider>().enabled = false;

                    if (HittedObject.GetComponent<ItemDetail>() != null)
                    {

                        HittedObject.GetComponent<ItemDetail>().OnDoAction.Invoke();
                    }

                    for (int i = 0; i < InteractItemobjects.Length; i++)
                    {
                        
                        InteractItemobjects[i].SetActive(false);
                        IsItemPicked = false;
                    }
                }
            }
        }
    }

    public void PickAndDrop()
    {
        if (HitItem == InteractItems.fakebaby)
        {
            InteractButton.SetActive(true);
            HittedObject.GetComponent<ItemDetail>().OnDoAction.Invoke();
        }

        if (IsDoor)
        {
            if (HittedObject.GetComponent<ItemDetail>() != null)
            {
                HittedObject.GetComponent<ItemDetail>().OnDoAction.Invoke();
            }
            return;
        }
        if(!IsItemPicked)
        {
            PickButtonClicked();
        }
        else
        {
            DropButtonClicked();
        }
    }
}
