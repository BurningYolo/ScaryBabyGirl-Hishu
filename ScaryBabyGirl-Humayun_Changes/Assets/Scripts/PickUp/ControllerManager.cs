using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControllerManager : MonoBehaviour
{
    // Start is called before the first frame update
    public Animator Anim;
    public GameObject Player,Panel;
    public GameObject[] ThingsinHand;
    public GameObject ThingsParent;
    public int AnimationCounter,ObjectToActivate;
    public GameObject[] GpButtons;
    bool hasPicked;
    public Material HandMAaterial;
    public Texture ClearHands, ShittyHands;
    public static ControllerManager CM;
    void Start()
    {
        if (CM == null)
        {
            CM = this;
        }
        Anim = Player.GetComponent<Animator>();
        ThingsinHand = new GameObject[ThingsParent.transform.childCount];
        for (int i = 0; i < ThingsinHand.Length; i++)
        {
            ThingsinHand[i] = ThingsParent.transform.GetChild(i).gameObject;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SetAnimState()
    {
        Anim.SetInteger("Washing", AnimationCounter);
        Anim.SetInteger("Thing in hand", 0);
       // GameplayScript_Handler.gsh.hideButtons();
       // Player.GetComponentInChildren<RaycasterScript>().Target.GetComponent<DoActionScript>().CustomAction.Invoke();
        StartCoroutine(Handwashed());
    }
    public void Thinginhand()
    {
        //Anim.SetInteger("Washing", 0);
        //Anim.SetInteger("Thing in hand", 1);
        
        GameObjectActivator();
    }
    public void GameObjectActivator()
    {
        for (int i = 0; i < ThingsinHand.Length; i++)
        {
            ThingsinHand[i].SetActive(false);
        }
        ThingsinHand[ObjectToActivate].SetActive(true);
        hasPicked = true;
      //  Player.GetComponentInChildren<RaycasterScript>().Target.SetActive(false);
      //  Player.GetComponentInChildren<RaycasterScript>().Target.GetComponent<PickUp>().OnDoAction.Invoke();
    }
    public void Interection()
    {
        for (int i = 0; i < ThingsinHand.Length; i++)
        {
            ThingsinHand[i].SetActive(false);
        }
      //Anim.SetInteger("Washing", 0);
        //Anim.SetInteger("Thing in hand", 0);
       // Player.GetComponentInChildren<RaycasterScript>().Target.GetComponent<DoActionScript>().OnDoAction.Invoke();
    }
    public void Door_light_Interection()
    {
        ThingsinHand[2].SetActive(false);
       // Player.GetComponentInChildren<RaycasterScript>().Target.GetComponent<DoActionScript>().OnDoAction.Invoke();
    }
    public IEnumerator Handwashed()
    {
        yield return new WaitForSeconds(10f);
       // GameplayScript_Handler.gsh.showButtons();
        if (hasPicked)
        {
            Debug.Log("isActive");
           // Anim.SetInteger("Washing", 0);
           // Anim.SetInteger("Thing in hand", 1);
          //  Player.GetComponentInChildren<RaycasterScript>().Target.GetComponent<DoActionScript>().OnDoAction.Invoke();
        }
        else
        {
            //Anim.SetInteger("Washing", 0);
           // Anim.SetInteger("Thing in hand", 0);
          //  Player.GetComponentInChildren<RaycasterScript>().Target.GetComponent<DoActionScript>().OnDoAction.Invoke();
        }
    }
}
