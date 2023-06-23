using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class LevelModel_Handler : MonoBehaviour {

	public PlayableDirector fadeScreen;
	
	[Header("Level Objectives Objectives")]
	public string primaryObjective;
	public string[] secondaryObjectives;

	[Header("Cut Scene Init")]
	public bool containsCutScene;
	public bool skipCutScene;
	public float cutSceneDuration;
	public UnityEngine.Events.UnityEvent onCutSceneEndEvent;

	[Header("Tmer per level aloted")]
	public float timeAloted;
	public TimerScript timerScript;

	[SerializeField] Transform spawnpoint;

	void Start()
	{
		timerScript.time = timeAloted;
		timerScript.timerText = GameplayScript_Handler.gsh.timerText;
		GameplayScript_Handler.gsh.secondaryObjText.text = secondaryObjectives[0];
		GameplayScript_Handler.gsh.player.position = spawnpoint.position;
		GameplayScript_Handler.gsh.player.rotation = spawnpoint.rotation;
	}


	public IEnumerator cutSceneCalled()
	{
		yield return new WaitForSeconds (cutSceneDuration);
		if (!skipCutScene) {
			GameplayScript_Handler.gsh.showButtons ();
			GameplayScript_Handler.gsh.ObjectiveDialoug ();
			onCutSceneEndEvent.Invoke ();
		}
	}

    public void ShowSecondaryObjective(int temp)
	{
		GameplayScript_Handler.gsh.secondaryObjText.text = secondaryObjectives[temp];
	}

	public void skipCutSceneHandler()
	{
		skipCutScene = true;
		GameplayScript_Handler.gsh.showButtons ();
		GameplayScript_Handler.gsh.ObjectiveDialoug ();
		onCutSceneEndEvent.Invoke ();
	}

	public void FadeScreen()
	{

		fadeScreen.Play();

	}


}
