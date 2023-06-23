using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using GameAnalyticsSDK;
//using com.adjust.sdk;
[System.Serializable]
public class AdIDsTemplate
{

    public string MaxID;
    public string interstitialID;
    public string AppOpenID;
    public string rewardedAdID;
    public string bannerAdID;
    public string RecID;
    //public string BannerAdID_B;
}

[System.Serializable]
public class AdIds
{
    [SerializeField]
    private AdIDsTemplate androidAdIDs;

    public string MaxSDKId
    {
        get
        {
            string appIDToReturn;

            appIDToReturn = this.androidAdIDs.MaxID;

            return appIDToReturn.Trim();
        }
    }

    public string InterstitialID
    {
        get
        {
            string interstitialIDToReturn;

            interstitialIDToReturn = this.androidAdIDs.interstitialID;

            return interstitialIDToReturn.Trim();
        }
    }

    public string RewardedAdID
    {
        get
        {
            string rewardedAdIDToReturn;

            rewardedAdIDToReturn = this.androidAdIDs.rewardedAdID;

            return rewardedAdIDToReturn.Trim();
        }
    }

    public string BannerAdID
    {
        get
        {
            string bannerAdIDToReturn;

            bannerAdIDToReturn = this.androidAdIDs.bannerAdID;

            return bannerAdIDToReturn.Trim();
        }
    }
    public string AppOpen
    {
        get
        {
            string bannerAdIDToReturn;

            bannerAdIDToReturn = this.androidAdIDs.AppOpenID;

            return bannerAdIDToReturn.Trim();
        }
    }
    public string RecID
    {
        get
        {
            string RecID;

            RecID = this.androidAdIDs.AppOpenID;

            return RecID.Trim();
        }
    }

}
public class MaxAdManager : MonoBehaviour
{
    public static MaxAdManager Instance;
    //public AdmobManager admobManager;
    //[SerializeField] private AdIds AdsIDS;
    //Azeem's changes
    private string MaxID= "TecxGz9HeSi_iQ5CGuTRWRFTDHtMM_TKk19s1icUkcuQLyS1FNVZ8Kp_McP2XmsoOIqrW7KHyl1Q5itk7RJVnT";
    private string interstitialID= "210ae11f65af7d5c";
    private string AppOpenID= "06b9777621e5c917";
    private string rewardedAdID= "8b60f1be90cb7d50";
    private string bannerAdID= "aa5b91e2fa21552e";
    private string RecID= "23f9143e53e8300e";
    //
    [SerializeField] private float AdTime = 30;
    [SerializeField] private bool ItsShowTime = true;
    float InternalAdTime;
    public Text InterText;
    public Text RewardedText;
    public Image NoInterNet;
    [HideInInspector] public bool disableAdmobAds = false;
    [HideInInspector] public bool showAdmobBanner = true;
    [HideInInspector] public bool mainMenuAdmobPriorty = true;
    [HideInInspector] public bool gamePlayMaxPriorty = true;
   // [HideInInspector] public bool gamePlayMaxPriorty = true;

    private bool isBannerShowing;
    private bool isMRecShowing;

