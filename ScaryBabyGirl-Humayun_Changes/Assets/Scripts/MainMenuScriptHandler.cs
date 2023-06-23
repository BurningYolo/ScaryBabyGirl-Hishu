using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using NiobiumStudios;
//using Facebook.Unity;

public class MainMenuScriptHandler : MonoBehaviour
{
    // ----------- Static Ref. of Main Menu Handler Start------------//
    public static MainMenuScriptHandler mmsh;
    // ----------- Static Ref. of Main Menu Handler End------------//


    public GameObject Consent;
    public Image ConsentImage;
    public Sprite[] ConsentSprites;

    [Header("Loading Screen")]
    public bool isLoading;
    public Image LoadingBar;
    public Text loading_Text;
    public GameObject loadingPanel;
    public float loadingDelayTime;

    [Header("Main Menu Stuff")]
    public GameObject mainMenu;
    public GameObject settingsDialoug;
    public GameObject[] RemoveAdsBtns, unlockAllButton, unlockAllChars;
    public GameObject UnlockEveryThing, Shop;
    public Image soundButton;
    public Sprite soundOn, SoundOff;
    bool soundState = true;

    [Header("Level Selection Stuff")]
    public GameObject levelSelection;
    bool inLevelSelection;
    [Header("Levels Parent")]
    [Tooltip("Just Assign the parent the levels array will be populated automatically")]
    public GameObject levelsParent;
    public GameObject[] Levels;
    [SerializeField]
    int totalLevelsUnlocked;
    [Header("Player Selection Stuff")]
    public GameObject selectionScene;
    bool inSelectionScene;
    [Header("Text Fields to Display User Coins")]
    public Text[] UserCoins;
    public int coinstoadd;
    public SelectionStoreHandler selectionStoreHandler;

    public GameObject Scroll_Anim;
    public GameObject Back_Btn_Level_Selection;
    void Start()
    {
        if (mmsh == null)
        {
            mmsh = this;
        }


        OnStart();

    }


    private void LateUpdate()
    {
        if (isLoading)
        {
            LoadingBar.fillAmount += 0.006f;
            if (LoadingBar.fillAmount == 1)
            {
                isLoading = false;
            }
        }
    }


    public void OnStart()
    {
        Time.timeScale = 1f;
        MaxAdManager.Instance?.ShowBanner();
        Levels = new GameObject[levelsParent.transform.childCount];
        for (int i = 0; i < Levels.Length; i++)
        {
            Levels[i] = levelsParent.transform.GetChild(i).gameObject;
        }
        float m_Volume = PlayerPrefs.GetInt("Vol", 1);
        SoundManager._SoundManager.playMainMenuSounds(m_Volume);
        ShowConsent();
        StartCheckInappStats();
        CheckEveryThingUnlocked();
        if (PlayerPrefs.GetInt("ComingFromGP", 0) == 1)
        {
            PlayerPrefs.SetInt("ComingFromGP", 0);
        }
        StoreScriptHandler.storeScript.firstTimeComing(0);
        // StartCoroutine(showLoadingImage());
        updateCoins();

        if (PlayerPrefs.GetInt("nextlevel") == 1)
        {
            showLevelSelection();
            PlayerPrefs.SetInt("nextlevel", 0);
        }


        if (AudioListener.volume == 1)
        {
            soundButton.sprite = soundOn;
        }
        if (AudioListener.volume ==0)
        {
            soundButton.sprite = SoundOff;
        }
    }

    IEnumerator showLoadingImage()
    {
        loadingPanel.SetActive(true);
        isLoading = true;
        LoadingBar.fillAmount = 0;
        //  ShowNative();
        yield return new WaitForSeconds(loadingDelayTime);
        loadingPanel.SetActive(false);
        Showad();
        // ShowNative();

    }
    void HandleOnRewardedVideoCompleted()
    {
        // Write What will happen after rewarded Video...
        StoreScriptHandler.storeScript.setTotalEarnedCoins(StoreScriptHandler.storeScript.getTotalEarnedCoins() + coinstoadd);
        updateCoins();
    }
    public void updateCoins()
    {
        for (int i = 0; i < UserCoins.Length; i++)
        {

            UserCoins[i].text = StoreScriptHandler.storeScript.getTotalEarnedCoins().ToString();
        }
    }

