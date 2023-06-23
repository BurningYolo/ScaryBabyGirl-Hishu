using System.Collections;
using System.Collections.Generic;
using Unity.RemoteConfig;
using UnityEngine;

public class RemoteConfigUnity : MonoBehaviour
{
    public struct userAttributes { }
    public struct appAttributes { }
    public bool IsAdsEnable;
    public static bool AdsEnable;

    private void Awake()
    {
      
    }
    private void OnEnable()
    {
        ConfigManager.FetchCompleted += SetValues;
        ConfigManager.FetchConfigs<userAttributes, appAttributes>
                 (new userAttributes(), new appAttributes());
    }
    void SetValues(ConfigResponse response)
    {
        IsAdsEnable = ConfigManager.appConfig.GetBool("IsAdsEnable");
        AdsEnable = IsAdsEnable;

        if (IsAdsEnable)
        {
            //AdsManager.YODO_INSTANCE.SetDelegates();
            //AdsManager.YODO_INSTANCE.InitializeSdk();
        }
        else
        {
            print("Ads is Disable");
        }

    }
}