    private int interstitialRetryAttempt;
    private int rewardedRetryAttempt;
    private int rewardedInterstitialRetryAttempt;
    public static event Action RewardedAdDoneEvent;
    private Action GiveRewardAction;
    private void Awake()
    {
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    void Start()
    {
        
        //  mediationDebuggerButton.onClick.AddListener(MaxSdk.ShowMediationDebugger);        
        MaxSdkCallbacks.OnSdkInitializedEvent += sdkConfiguration =>
        {
            AdmobGA_Helper.GA_Log(AdmobGAEvents.Initialized);
            MaxSdkCallbacks.AppOpen.OnAdHiddenEvent += OnAppOpenDismissedEvent;
            Debug.Log("MAX SDK Initialized");
            InterText.text = "MAX SDK Initialized";
            if (PlayerPrefs.GetInt("ADS", 0) == 1)
            {
                return;
            }
            

            MaxSdk.LoadAppOpenAd(AppOpenID);
            InitializeInterstitialAds();
            InitializeRewardedAds();
            InitializeBannerAds();
           // if (showAdmobBanner)
                //admobManager.ShowMMTopBanner();
           // else
           InitializeMRecAds();
            
        };
        MaxSdk.SetSdkKey(MaxID);
        MaxSdk.InitializeSdk();
        //AdmobManager.OnRewardedAdCompletedEvent += AdmobDoneReward;
        InitializeBannerAds();

        GameAnalytics.Initialize();
        InternalAdTime = AdTime;

    }
    private void Update()
    {
        if (AdTime > 0)
            AdTime -= Time.deltaTime;

        if (AdTime <= 0 & ItsShowTime == false)
            ItsShowTime = true;

        //#if !UNITY_EDITOR
        //        if (Application.internetReachability != NetworkReachability.NotReachable)
        //            NoInterNet.gameObject.SetActive(true);
        //        //else
        //            NoInterNet.gameObject.SetActive(false);
        //#endif
    }


    public bool IsrewardReady()
    {
        return true;
    }
    bool CheckAdTime()
    {
        if (ItsShowTime)
        {
            return true;
        }
        else
            return false;
    }

    private void ResetTimer()
    {
        AdTime = InternalAdTime;
        ItsShowTime = false;
    }
    private void OnDestroy()
    {
        //AdmobManager.OnRewardedAdCompletedEvent -= AdmobDoneReward;
    }
    public void ShowAdWithGame()
    {
        if (Application.internetReachability != NetworkReachability.NotReachable)
        {
            try
            {
                if (PlayerPrefs.GetInt("ADS") == 6676)
                {
                    return;
                }
                SceneManager.LoadSceneAsync("LuckyWheel", LoadSceneMode.Additive);
            }
            catch (System.Exception e)
            {
                Debug.Log("Exception    " + e);
            }
        }
        else
        {
            Debug.LogError("Not Connected to Internet");
        }
    }
    public void OnAppOpenDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        MaxSdk.LoadAppOpenAd(AppOpenID);
    }
    public void ShowAppOpen()
    {
        if (PlayerPrefs.GetInt("RemoveAds") == 6676)
        {
            return;
        }
        if (MaxSdk.IsAppOpenAdReady(AppOpenID))
        {
            MaxSdk.ShowAppOpenAd(AppOpenID);
            AdmobGA_Helper.GA_Log(AdmobGAEvents.ShowAppOpenAd);
        }
        else
        {
            MaxSdk.LoadAppOpenAd(AppOpenID);
            if (disableAdmobAds)
                return;
            //admobManager.ShowAppOpen();
        }
    }


    public void LoadInterstitial()
    {
        Debug.Log("Loading...");
        InterText.text = "Inter is Loading";
        MaxSdk.LoadInterstitial(interstitialID);
        //Debug.LogError("Interstatial Loaded");
    }

