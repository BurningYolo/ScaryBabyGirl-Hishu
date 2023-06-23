using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
//using Facebook.Unity;

public class GameplayScript_Handler : MonoBehaviour {

    [Header("Objective Dialoug Screen")]
    public GameObject objDialoug;
    public Text objText, secondaryObjText;
    [Header("Gameplay Buttons")]
    public GameObject[] gpButtons;
    [Header("Loading Screen")]
    public GameObject loadingScreen;
    public float loadingScreenDisplayTime;
    public Image LoadingImage;
    public bool Isloading;
    public Text loading_Text;
    [Header("Level Pause Screen")]
    public GameObject pauseScreen;
    [Header("Level Failed Screen")]
    public GameObject failedScreen;
    [Header("Level Complete Screen")]
    public GameObject completeScreen;

    [Header("Assign ind. level prefab.")]
    public GameObject[] Levels;

    [Header("Other Varaibles")]
    bool displayAdOnce, primaryObjectives;
    [SerializeField]
    bool levelCompleteTest, levelFailedTest;
    public int selectedLevel, unlockedLevel;
    public GameObject skipCutScene;
    public Text totalCoinsEarned, timerText;
    GameObject spawnedLevel;
    LevelModel_Handler currentLevelModel;
    int totalCoins;
    [Header("Rewarded Ad - Timer")]
    public GameObject rewardedAd;
    public Image spinnerImage;
    public float timeToBeAlotedAfterRewardedVideo;
    public Transform player;
    public GameObject Killer_Baby;
    public GameObject Killer_Baby_Eyes;
    public GameObject[] other_Items;
    // ----------- Static Ref. of GamePlay Script Handler Start------------//
    public static GameplayScript_Handler gsh;
    // ----------- Static Ref. of GamePlay Script Handler End------------//
    
    void Awake()
    {
        Time.timeScale = 1f;
        if (gsh == null) {
            gsh = this;
        }
       // hideButtons();
    }

    void Start()
    {
        MaxAdManager.Instance?.ShowBanner();
		selectedLevel = PlayerPrefs.GetInt ("SelectedLevel");
		unlockedLevel = PlayerPrefs.GetInt ("TotalLevelsUnlocked");
        if (SoundManager._SoundManager) {
            float m_GamePlayVolume = PlayerPrefs.GetInt("SFXVol", 1);
            SoundManager._SoundManager.playGameplaySounds(m_GamePlayVolume);
        }
        if (PlayerPrefs.GetInt("ComingFromGP", 0) == 0) {
            PlayerPrefs.SetInt("ComingFromGP", 1);
        }
        spawnLevel(selectedLevel);
        StartCoroutine(loadingScreenHandler());
    }

    void spawnLevel(int temp)
    {
        Levels[temp].gameObject.SetActive(true);
        currentLevelModel = Levels[temp].gameObject.GetComponent<LevelModel_Handler>();
    }

