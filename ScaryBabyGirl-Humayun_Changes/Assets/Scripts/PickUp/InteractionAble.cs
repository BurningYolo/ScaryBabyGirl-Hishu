using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InteractionAble : MonoBehaviour
{
    

    public enum Choices{Door,Light}
    public Choices objectTpye;


    public bool isOpen = false;
    public bool unlocked = false;

    [HideInInspector]
    public Animator anim;

    public bool isLightOn = false;
    
    
    void Start()
    {
        
        switch (objectTpye)
        {
            case Choices.Door:
                anim = GetComponent<Animator>();
               
                break;
            case Choices.Light:
                
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(textHide());
    }


    public void ObjectButton()
    {
        switch (objectTpye)
        {
            case Choices.Door:
                DoorTougle();
                break;
            case Choices.Light:
                LightTougle();
                break;
        }
    }

    public void DoorTougle()
    {
        if (unlocked)
        {
            if (!isOpen)
            {
                anim.Play("open");
                isOpen = true;
            }
            else if (isOpen)
            {
                anim.Play("close");
                isOpen = false;
            }
        }
        else
            print("find the key"); 


    }
    public void LightTougle()
    {
        if (!isLightOn)
        {
            
            isLightOn = true;
            this.GetComponentInChildren<Light>().enabled = true;
        }
        else if (isLightOn)
        {
            
            isLightOn = false;
            this.GetComponentInChildren<Light>().enabled = false;
        }
        
    }


    public void Key()
    {
        unlocked = true;
        print(" you find the key");
    }
    
    IEnumerator textHide()
    {
        yield return new WaitForSeconds(1f);
       
    }
}