    public void ShowMainMenuInterstitial()
    {
        if (PlayerPrefs.GetInt("RemoveAds") == 6676)
        {
            return;
        }
        LoadInterstitial();
        
        if (disableAdmobAds)
            mainMenuAdmobPriorty = false;

        if (mainMenuAdmobPriorty == false)
        {
            if (MaxSdk.IsInterstitialReady(interstitialID) & ItsShowTime)
            {
                Debug.Log("Showing...");
                InterText.text = "Inter is Showing";
                MaxSdk.ShowInterstitial(interstitialID);
                AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdDisplayed);
               ResetTimer();
            }
            else
            {
                if (disableAdmobAds)
                    return;
                //admobManager.ShowAdmobInterstitial();
            }
        }
        else
        {

            //if (disableAdmobAds == false && admobManager.interstitial.IsLoaded())
            //{
            //    admobManager.ShowAdmobInterstitial();
            //}
            //else
            if (MaxSdk.IsInterstitialReady(interstitialID) & ItsShowTime)
            {
                InterText.text = "Inter is Showing";
                MaxSdk.ShowInterstitial(interstitialID);
                AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdDisplayed);
                ResetTimer();
            }
        }
    }
    public void ShowGamePlayInterstitial()
    {
      
        //if (gamePlayMaxPriorty)
        //{
            if (MaxSdk.IsInterstitialReady(interstitialID) & ItsShowTime)
            {
                InterText.text = "Inter is Showing";
                MaxSdk.ShowInterstitial(interstitialID);
            AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdDisplayed);
                ResetTimer();
                Invoke("LoadInterstitial", 2);
            }
            else
            {
                if (disableAdmobAds)
                    return;
                //admobManager.ShowAdmobInterstitial();
            }
        //}
        //else
        //{

        //    //if (disableAdmobAds == false && admobManager.interstitial.IsLoaded())
        //    //{
        //    //    admobManager.ShowAdmobInterstitial();
        //    //}
        //    //else
        //    if (MaxSdk.IsInterstitialReady(interstitialID) & ItsShowTime)
        //    {
        //        InterText.text = "Inter is Showing";
        //        MaxSdk.ShowInterstitial(interstitialID);
        //        ResetTimer();
        //    }
        //}
    }
#region Interstitial Ad Methods

    private void InitializeInterstitialAds()
    {
        // Attach callbacks
        MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;
        MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialFailedEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += InterstitialFailedToDisplayEvent;
        MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialDismissedEvent;
        MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += OnInterstitialRevenuePaidEvent;

        // Load the first interstitial
        LoadInterstitial();
    }
    private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdLoaded);
        // Interstitial ad is ready to be shown. MaxSdk.IsInterstitialReady(interstitialAdUnitId) will now return 'true'        
        Debug.Log("Interstitial loaded");
        InterText.text = "Inter is Loaded";
        // Reset retry attempt
        interstitialRetryAttempt = 0;
    }

    private void OnInterstitialFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdFailToLoad);
        // Interstitial ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
        interstitialRetryAttempt++;
        double retryDelay = Math.Pow(2, Math.Min(6, interstitialRetryAttempt));
        Debug.Log("Interstitial failed to load with error code: " + errorInfo.Code);

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void InterstitialFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad failed to display. We recommend loading the next ad
        Debug.Log("Interstitial failed to display with error code: " + errorInfo.Code);
        LoadInterstitial();
    }

    private void OnInterstitialDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdClosed);
        // Interstitial ad is hidden. Pre-load the next ad
        Debug.Log("Interstitial dismissed");
        InterText.text = "Inter is Dismissed";
        LoadInterstitial();
    }

    private void OnInterstitialRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad revenue paid. Use this callback to track user revenue.
        Debug.Log("Interstitial revenue paid");
        InterText.text = "Inter Review Paid";
        // Ad revenue
        double revenue = adInfo.Revenue;

        // Miscellaneous data
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD" in most cases!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

        //TrackAdRevenue(adInfo);
    }

#endregion

    public void LoadRewardedAd()
    {
        Debug.Log("Loading Rewarded Ad...");
        RewardedText.text = "Loading Rewarded Ad...";
        MaxSdk.LoadRewardedAd(rewardedAdID);
    }

    public void ShowRewardedAd(Action rewardAction)
    {

        LoadRewardedAd();

        GiveRewardAction = rewardAction;
        if (MaxSdk.IsRewardedAdReady(rewardedAdID) & ItsShowTime)
        {
            Debug.Log("Showing Rewarded Ad");
            RewardedText.text = "Showing Rewarded Ad...";
            MaxSdk.ShowRewardedAd(rewardedAdID);

            //ResetTimer();
        }
        //else
        //{
        //    Debug.Log("Rewarded Ad not ready");
        //    RewardedText.text = "Not Ready Rewarded Ad...";
        //    if (disableAdmobAds)
        //        return;
        //    //admobManager.ShowRewardedAd();
        //}
    }