    void LateUpdate()
    {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            pauseGameDialoug();
        }

#if UNITY_EDITOR
        if (levelCompleteTest) {
            levelCompleteTest = false;
            levelCompleteDialoug();
        }
        if (levelFailedTest) {
            levelFailedTest = false;
            levelFailedDialoug();
        }
#endif
    }

    public LevelModel_Handler returnLevelModelHandler()
    {
        return currentLevelModel;
    }

    IEnumerator loadingScreenHandler()
    {
      //  loadingScreen.SetActive(true);
        yield return new WaitForSeconds(loadingScreenDisplayTime);
     
        if (currentLevelModel.containsCutScene)
        {
            hideButtons();
            StartCoroutine(currentLevelModel.cutSceneCalled());
            yield return new WaitForSeconds(currentLevelModel.cutSceneDuration / 2);
            //skipCutScene.SetActive(true);
        }
        else
        {
            //ObjectiveDialoug();
        }
    }
    private void FixedUpdate()
    {
        if (Isloading)
        {
            LoadingImage.fillAmount += 0.003f;
            if (LoadingImage.fillAmount==1)
            {
                Isloading = false;
            }
        }
    }
    public void ObjectiveDialoug()
    {
        if (!primaryObjectives) {
            primaryObjectives = true;
            objDialoug.SetActive(true);
            objText.text = currentLevelModel.primaryObjective;
        }
    }

    public void playButtonSound()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
    }

    public void skipButtonPressed()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        currentLevelModel.skipCutScene = true;
    }

    public void hideButtons()
    {
        for (int i = 0; i < gpButtons.Length; i++) {
            gpButtons[i].SetActive(false);
        }
    }

    public void showButtons()
    {
        for (int i = 0; i < gpButtons.Length; i++) {
            gpButtons[i].SetActive(true);
        }
    }

    public void displayTimerScript()
    {
        returnLevelModelHandler().timerScript.gameObject.SetActive(true);
    }

    public void ShowRewardedVideo()
    {
        //foji Advertisements.Instance.ShowRewardedVideo(WatchAdGetCoins);
        MaxAdManager.Instance?.ShowRewardedAd(WatchAdGetCoins);
    }
    public void WatchAdGetCoins()
    {
        
            PlayerPrefs.SetInt("TotalCoinsEarned", PlayerPrefs.GetInt("TotalCoinsEarned"));
    }
    void OnEnable()
    {
      
    }

    void OnDisable()
    {
        
    }

   

    public void pauseGameDialoug()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        pauseScreen.SetActive(true);
        MaxAdManager.Instance.ShowMRec();
        Time.timeScale = 0.01f;
        showAds();
    }

    public void resumeGameplay()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        pauseScreen.SetActive(false);
        MaxAdManager.Instance.HideMRec();
        Time.timeScale = 1f;
    }

    public void restartGame()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        MaxAdManager.Instance.HideMRec();
        loadingScreen.SetActive(true);
        Time.timeScale = 1f;
        // SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        StartCoroutine(LoadScene());
    }
    public void restartToMainMenu()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        loadingScreen.SetActive(true);
        Time.timeScale = 1f;
        SceneManager.LoadScene(1);
       // PlayerPrefs.SetInt("nextlevel", 1);
    }

    public void home()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        MaxAdManager.Instance.HideMRec();
        loadingScreen.SetActive(true);
        Time.timeScale = 1f;
        SceneManager.LoadSceneAsync(1);
    }

    public void levelFail_CompleteStatusEvent(bool temp)
    {
        StartCoroutine(levelFail_CompleteStatus(temp));
    }

    IEnumerator levelFail_CompleteStatus(bool temp)
    {
        hideButtons();
        


        if (PlayerPrefs.GetInt("SelectedLevel") == 0)
        {
            yield return new WaitForSeconds(0.01f);
            if (temp)
            {
                levelCompleteDialoug();
            }
            else if (!temp)
            {
                levelFailedDialoug();
            }
        }

        else if (PlayerPrefs.GetInt("SelectedLevel") == 2)
        {
            Debug.Log("Level 3");
            yield return new WaitForSeconds(4f);
            if (temp)
            {
                levelCompleteDialoug();
            }
            else if (!temp)
            {
                levelFailedDialoug();
            }

        }



        else if (PlayerPrefs.GetInt("SelectedLevel") == 8)
        {
            yield return new WaitForSeconds(3f);
            if (temp)
            {
                levelCompleteDialoug();
            }
            else if (!temp)
            {
                levelFailedDialoug();
            }
        }

        else if (!temp) {
            levelFailedDialoug();
        }

        else if (true)
        {
            yield return new WaitForSeconds(0.01f);
            if (temp)
            {
                levelCompleteDialoug();
            }
            else if (!temp)
            {
                levelFailedDialoug();
            }
        }

    }

    void levelCompleteDialoug()
    {
        currentLevelModel.gameObject.SetActive(false);
        SoundManager._SoundManager.playLevelCompleteSound();
        completeScreen.SetActive(true);
        MaxAdManager.Instance.ShowMRec();
        if (PlayerPrefs.GetInt("SelectedLevel") == PlayerPrefs.GetInt("TotalLevelsUnlocked") && PlayerPrefs.GetInt("TotalLevelsUnlocked") < Levels.Length - 1) {
            PlayerPrefs.SetInt("TotalLevelsUnlocked", PlayerPrefs.GetInt("TotalLevelsUnlocked") + 1);
            unlockedLevel = PlayerPrefs.GetInt("TotalLevelsUnlocked");
           
        }

        if (StoreScriptHandler.storeScript) {
            int temp = StoreScriptHandler.storeScript.getRewardOfLevel(selectedLevel);
            StoreScriptHandler.storeScript.setTotalEarnedCoins(temp + StoreScriptHandler.storeScript.getTotalEarnedCoins());
            totalCoins = StoreScriptHandler.storeScript.getTotalEarnedCoins();
            StartCoroutine(delayedTotalCoinAdder());
        }
        showAds();
    }
    public void levelFailed()
    {
        StartCoroutine(levelFailedtimer());
     
    }

    IEnumerator levelFailedtimer()
    {
         yield return new WaitForSeconds(4f);
        failedScreen.SetActive(true);
        Time.timeScale = 3.0f;
        showAds();
    }
    IEnumerator delayedTotalCoinAdder()
    {
        for (int i = 0; i < totalCoins;) {
            yield return new WaitForSeconds(0.01f);
            totalCoinsEarned.text = i.ToString();
            i += 25;
        }
        //Time.timeScale = 0.01f;
    }

    public void LevelCompleteEvent(float time)
    {
        StartCoroutine(LevelPopUp(time));
    }
    IEnumerator LevelPopUp(float time)
    {
        yield return new WaitForSeconds(time);
        levelCompleteDialoug();
    }
    void levelFailedDialoug()
    {
        SoundManager._SoundManager.playLevelFailedSound();
        failedScreen.SetActive(true);
        MaxAdManager.Instance.ShowMRec();
        Time.timeScale = 0.01f;
        showAds();
    }

    public void next()
    {
        if (SoundManager._SoundManager) {
            SoundManager._SoundManager.playButtonClickSound();
        }
        //MaxAdManager.Instance.HideMRec();
        Time.timeScale = 1f;
        if (PlayerPrefs.GetInt("SelectedLevel") < Levels.Length - 1) {
            PlayerPrefs.SetInt("SelectedLevel", PlayerPrefs.GetInt("SelectedLevel") + 1);
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            //SceneManager.LoadScene(2);
            //PlayerPrefs.SetInt("nextlevel", 1);
        }
        else {
            home();
        }
       
    }

    IEnumerator LoadScene()
    {

        loadingScreen.SetActive(true);
        yield return new WaitForSeconds(1f);
        showAds();
        yield return new WaitForSeconds(2f);
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().name);

        while (!asyncOperation.isDone)
        {
            loading_Text.text = (int)(asyncOperation.progress * 100) + "%";
            if (LoadingImage) LoadingImage.fillAmount = asyncOperation.progress;

            yield return null;
        }
        
    }

    void showAds()
    {
            //foji Advertisements.Instance.ShowInterstitial();
            MaxAdManager.Instance?.ShowGamePlayInterstitial();
    }

}
