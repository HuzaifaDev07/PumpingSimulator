using System;
using System.Collections;
using UnityEngine;
using KZ.Utils;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;

public class AdsManager : SingletonX<AdsManager>
{
    #region Instance
    void Awake()
    {
        if (m_Instance == null)
        {
            m_Instance = this;
            DontDestroyOnLoad(gameObject);
            Debug.unityLogger.logEnabled = AdConstants.IsDebugBuild;
        }
        else
            Destroy(gameObject);
    }

    #endregion

    #region Fields 

    [Header("Settings")]
    public bool PersonalizedAds = false;
    public bool IsForFamily = false;
    public bool TestAds = false;

    [Header("References")]
    [SerializeField] AdNetworkAdmob Admob;
    [SerializeField] AdNetworkAppLovin Applovin;
    [SerializeField] FetchAdsRemoteSettings RemoteSettings;

    [Header("Admob IDs")]
    public string AppID;
    public string[] BannerIDs, MrecIDs, InterstitialIDs, RewardedIDs, AppOpenIDs;

    [Header("AppLovin IDs")]
    public string MaxBanner;
    public string MaxInterstitial;
    public string MaxRewarded;
    public const string MaxSDKKey = "d5sDfeSTdolnmhpfxJCZOH51gOmok0EL64Znk0KMp37TmxCgFOFegLfLkQ7SRLoXQMI8McUAgciRXw6oIMQzh5";

    [Header("Banner Settings")]
    public BannerWidth BannerSize = BannerWidth.Full;
    public AdPosition BannerPos = AdPosition.Bottom;
    public AdPosition MrecPos = AdPosition.BottomLeft;

    [Header("Links")]
    public string PrivacyPolicy;
    public string MoreGames;

    [HideInInspector] public bool BannerStatus = false;
    [HideInInspector] public bool MrecStatus = false;
    bool BannerWasActive = false;
    bool MrecWasActive = false;

    #endregion

    #region Properties
    public string RateUsLink => "https://play.google.com/store/apps/details?id=" + Application.identifier;
    public bool HasInterstitial => (Applovin.HasInterstitial(false) || Admob.HasInterstitial(false)) && ReadyForNextInterstitial;
    public bool HasAnyRewarded => (Applovin.HasRewarded(false) || Admob.HasRewarded(false) || Applovin.HasInterstitial(false) || Admob.HasInterstitial(false));
    public bool HasRewarded => (Applovin.HasRewarded(false) || Admob.HasRewarded(false));
    public AdFormat InterstitialType => (OnRewardComplete != null) ? AdFormat.RewardedInt : AdFormat.Interstitial;
    public Action OnMaxBannerLoaded { get; private set; }
    public Action OnMaxBannerFailed { get; private set; }

    Action OnRewardComplete;

    public MaxSdkBase.BannerPosition MaxBannerPos
    {
        get
        {
            switch (BannerPos)
            {
                case AdPosition.Top: return MaxSdkBase.BannerPosition.TopCenter;
                case AdPosition.Bottom: return MaxSdkBase.BannerPosition.BottomCenter;
                case AdPosition.TopLeft: return MaxSdkBase.BannerPosition.TopLeft;
                case AdPosition.TopRight: return MaxSdkBase.BannerPosition.TopRight;
                case AdPosition.BottomLeft: return MaxSdkBase.BannerPosition.BottomLeft;
                case AdPosition.BottomRight: return MaxSdkBase.BannerPosition.BottomRight;
                case AdPosition.Center: return MaxSdkBase.BannerPosition.Centered;
                default: return MaxSdkBase.BannerPosition.BottomCenter;
            }
        }
    }

    #endregion

    #region Delegates

    public delegate void OnAdnetworkInit();
    public static OnAdnetworkInit OnAdmobInitSuccess;
    public static OnAdnetworkInit OnApplovinInitSuccess;

    #endregion

    #region Initialization

    [ContextMenu("Initialize_AdNetworks")]
    public void Initialize_AdNetworks()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        ThreadDispatcher.Initialize();
        AdsRemoteSettings.Initialize();
        GameAnalyticsSDK.GameAnalytics.Initialize();