#region Rewarded Ad Methods

    private void InitializeRewardedAds()
    {
        // Attach callbacks
        MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnRewardedAdLoadedEvent;
        MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnRewardedAdFailedEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnRewardedAdFailedToDisplayEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent += OnRewardedAdDisplayedEvent;
        MaxSdkCallbacks.Rewarded.OnAdClickedEvent += OnRewardedAdClickedEvent;
        MaxSdkCallbacks.Rewarded.OnAdHiddenEvent += OnRewardedAdDismissedEvent;
        MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;
        MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnRewardedAdRevenuePaidEvent;

        // Load the first RewardedAd
        LoadRewardedAd();
    }



    private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.RewardedAdLoaded);
        // Rewarded ad is ready to be shown. MaxSdk.IsRewardedAdReady(rewardedAdUnitId) will now return 'true'
        Debug.Log("Rewarded ad loaded");
        RewardedText.text = "Loaded Rewarded Ad...";
        // Reset retry attempt
        rewardedRetryAttempt = 0;
    }

    private void OnRewardedAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Rewarded ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
        rewardedRetryAttempt++;
        double retryDelay = Math.Pow(2, Math.Min(6, rewardedRetryAttempt));

        Debug.Log("Rewarded ad failed to load with error code: " + errorInfo.Code);

        RewardedText.text = "Loading Rewarded Ad... "+errorInfo.Code;
        Invoke("LoadRewardedAd", (float)retryDelay);
    }

    private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad failed to display. We recommend loading the next ad
        Debug.Log("Rewarded ad failed to display with error code: " + errorInfo.Code);
        LoadRewardedAd();
    }

    private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.RewardedAdDisplayed);
        Debug.Log("Rewarded ad displayed");
        RewardedText.text = "Displayed Rewarded Ad...";
    }

    private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.RewardedAdClicked);
        Debug.Log("Rewarded ad clicked");
        RewardedText.text = "Clicked Rewarded Ad...";
    }

    private void OnRewardedAdDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.RewardedAdClosed);
        if (RewardedAdDoneEvent != null)
        {
            RewardedAdDoneEvent();
        }
        // Rewarded ad is hidden. Pre-load the next ad
        Debug.Log("Rewarded ad dismissed");
        RewardedText.text = "Dismissed Rewarded Ad...";
        LoadRewardedAd();
    }
    private void AdmobDoneReward()
    {
        if (RewardedAdDoneEvent != null)
        {
            RewardedAdDoneEvent();
        }
    }
    private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
    {
        GiveRewardAction();
        Debug.LogError("reward Given");
    }

    private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad revenue paid. Use this callback to track user revenue.
        Debug.Log("Rewarded ad revenue paid");
        RewardedText.text = "Revenue Paid By Rewarded Ad...";
        // Ad revenue
        double revenue = adInfo.Revenue;

        // Miscellaneous data
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD" in most cases!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

        // TrackAdRevenue(adInfo);
    }

#endregion


#region Banner Ad Methods

    private void InitializeBannerAds()
    {
        MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerAdLoadedEvent;
        MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdFailedEvent;
        MaxSdkCallbacks.Banner.OnAdClickedEvent += OnBannerAdClickedEvent;
        MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnBannerAdRevenuePaidEvent;
        MaxSdk.CreateBanner(bannerAdID, MaxSdkBase.BannerPosition.TopCenter);
        MaxSdk.SetBannerBackgroundColor(bannerAdID, Color.black);
    }
    public void ShowBanner()
    {
        //MaxSdk.CreateBanner();
        //MaxSdk.LoadBanner(AdsIDS.BannerAdID);
        MaxSdk.ShowBanner(bannerAdID);
        AdmobGA_Helper.GA_Log(AdmobGAEvents.BannerAdDisplayed);
    }
    public void HideBanner()
    {
        MaxSdk.HideBanner(bannerAdID);
        AdmobGA_Helper.GA_Log(AdmobGAEvents.BannerAdRemoved);
    }
    public void ToggleBannerVisibility()
    {
        if (!isBannerShowing)
        {
            MaxSdk.ShowBanner(bannerAdID);
        }
        else
        {
            MaxSdk.HideBanner(bannerAdID);
        }

        isBannerShowing = !isBannerShowing;
    }

    private void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.BannerAdLoaded);
        Debug.Log("Banner ad loaded");
    }

    private void OnBannerAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdFailToLoad);
        Debug.Log("Banner ad failed to load with error code: " + errorInfo.Code);
    }

    private void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.InterstitialAdClicked);
        Debug.Log("Banner ad clicked");
    }

    private void OnBannerAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        Debug.Log("Banner ad revenue paid");
        double revenue = adInfo.Revenue;
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD" in most cases!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

        //TrackAdRevenue(adInfo);
    }

