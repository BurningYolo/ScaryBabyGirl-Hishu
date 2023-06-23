using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour {

	public Text timerText;
	public float time = 1200;
	public bool stopTimer,stopSpinner;

	void Start ()
	{
		StartCoroutine(StartCoundownTimer());
	}

	public IEnumerator StartCoundownTimer()
	{
		if (!stopTimer) {
			time -= Time.deltaTime;
			yield return new WaitForSeconds (0.01f);
			string minutes = Mathf.Floor (time / 60).ToString ("00");
			string seconds = (time % 60).ToString ("00");
			string fraction = ((time * 100) % 100).ToString ("000");
			//timerText.text = "Time Left: " + minutes + ":" + seconds;
			timerText.text =  minutes + ":" + seconds;

			if (time < 10.0f) {
				timerText.color = Color.red;
			}
			StartCoroutine (StartCoundownTimer ());
		}
	}

	void LateUpdate()
	{
		if (time <= 0.5f && !stopTimer) {
			stopTimer = true;
		//	GameplayScript_Handler.gsh.rewardedAd.SetActive (true);
		}
		if (stopTimer) {
		
			//	if(!stopSpinner)
			//	GameplayScript_Handler.gsh.spinnerImage.fillAmount += 0.004f;
			//if (GameplayScript_Handler.gsh.spinnerImage.fillAmount > 0.99f) {
				//GameplayScript_Handler.gsh.levelFail_CompleteStatusEvent (false);

			gameObject.transform.parent.gameObject.SetActive(false);
			GameplayScript_Handler.gsh.Killer_Baby.SetActive(true);
            for (int i = 0; i < GameplayScript_Handler.gsh.other_Items.Length; i++)
            {
				GameplayScript_Handler.gsh.other_Items[i].SetActive(false);

			}
				
				GameplayScript_Handler.gsh.hideButtons();
			Invoke("Levelfailed",3f);
			
			Invoke("Laser_Eyes_On",10f);
			gameObject.SetActive (false);
		//	}
		}
	}
	void Laser_Eyes_On()
	{
		GameplayScript_Handler.gsh.Killer_Baby_Eyes.SetActive(true);
	}
	public void Levelfailed()
	{
		GameplayScript_Handler.gsh.levelFail_CompleteStatusEvent(false);

	}


}
