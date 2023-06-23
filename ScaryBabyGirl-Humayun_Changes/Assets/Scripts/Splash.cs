using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Splash : MonoBehaviour
{
    public Image FillBar;
    public float LoadTime = 5;


    // Start is called before the first frame update
    void Start()
    {
       
        StartCoroutine(LoadScene());
        //foji Advertisements.Instance.Initialize();

    }

   IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(LoadTime);
        SceneManager.LoadScene(3);
    }

    private void Update()
    {
        FillBar.fillAmount += 1.0f / LoadTime * Time.deltaTime;
    }
}