#endregion

#region MREC Ad Methods

    private void InitializeMRecAds()
    {
        // Attach Callbacks
        MaxSdkCallbacks.MRec.OnAdLoadedEvent += OnMRecAdLoadedEvent;
        MaxSdkCallbacks.MRec.OnAdLoadFailedEvent += OnMRecAdFailedEvent;
        MaxSdkCallbacks.MRec.OnAdClickedEvent += OnMRecAdClickedEvent;
        MaxSdkCallbacks.MRec.OnAdRevenuePaidEvent += OnMRecAdRevenuePaidEvent;

        // MRECs are automatically sized to 300x250.
        MaxSdk.CreateMRec(RecID, MaxSdkBase.AdViewPosition.BottomLeft);
    }

    public void ShowMRec()
    {
        if (PlayerPrefs.GetInt("RemoveAds") == 6676)
        {
            return;
        }
        //admobManager.ShowBigBanner();
        MaxSdk.ShowMRec(RecID);
        AdmobGA_Helper.GA_Log(AdmobGAEvents.MrecDisplayed);
    }
    public void HideMRec()
    {
       // admobManager.HideBigBanner();
        MaxSdk.HideMRec(RecID);
        AdmobGA_Helper.GA_Log(AdmobGAEvents.MrecRemoved);
    }
    private void ToggleMRecVisibility()
    {
        if (!isMRecShowing)
        {
            MaxSdk.ShowMRec(RecID);
        }
        else
        {
            MaxSdk.HideMRec(RecID);
        }

        isMRecShowing = !isMRecShowing;
    }

    private void OnMRecAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.MrecLoaded);
        // MRec ad is ready to be shown.
        // If you have already called MaxSdk.ShowMRec(MRecAdUnitId) it will automatically be shown on the next MRec refresh.
        Debug.Log("MRec ad loaded");
    }

    private void OnMRecAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.MrecNotLoaded);
        // MRec ad failed to load. MAX will automatically try loading a new ad internally.
        Debug.Log("MRec ad failed to load with error code: " + errorInfo.Code);
    }

    private void OnMRecAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        AdmobGA_Helper.GA_Log(AdmobGAEvents.MrecClicked);
        Debug.Log("MRec ad clicked");
    }

    private void OnMRecAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // MRec ad revenue paid. Use this callback to track user revenue.
        Debug.Log("MRec ad revenue paid");

        // Ad revenue
        double revenue = adInfo.Revenue;

        // Miscellaneous data
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD"!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to

        // TrackAdRevenue(adInfo);
    }

#endregion

    //private void TrackAdRevenue(MaxSdkBase.AdInfo adInfo)
    //{
    //    AdjustAdRevenue adjustAdRevenue = new AdjustAdRevenue(AdjustConfig.AdjustAdRevenueSourceAppLovinMAX);

    //    adjustAdRevenue.setRevenue(adInfo.Revenue, "USD");
    //    adjustAdRevenue.setAdRevenueNetwork(adInfo.NetworkName);
    //    adjustAdRevenue.setAdRevenueUnit(adInfo.AdUnitIdentifier);
    //    adjustAdRevenue.setAdRevenuePlacement(adInfo.Placement);

    //    Adjust.trackAdRevenue(adjustAdRevenue);
    //}
}