    public void ShowRewardedAd()
    {
        //foji Advertisements.Instance.ShowRewardedVideo(WatchAdGetCoins);
        MaxAdManager.Instance?.ShowRewardedAd(WatchAdGetCoins);
    }
    public void WatchAdGetCoins()
    {
        //if(val)
        PlayerPrefs.SetInt("TotalCoinsEarned", PlayerPrefs.GetInt("TotalCoinsEarned"));
    }
    void Update()
    {

    }

    public void showLevelSelection()
    {
        //  inLevelSelection = true;
        //  inSelectionScene = false;
        initLevelSelection();
        mainMenu.SetActive(false);
        levelSelection.SetActive(true);
        selectionScene.SetActive(false);

        Scroll_Anim.GetComponent<Animator>().Rebind();
        Scroll_Anim.GetComponent<Animator>().enabled = true;
        Back_Btn_Level_Selection.SetActive(false);
        Invoke("StopAnim", 1.5f);
        Showad();

    }
    void StopAnim()
    {
        Scroll_Anim.GetComponent<Animator>().Rebind();
        Scroll_Anim.GetComponent<Animator>().enabled = false;
        Back_Btn_Level_Selection.SetActive(true);
    }
    public void showSelectionScene()
    {
        inLevelSelection = false;
        inSelectionScene = true;
        selectionScene.SetActive(true);
        mainMenu.SetActive(false);
        levelSelection.SetActive(false);
        Showad();
    }

    public void PlayButtonClickSound()
    {
        SoundManager._SoundManager.playButtonClickSound();
    }

    public void settingsDialougStatus(bool temp)
    {
        if (temp)
        {
            settingsDialoug.SetActive(true);

        }
        else if (!temp)
        {
            settingsDialoug.SetActive(false);
        }
    }


    public void backFromLevelSelection()
    {
        //if (inLevelSelection) {
        //    inLevelSelection = false;
        //    showSelectionScene();
        //    levelSelection.SetActive(false);

        //}
        //else if (inSelectionScene)
        //{
        // inSelectionScene = false;
        //  selectionScene.SetActive(false);
        //  mainMenu.SetActive(true);
        //}
        //Showad();

        levelSelection.SetActive(false);

        mainMenu.SetActive(true);
        CancelInvoke("StopAnim");
        Scroll_Anim.GetComponent<Animator>().Rebind();
        Scroll_Anim.GetComponent<Animator>().enabled = true;

    }

    void initLevelSelection()
    {
        totalLevelsUnlocked = PlayerPrefs.GetInt("TotalLevelsUnlocked");
        for (int i = 0; i <= totalLevelsUnlocked; i++)
        {
            Levels[i].transform.GetChild(0).gameObject.SetActive(false);
        }
    }

    public void selectLevel(int temp)
    {
        if (!Levels[temp].transform.GetChild(0).gameObject.activeSelf)
        {
            PlayerPrefs.SetInt("SelectedLevel", temp);
            loadingPanel.SetActive(true);
            StartCoroutine(LoadScene());
        }
    }

    IEnumerator LoadScene()
    {

        loadingPanel.SetActive(true);
        yield return new WaitForSeconds(1f);
        Showad();
        yield return new WaitForSeconds(2f);
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(2);

        while (!asyncOperation.isDone)
        {

            loading_Text.text = (int)(asyncOperation.progress * 100) + "%";
            if (LoadingBar) LoadingBar.fillAmount = asyncOperation.progress;

            yield return null;
        }
    }

