using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

[System.Serializable]
public class ExtarEarnItems
{
    [SerializeField] string ItemName;
    public GameObject ItemObjects;
    public SpawnPlaceChecker[] SpaceCheck;
}


public enum GameState
{
    Real,
    Debug
}
public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    public GameState _GameState;
    public FuelData FuelSystem;
    public OnlineStoreData StoreData;
    public UiManager _uiManager;

    [SerializeField] PlayerManager playerManager;
    [SerializeField] GameObject HudCanvas;
    [SerializeField] GameObject Cars;
    [SerializeField] Transform PlayerSpawn;
    [SerializeField] ObjectDetect objectDetect;
    [SerializeField] Transform PumpHandlePos;
    [SerializeField] Transform PumpReturnPos;
    [SerializeField] Transform PlayerFuelingPos;
    [SerializeField] FuelMeterDisplay fuelMeterDisplay;
    [SerializeField] GameObject FuelDecreaser;

    public static bool NotEnoughFuel = false;


    [Header("-------- Objective --------")]
    [TextArea]
    [SerializeField] string[] Objectives;

    [Space(20)]
    [Header("------- Task Objects -----")]
    public GameObject[] TasksObjects;
    public GameObject FuelName;
    public TrashBagControl[] TrashBags;
    public TrashBagControl Dustbin;


    public int TrashCounter;
    public bool PumpPick;

    Coroutine refCoroutine;

    [Space(20)]
    [Header("--------- Tab_Working_Assets ---------")]
    [SerializeField] GameObject MobilePhone;
    public int ItemIndex;

    [Space(40)]
    [Header("--------- Extra_Earn_Assets ---------")]
    [SerializeField] ExtarEarnItems[] extarEarnItems;

    private void Awake()
    {
        Instance = this;
        if (PrefData.GetTask() == 0)
        {
            StoreData.ResetData();
        }
    }

    private void Start()
    {
        ES3AutoSaveMgr.Current.Load();
        if (_GameState == GameState.Debug)
        {
            PrefData.SetCash(false, 9000000);
            PrefData.SetTask(false, 4);
        }
        //AdsManager.Instance.ShowBanner();

        _uiManager.UpdateCash();
        _uiManager.FadeScreen.SetActive(true);
        if (PrefData.GetTask() == 0)
        {
            ShowObjective(PrefData.GetTask());
        }
        else
        {
            playerManager.transform.position = PlayerSpawn.position;
            playerManager.transform.rotation = PlayerSpawn.rotation;
            ShowObjective(PrefData.GetTask());
        }
        if (PrefData.GetTask() == 4)
        {
            _uiManager.ExtraEarnOption.SetActive(true);
        }
        ActiveFuelName();
        refCoroutine = StartCoroutine(ShowAd());
    }

    public void ShowObjective(int index)
    {

        if (PrefData.GetTask() < 3)
        {
            _uiManager.ObjectiveTxt.text = Objectives[index];
            TasksObjects[PrefData.GetTask()].SetActive(true);
            if (PrefData.GetTask() != 0)
                TasksObjects[PrefData.GetTask() - 1].SetActive(false);
            if (PrefData.GetTask() == 2)
            {
                for (int i = 0; i < TrashBags.Length; i++)
                {
                    TrashBags[i].hudNavigationElement.enabled = true;
                }
            }
            _uiManager.TabBtn.SetActive(false);
            FuelDecreaser.SetActive(false);
        }
        else
        {
            for (int i = 0; i < TrashBags.Length; i++)
            {
                TrashBags[i].gameObject.SetActive(false);
            }
            _uiManager.TabBtn.SetActive(true);
            FuelDecreaser.SetActive(true);
            Cars.SetActive(true);
        }
        Debug.LogError(PrefData.GetTask());
    }

    public void ActiveFuelName()
    {
        if (PrefData.GetPumpPurchased() > 0)
        {
            _uiManager.ObjectiveTxt.transform.parent.gameObject.SetActive(false);
            FuelName.SetActive(true);
            _uiManager.StationNameInput.text = PlayerPrefs.GetString("PumpName");
        }
    }


    public void CarSelled()
    {
        PrefData.SetTask(true, 1);
        ShowObjective(PrefData.GetTask());
        _uiManager.UpdateCash(5500, true);
        playerManager.ConfettiParticle.SetActive(true);
        _uiManager.SellPanel.SetActive(false);
        TasksObjects[PrefData.GetTask() - 1].SetActive(false);
        TasksObjects[PrefData.GetTask()].SetActive(true);
        playerManager.Audios.clip = playerManager.ThanksSound;
        playerManager.Audios.Play();
    }

    public void WatchAdSellCar()
    {
        AdsManager.Instance.ShowRewarded(AfterRewardSellCar, "SellCar");
    }

    public void AfterRewardSellCar()
    {
        PrefData.SetTask(true, 1);
        ShowObjective(PrefData.GetTask());
        _uiManager.UpdateCash(6500, true);
        _uiManager.SellPanel.SetActive(false);
        playerManager.ConfettiParticle.SetActive(true);
        _uiManager.SellPanel.SetActive(false);
        TasksObjects[PrefData.GetTask() - 1].SetActive(false);
        TasksObjects[PrefData.GetTask()].SetActive(true);
        playerManager.Audios.clip = playerManager.ThanksSound;
        playerManager.Audios.Play();
    }

    public void CallRewardFreePump() => AdsManager.Instance.ShowRewarded(RewardedPumpPurchase, "PumpPurchase");

    IEnumerator ShowAd()
    {
        yield return new WaitForSeconds(30);
        _uiManager.Joystick.SetActive(false);
        _uiManager.LoadingAdPopUp.SetActive(true);
        yield return new WaitForSeconds(2);
        AdsManager.Instance.ShowInterstitial("_30SecGameAd");
        _uiManager.LoadingAdPopUp.SetActive(false);
        _uiManager.Joystick.SetActive(true);

        refCoroutine = StartCoroutine(ShowAd());
    }

    public void RewardedPumpPurchase()
    {
        HudCanvas.SetActive(false);
        _uiManager.ObjectiveTxt.transform.parent.gameObject.SetActive(false);
        FuelName.SetActive(true);
        PrefData.SetPumpPurchased(false, 1);
        playerManager.ConfettiParticle.SetActive(true);
        _uiManager.PumpNamePanel.SetActive(true);
        _uiManager.BuyFuelStation.SetActive(false);
    }

    public void PumpPurchased()
    {
        if (PrefData.GetCash() >= 4500)
        {
            HudCanvas.SetActive(false);
            _uiManager.ObjectiveTxt.transform.parent.gameObject.SetActive(false);
            _uiManager.UpdateCash(4500);
            FuelName.SetActive(true);
            PrefData.SetPumpPurchased(false, 1);
            playerManager.ConfettiParticle.SetActive(true);
            _uiManager.PumpNamePanel.SetActive(true);
            _uiManager.BuyFuelStation.SetActive(false);
            if (refCoroutine != null)
            {
                StopCoroutine(refCoroutine);
            }
        }
        else
        {
            MobileToast.Show("Not Enough Coins To buy", false);
        }
    }

    public void PumpNameSet()
    {
        _uiManager.Canvas.SetActive(false);
        PrefData.SetTask(false, 2);
        PlayerPrefs.SetString("PumpName", _uiManager.StationNameInput.text);
        _uiManager.StationNameInput.text = PlayerPrefs.GetString("PumpName");
        HudCanvas.SetActive(true);
        _uiManager.PumpNamePanel.SetActive(false);
        _uiManager.BuyFuelStation.SetActive(false);
        ShowObjective(PrefData.GetTask());
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void PickPickFuelPump()
    {
        FuelSystem.GetFuelIndex();  ///////  ---------------- >>>>>>>   Getting Value From FuelSystem Object;
        playerManager.transform.position = PlayerFuelingPos.localPosition;
        playerManager.transform.rotation = PlayerFuelingPos.localRotation;
        Debug.Log("Call");
        _uiManager.Joystick.SetActive(false);
        //objectDetect.DetectObject.transform.SetParent(playerManager.ItemHandHeld.transform);
        PumpPick = true;
    }

    public void FillFuel()
    {

        fuelMeterDisplay.StartFuelMeter();
        _uiManager.putPumpinCar.SetActive(false);
        objectDetect.enabled = false;
        //  objectDetect.DetectObject.transform.SetParent(objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea);
        objectDetect.DetectObject.transform.position =
            objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea.transform.position;
        objectDetect.DetectObject.transform.rotation =
            objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea.transform.rotation;
        StartCoroutine(TankFilled());

    }

    IEnumerator TankFilled()
    {

        yield return new WaitForSeconds(FuelSystem.GetFuelTime());
        _uiManager.Joystick.SetActive(true);
        _uiManager.UpdateCash(FuelSystem.GetFuelEarnAmount(), true);
        Instantiate(_uiManager.EarnMoney, _uiManager.Canvas.transform);
        objectDetect.DetectObject.transform.position = PumpReturnPos.position;
        objectDetect.DetectObject.transform.rotation = PumpReturnPos.rotation;
        objectDetect.CarDetectRef.GetComponent<CarEssentials>().StartMoveCar();
        objectDetect.enabled = true;
        PrefData.SetTask(false, 4);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        PumpPick = false;

    }

    private void OnDisable()
    {
        if (Application.isPlaying && refCoroutine != null)
        {
            StopCoroutine(refCoroutine);
        }
    }

    #region ------------------ Tab-Working -------------------------

    public void OpenTab()
    {
        if (PrefData.GetTask() == 4)
        {
            _uiManager.ExtraEarnOption.SetActive(false);
        }
        PrefData.SetTask(false, 5);
        _uiManager.TabBtn.SetActive(false);
        _uiManager.ControlBtns.SetActive(false);
        MobilePhone.SetActive(true);
    }
    public void OpenStore()
    {
        CloseCompleteOrderPanel(false);
        _uiManager.StorePanel.SetActive(true);
        _uiManager.StorePanel.GetComponent<DOTweenAnimation>().DOPlayForward();
        StoreData.LoadStoreData(_uiManager.ItemAmountTxt, _uiManager.ItemNameTxt, _uiManager.ItemImage);
    }
    public void CloseStore()
    {
        Debug.Log("Return");
        _uiManager.StorePanel.GetComponent<DOTweenAnimation>().DOPlayBackwards();
    }
    public void CloseTab()
    {
        MobilePhone.GetComponent<DOTweenAnimation>().DOPlayBackwards();
        StartCoroutine(DisablePhone());
        _uiManager.ControlBtns.SetActive(true);
    }
    IEnumerator DisablePhone()
    {
        yield return new WaitForSeconds(2f);
        _uiManager.TabBtn.SetActive(true);
        MobilePhone.SetActive(false);
    }
    /// <summary>
    /// check Item Index From OnlineStoreData Object
    /// </summary>
    /// <param name="index"></param>
    /// 
    public void BuyItem()
    {
        StoreData.BuyItem(ItemIndex, _uiManager.GetFreeCoinsPanel, _uiManager.OrderCompletePanel);
    }
    public void RewardBaseBuyItem()
    {
        AdsManager.Instance.ShowInterstitial(BuyItemOnReward, "OnlineItemBuy");
    }
    void BuyItemOnReward()
    {
        StoreData.BuyItem(ItemIndex, _uiManager.GetFreeCoinsPanel, _uiManager.OrderCompletePanel);
    }
    public void AddItemInCart(int index)
    {
        ItemIndex = StoreData.ItemAddInCart(index, _uiManager.MainItemTotal, _uiManager.BuyBtn, _uiManager.RewardBuyBtn);
        StoreData.DisplayMainScreen(_uiManager.MainItemShipping, _uiManager.MainItemName, _uiManager.MainItemAmount, _uiManager.MainItemImage, ItemIndex, false, _uiManager.MainItemTotal);
    }
    public void ResetMainOrderScreen() => StoreData.DisplayMainScreen(_uiManager.MainItemShipping, _uiManager.MainItemName, _uiManager.MainItemAmount, _uiManager.MainItemImage, ItemIndex, true, _uiManager.MainItemTotal);
    public void CloseCompleteOrderPanel(bool ActivePanel)
    {
        if (ActivePanel)
        {
            CloseStore();
            ActiveInventoryNotification(true);
        }
        else
        {
            _uiManager.OrderCompletePanel.SetActive(false);
        }
    }
    public void ActiveInventoryNotification(bool ActiveBell) ////////////////////  --------------------- >>>>>> Used to indicate user task
    {
        if (ActiveBell)
            _uiManager.InventoryNotification.SetActive(true);
        else
            _uiManager.InventoryNotification.SetActive(false);

    }

    #endregion
    #region ------------------------- Inventory -------------------------

    public void ShowInventory()
    {
        ActiveInventoryNotification(false);
        _uiManager.InventoryPanel.SetActive(true);
        _uiManager.InventoryPanel.GetComponent<DOTweenAnimation>().DOPlayForward();
        StoreData.ShowOwnedItem(_uiManager.OwnedItems, _uiManager.OwnedItemsTxt);
    }

    public void ClosedInventory()
    {
        _uiManager.InventoryPanel.GetComponent<DOTweenAnimation>().DOPlayBackwards();
        _uiManager.InventoryPanel.SetActive(false);
    }

    public void SpawnItem(int ItemIndex)
    {
        StoreData.SpawnItem(ItemIndex, playerManager.ItemHandHeld);
        for (int i = 0; i < extarEarnItems.Length; i++)
        {
            if (!extarEarnItems[ItemIndex].SpaceCheck[i].IsFilled)
            {
                Instantiate(extarEarnItems[ItemIndex].ItemObjects, extarEarnItems[ItemIndex].SpaceCheck[i].transform.localPosition, extarEarnItems[ItemIndex].SpaceCheck[i].transform.localRotation);
                //return SpaceCheck[i].transform;
                break;
            }
        }
        playerManager.gameObject.SetActive(false);
        _uiManager.Canvas.SetActive(false);
        StartCoroutine(ActivePlayer());
    }
    IEnumerator ActivePlayer()
    {
        yield return new WaitForSeconds(3f);
        playerManager.gameObject.SetActive(true);
        _uiManager.Canvas.SetActive(true);
    }

    #endregion

}
[CustomEditor(typeof(GameManager))]
public class YourScriptEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        GameManager onlineStoreData = (GameManager)target;

        GUILayout.Space(10);

        if (GUILayout.Button("Reset_Online_Store_Data"))
        {
            // Perform your custom action here
            onlineStoreData.StoreData.ResetData();
        }
    }
}