        StartCoroutine(AdsRoutine());
    }

    IEnumerator AdsRoutine()
    {
        var waitForInternet = new WaitForSecondsRealtime(15);
        while (!AdConstants.InternetAvailable)
            yield return waitForInternet;

        var waitForOneSecond = new WaitForSecondsRealtime(1);

        yield return new WaitForEndOfFrame(); RemoteSettings.Initialize();
        yield return waitForOneSecond; Admob.Initialize();
        yield return waitForOneSecond; FirebaseManager.Initialize();
        //yield return waitForOneSecond; AppsFlyerSDK.AppsFlyerAdRevenue.start();
        yield return waitForOneSecond;

        #region Applovin

        if (Ram() <= 2)
        {
            if (Ram() >= 1 && AdsRemoteSettings.Instance.ShowMediationOn2GB)
                Applovin.Initialize();
        }
        else
            Applovin.Initialize();

        OnMaxBannerLoaded = delegate
        {
            Admob.HideBanner();
            if (BannerStatus)
                Applovin.ShowBanner();
            else
                Applovin.HideBanner();
        };

        OnMaxBannerFailed = delegate
        {
            Applovin.HideBanner(); // Max banner does not hides when it fails to load new one!
            if (BannerStatus)
                Admob.ShowBanner();
            else
                Admob.HideBanner();
        };

        #endregion

        ReportDeviceInfo();
    }

    void ReportDeviceInfo()
    {
        int DeviceRam = Mathf.Clamp(Mathf.CeilToInt(Ram()), 0, 8);
        string RamInGB = $"{DeviceRam.ToString()}GB";
        AnalyticsManager.ReportCustomEvent(AnalyticsType.Extras, "Ram", RamInGB);

        //GameAnalyticsSDK.GameAnalytics.NewDesignEvent($"{AnalyticsType.Extras.ToString()}:Ram:{RamInGB}");
        GameAnalyticsSDK.GameAnalytics.SetCustomDimension01(RamInGB);
    }
    #endregion

    #region Monetization Hack

    private void Start()
    {
        bool CanHack = (isFirstTime && Input.multiTouchEnabled) || AdConstants.IsDebugBuild;
        if (CanHack) StartCoroutine(HackCoroutine());
    }

    IEnumerator HackCoroutine()
    {
        float timer = 0;
        float touchTimer = 0;
        while (timer < 1)
        {
            timer += Time.deltaTime / 10;
            if (Input.touchCount > 2)
            {
                touchTimer += Time.deltaTime;
                if (touchTimer > 3)
                {
                    AdConstants.SwitchToDebugMode();
                    yield break;
                }
            }
            yield return null;
        }
    }

    bool isFirstTime
    {
        get
        {
            bool flag = !PlayerPrefs.HasKey("FirstTimeHack");
            if (flag)
            {
                PlayerPrefs.SetInt("FirstTimeHack", 1);
                PlayerPrefs.Save();
                return true;
            }
            else
                return false;
        }
    }

    #endregion

    #region Banner

    public void ShowBanner()
    {
        if (!AdConstants.AdsRemoved)
        {
            BannerStatus = true;
            if (Applovin.HasBanner())
                Applovin.ShowBanner();
            else
                Admob.ShowBanner();
        }
    }

    public void HideBanner()
    {
        BannerStatus = false;
        Applovin.HideBanner();
        Admob.HideBanner();
    }

    public void DestroyBanner()
    {
        BannerStatus = false;
        Applovin.DestroyBanner();
        Admob.DestroyBanner();
    }

    public void RepositionBanner(AdPosition pos, BannerWidth width)
    {
        if (BannerPos != pos || BannerSize != width)
        {
            BannerPos = pos;
            BannerSize = width;
            Applovin.DestroyBanner();
            Admob.DestroyBanner();
        }
    }

    #endregion

    #region MREC
    public void ShowMREC()
    {
        if (!AdConstants.AdsRemoved)
        {
            MrecStatus = true;
            Admob.ShowMREC();
        }
    }

    public void HideMREC()
    {
        MrecStatus = false;
        Admob.HideMREC();
    }

    public void DestroyMREC()
    {
        MrecStatus = false;
        Admob.DestroyMREC();
    }

    public void RepositionMREC(AdPosition newPos)
    {
        if (MrecPos != newPos)
        {
            this.MrecPos = newPos;
            DestroyMREC();
        }
    }
    #endregion

    #region Banners Status

    public void HideAllBanners()
    {
        BannerWasActive = BannerStatus;
        MrecWasActive = MrecStatus;
        HideBanner();
        HideMREC();
    }

    public void ResumeAllBanners()
    {
        if (BannerWasActive)
            ShowBanner();

        if (MrecWasActive)
            ShowMREC();
    }

    #endregion

    #region Interstital

    int InterstitialCount = 0;
    void CheckInterstitialCount()
    {
        InterstitialCount++;
        if (InterstitialCount > AdsRemoteSettings.Instance.AppOpenAfterXInterstitials)
        {
            ReadyForAppOpen = true;
            InterstitialCount = 0;
            AppOpenTimer = 0;
        }
        else
            ExtendAppOpenTime();
    }

    public void ShowInterstitial(string placementName)
    {
        AnalyticsManager.PlacementName = placementName;
        OnRewardComplete = null;
        ShowInterstitial();
    }

    public void ShowInterstitial(Action onReward, string placementName)
    {
        AnalyticsManager.PlacementName = placementName;
        OnRewardComplete = onReward;
        ResetInterstitialTime();
        ShowInterstitial();
    }

    void ShowInterstitial()
    {
        if (!AdConstants.AdsRemoved && HasInterstitial)
        {
            ExtendInterstitialTime();
            CheckInterstitialCount();

            if (Applovin.HasInterstitial(true)) { Applovin.ShowInterstitial(); }
            else if (Admob.HasInterstitial(true)) { Admob.ShowInterstitial(); }
        }
    }

    float InterstitialTimer = 0;
    bool ReadyForNextInterstitial => Time.time > InterstitialTimer;
    public void ExtendInterstitialTime()
    {
        InterstitialTimer = Time.time + AdsRemoteSettings.Instance.NextInterstitialDelay;
    }
    public void ResetInterstitialTime()
    {
        InterstitialTimer = 0;
    }

    #region Static Interstitial
    public void ShowInterstitial_Static(string placementName)
    {
        AnalyticsManager.PlacementName = placementName;

        if (!AdConstants.AdsRemoved && ReadyForNextInterstitial)
        {
            if (Admob.HasInterstitial(true))
            {
                ExtendInterstitialTime();
                CheckInterstitialCount();
                Admob.ShowInterstitial();
            }
        }
    }

    public void ShowInterstitial_Static(Action onReward, string placementName)
    {
        AnalyticsManager.PlacementName = placementName;
        OnRewardComplete = onReward;

        if (!AdConstants.AdsRemoved && Admob.HasInterstitial(true))
        {
            ExtendInterstitialTime();
            CheckInterstitialCount();
            Admob.ShowInterstitial();
        }
    }
    #endregion

    #endregion

    #region Rewarded

    int RewardedCount = 0;
    void CheckRewardedCount()
    {
        RewardedCount++;
        if (RewardedCount > AdsRemoteSettings.Instance.AppOpenAfterXRewarded)
        {
            ReadyForAppOpen = true;
            RewardedCount = 0;
            AppOpenTimer = 0;
        }
        else
            ExtendAppOpenTime();
    }


    public void ShowRewarded(Action UserReward, string placementName)
    {
        if (!AdConstants.InternetAvailable)
        {
            MobileToast.Show("Sorry, No Internet Connection!", true);
            return;
        }

        OnRewardComplete = UserReward;
        AnalyticsManager.PlacementName = placementName;

        if (Applovin.HasRewarded(true)) { ExtendInterstitialTime(); CheckRewardedCount(); Applovin.ShowRewardedAd(); }
        else if (Admob.HasRewarded(true)) { ExtendInterstitialTime(); CheckRewardedCount(); Admob.ShowRewardedAd(); }
        else ShowInterstitial(UserReward, placementName);
    }

    public void InvokeReward()
    {
        OnRewardComplete?.Invoke();
        OnRewardComplete = null;
    }
    #endregion

    #region AppOpen

    bool ReadyForAppOpen = false;
    float AppOpenTimer = 0;
    int NextAppOpenDelay = 5;

    public void SetAppOpenAutoShow(bool value)
    {
        Admob.ShowAppOpenOnLoad = value;
    }

    public void ExtendAppOpenTime()
    {
        AppOpenTimer = Time.time + NextAppOpenDelay;
    }

    public void OnApplicationPause(bool paused)
    {
        if (!paused && ReadyForAppOpen)
        {
            ReadyForAppOpen = false;
            OnAppStateChanged(AppState.Foreground);
        }
    }

    public void OnAppStateChanged(AppState state)
    {
        if (state == AppState.Foreground)
            ThreadDispatcher.Enqueue(ShowAppOpen);
    }

    public void ShowAppOpen()
    {
        if (!AdConstants.AdsRemoved && !IsForFamily)
        {
            if (Time.time > AppOpenTimer)
            {
                ExtendAppOpenTime();
                Admob.ShowAppOpen();
            }
            //MobileToast.Show_DevMode($"AppOpen Left : {(AppOpenTimer - Time.time).ToString("F2")}s");
        }
    }

    //public void ShowAppOpen()
    //{
    //    if (!AdConstants.AdsRemoved)
    //    {
    //        if (Time.time > AppOpenTimer)
    //        {
    //            ThreadDispatcher.Enqueue(() =>
    //            {
    //                ExtendAppOpenTime();
    //                Admob.ShowAppOpen();
    //            });
    //        }

    //        //MobileToast.Show_DevMode($"AppOpen Left : {(AppOpenTimer - Time.time).ToString("F2")}s");
    //    }
    //}

    //public void OnApplicationPause(bool paused)
    //{
    //    if (Time.realtimeSinceStartup < 3) return;

    //    if (!paused)
    //        ShowAppOpen();
    //}

    #endregion

    #region Misc

    public void VisitWebsite()
    {
        ExtendAppOpenTime();
        Application.OpenURL(PrivacyPolicy);
    }

    float RamSize = -1;
    /// <summary> ///  Returns system memory in GB /// </summary>
    public float Ram()
    {
        if (RamSize.Equals(-1))
            RamSize = Mathf.CeilToInt(((float)SystemInfo.systemMemorySize / 102.4f)) / 10f;

        return RamSize;
    }

    #endregion

    #region GAID
    public static string GetAdvertisingID()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        try
        {
            AndroidJavaClass advertisingIdClass = new AndroidJavaClass("com.kokozone.device.KZMonetization");
            return advertisingIdClass.CallStatic<string>("getAdvertisingId", GetAndroidContext());
        }
        catch (System.Exception)
        {

        }