    public void SoundToggle()
    {
        soundState = !soundState;
        if (soundState)
        {
            soundButton.sprite = soundOn;
            AudioListener.volume = 1;
        }
        else if (!soundState)
        {
            soundButton.sprite = SoundOff;
            AudioListener.volume = 0;
        }
    }


    public void Exitbtn()
    {
        Application.Quit();
    }

    public void IAgree()
    {
        Consent.SetActive(false);
        PlayerPrefs.SetInt("Consent", 1);
    }

    public void CoinsInApp()
    {
        updateCoins();
    }
    public void GotoShop()
    {
        Shop.SetActive(true);
    }


    #region Code To Un Comment
   
    public void removeAds()
    {
        PlayerPrefs.SetInt("ADSUNLOCK", 2);
    }

    public void unlockLevels()
    {
        PlayerPrefs.SetInt("TotalLevelsUnlocked", Levels.Length - 1);
        initLevelSelection();
        for (int i = 0; i < unlockAllButton.Length; i++)
        {
            unlockAllButton[i].GetComponent<Button>().interactable = false;
        }
    }
    public void unlockAllCharacters()
    {
    }
    public void UnlockEverything()
    {
    }
    public void facebookLink()
    {
        //Application.OpenURL(AdsManager.adsManager.fbPageLink());
    }

    public void gPlusLink()
    {
        //Application.OpenURL(AdsManager.adsManager.gPlusPageLink());
    }
    public void BackBtnAd()
    {
        //CustomChartboostAd.chartboostAd.ShowChartboost();
    }
    public void Showad()
    {
            //foji Advertisements.Instance.ShowInterstitial();
            MaxAdManager.Instance?.ShowMainMenuInterstitial();
    }
    public void ShowNative()
    {
        
    }
    void CheckEveryThingUnlocked()
    {
        if (PlayerPrefs.GetInt("TotalLevelsUnlocked") == Levels.Length - 1 && PlayerPrefs.GetInt("CharUnlocked") == 1)
        {
            UnlockEveryThing.GetComponent<Button>().interactable = false;
            initLevelSelection();
            for (int i = 0; i < unlockAllButton.Length; i++)
            {
                unlockAllButton[i].GetComponent<Button>().interactable = false;
            }
            for (int i = 0; i < RemoveAdsBtns.Length; i++)
            {
                RemoveAdsBtns[i].GetComponent<Button>().interactable = false;
            }
            for (int i = 0; i < unlockAllChars.Length; i++)
            {
                unlockAllChars[i].GetComponent<Button>().interactable = false;
            }
        }
    }
    public void StartCheckInappStats()
    {
       
        if (PlayerPrefs.GetInt("TotalLevelsUnlocked") == Levels.Length - 1)
        {
            for (int i = 0; i < unlockAllButton.Length; i++)
            {
                unlockAllButton[i].GetComponent<Button>().interactable = false;
            }
        }
        if (PlayerPrefs.GetInt("CharUnlocked") == 1)
        {
            for (int i = 0; i < unlockAllChars.Length; i++)
            {
                unlockAllChars[i].GetComponent<Button>().interactable = false;
            }
        }
        if (PlayerPrefs.GetInt("UnlockEveryThing") == 1)
        {
            CheckEveryThingUnlocked();
        }
    }
   

    public void ShowConsent()
    {
        if (PlayerPrefs.GetInt("Consent") == 0)
        {
            //Consent.SetActive(true);
        }
    }
    public void OpenPrivacyLink()
    {
        Consent.SetActive(false);
        Application.OpenURL("https://cbgprivacypolicy.blogspot.com/2023/02/privacy-policy.html");
    }
    public void OpenMoreapps()
    {
        Application.OpenURL("https://play.google.com/store/apps/developer?id=CrossBox+Games");

    }

    public void rateUsApp()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=" + Application.identifier);
    }
    #endregion

}