#endif

        return null;
    }

    static AndroidJavaObject GetAndroidContext()
    {
        AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        return unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
    }
    #endregion

    #region Old GAID
    //    public static string GetAdvertisingID()
    //    {
    //#if UNITY_ANDROID && !UNITY_EDITOR
    //        try
    //        {
    //            //AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
    //            //AndroidJavaObject activity = jc.GetStatic<AndroidJavaObject>("currentActivity");

    //            AndroidJavaClass gaDeviceClass = new AndroidJavaClass("com.gameanalytics.sdk.device.GADevice");

    //            return gaDeviceClass.CallStatic<string>("getGAID");
    //            //bool isLimitAdTrackingEnabled = gaDeviceClass.CallStatic<bool>("getIsLimitedAdTracking");
    //            //Debug.Log("Advertising ID: " + advertisingID);
    //            //Debug.Log("Opt-out status: " + isLimitAdTrackingEnabled);
    //        }
    //        catch (Exception e)
    //        {
    //            Debug.LogError("Error retrieving Advertising ID: " + e.Message);
    //        }
    //#endif

    //        return null;
    //    }

    //    public static bool VerifyAdvertID(string id)
    //    {
    //        if (string.IsNullOrEmpty(id) || id.Equals("00000000-0000-0000-0000-000000000000"))
    //            return false;
    //        else
    //            return true;
    //    }
    #endregion
}

#region Enums
public enum BannerWidth { Full, Half }
#endregion