using AR;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[System.Serializable]
public class UpgradeItems
{
    [SerializeField] string itemName = "Item0";
    public GameObject[] ActiveObject;
    public GameObject[] DisableObject;
    public int UpgradeAmount;
    public int ToDoForUpgrade;
    public bool TrashTask;
    [TextArea]
    public string UpgradeItemObjective;
    [TextArea]
    public string TaskToDo;
}

[System.Serializable]
public class ExtarEarnItems
{
    [SerializeField] string ItemName;
    public GameObject ItemObjects;
    public SpawnPlaceChecker[] SpaceCheck;
    public bool Spawnable;

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
    [Space(10)]
    public UpgradeItems[] _upgradeItems;
    [Space(10)]
    [SerializeField] PlayerManager playerManager;
    [SerializeField] MarketManager marketManager;
    [SerializeField] GameObject HudCanvas;
    [SerializeField] GameObject OldStationCars;
    [SerializeField] GameObject NewStationCars;
    [SerializeField] Transform PlayerSpawn;
    [SerializeField] ObjectDetect objectDetect;
    [SerializeField] Transform PumpHandlePos;
    [SerializeField] Transform OldGasPumpReturnPos;
    [SerializeField] Transform NewGasPumpPos;
    [SerializeField] Transform PlayerFuelingPos;
    [SerializeField] FuelMeterDisplay fuelMeterDisplay;
    [SerializeField] GameObject OldPumpStation;
    [SerializeField] GameObject NewPumpStation;
    [SerializeField] GameObject FuelDecreaser;
    [SerializeField] GameObject UpgradeNewPumpScene;
    [SerializeField] GameObject marketObject;
    [SerializeField] GameObject TaskTutorial;
    [SerializeField] GameObject OldPumpTank;
    bool LoadInGameAd = true;
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

    int adCounter = 0;
    Coroutine refCoroutine;

    [SerializeField] GameObject playerCounterPos;

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
        else
        {
            AdsManager.Instance.ShowBanner();
        }


        ActiveFuelName();
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
        if (PrefData.GetTask() > 1)
        {
            OldPumpTank.SetActive(true);
        }
        else
        {
            OldPumpTank.SetActive(false);
        }

        if (PrefData.GetTask() == 4)
        {
            PrefData.SetTask(false, 5);
            _uiManager.fadeScreen.SetActive(false);
            _uiManager.ExtraEarnOption.SetActive(true);
        }
        Debug.LogError(PrefData.GetPumpUpgrade() + "Up");
        if (PrefData.GetPumpUpgrade() >= 1)
        {
            ActiveUpgradeEnvAssets();
        }
        if (PrefData.GetTask() >= 3)
        {
            TaskCounterUpdate();
            //_uiManager.ObjectiveTxt.gameObject.SetActive(false);
            marketManager.OpenShop();
            playerCounterPos.SetActive(true);
        }


        refCoroutine = StartCoroutine(ShowAd());
    }

    public void ActiveUpgradeEnvAssets()
    {
        for (int i = 0; i < _upgradeItems.Length; i++)
        {
            if (i < PrefData.GetPumpUpgrade())
            {
                for (int j = 0; j < _upgradeItems[i].ActiveObject.Length; j++)
                {
                    _upgradeItems[i].ActiveObject[j].SetActive(true);
                }
            }
        }

        for (int i = 0; i < _upgradeItems.Length; i++)
        {
            if (i < PrefData.GetPumpUpgrade())
            {
                for (int j = 0; j < _upgradeItems[i].DisableObject.Length; j++)
                {
                    _upgradeItems[i].DisableObject[j].SetActive(false);
                }
            }
        }

        //for (int i = 0; i < _upgradeItems[PrefData.GetPumpUpgrade()].DisableObject.Length; i++)
        //{
        //    _upgradeItems[i].DisableObject[i].SetActive(false);
        //}
    }

    public void ShowUpgradePumpPopUp()
    {
        _uiManager.UpgradePumpBtn.SetActive(true);
        _uiManager.UpgradeItemImg.sprite = _uiManager.UpgradeItemSprites[PrefData.GetPumpUpgrade()];

    }
    public void OpenUpgradePanel()
    {
        for (int i = 0; i < _uiManager.UpgradePumpOwnAndNext.Length; i++)
        {
            if (i == PrefData.GetPumpUpgrade())
            {
                _uiManager.UpgradePumpOwnAndNext[i].SetActive(true);
            }
            else
            {
                _uiManager.UpgradePumpOwnAndNext[i].SetActive(false);
            }
        }

        _uiManager.UpgradePumpPanel.SetActive(true);
        _uiManager.UpgradePumpObject.text = "Buy :" + _upgradeItems[PrefData.GetPumpUpgrade()].UpgradeAmount;
    }

    public void ShowObjective(int index)
    {
        if (PrefData.GetTask() < 3)
        {
            _uiManager.fadeScreen.SetActive(true);
            _uiManager.objectivePannel.SetActive(true);
            _uiManager.objectivePannel.transform.DOScale(Vector3.one, 0.5f);
            _uiManager.okButton.SetActive(false);
            StartCoroutine(DelayOkButton());
            // ObjectiveTextTyper(index);
            _uiManager.ControlBtns.SetActive(false);
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

            if (PrefData.GetTask() > 3)
            {
                _uiManager.TabBtn.SetActive(true);
            }

            //FuelDecreaser.SetActive(true);
            _uiManager.ControlBtns.SetActive(true);
            OldStationCars.SetActive(true);
            //if (PrefData.GetPumpUpgrade() == 0)
            //{
            //    OldStationCars.SetActive(true);
            //    NewStationCars.SetActive(false);
            //}
            //else
            //{
            //    OldStationCars.SetActive(false);
            //    NewStationCars.SetActive(true);
            //}

        }
        Debug.LogError(PrefData.GetTask());
    }
    IEnumerator DelayOkButton()
    {
        yield return new WaitForSeconds(3);
        _uiManager.okButton.SetActive(true);
    }
    //public void ObjectiveTextTyper(int index)
    //{
    //    _uiManager.okButton.SetActive(false);
    //    _uiManager.ObjectiveTxt.text = "";
    //    Debug.LogError("TypingStart");
    //    StartCoroutine(TypeSentence(Objectives[index]));
    //}
    //IEnumerator TypeSentence(string sentence)
    //{
    //    foreach (char letter in sentence)
    //    {
    //        _uiManager.ObjectiveTxt.text += letter;
    //        if (letter == '.' || letter == '?')
    //        {
    //            break;
    //        }
    //        yield return new WaitForSeconds(0.08f);

    //    }
    //    Debug.LogError("SentenceComplete");
    //    _uiManager.okButton.SetActive(true);
    //}

    public void OK() //ToCloseObjectivePannel
    {
        adCounter++;
        if (adCounter % 2 == 0)
        {
            AdsManager.Instance.ShowInterstitial("ObjectivePannelColse");
            CheckInGameAdState(false);
        }
        _uiManager.objectivePannel.transform.DOScale(Vector3.zero, 0.5f);
        StartCoroutine(DelayDisableObjectivePannel());
    }
    IEnumerator DelayDisableObjectivePannel()
    {
        yield return new WaitForSeconds(0.75f);
        _uiManager.fadeScreen.SetActive(false);
        _uiManager.objectivePannel.SetActive(false);
        _uiManager.ControlBtns.SetActive(true);
        if (PrefData.GetTask() == 3)
        {
            PrefData.SetTask(false, 5);
            _uiManager.ExtraEarnOption.SetActive(true);
            _uiManager.TabBtn.SetActive(true);
        }


    }
    public void ActiveFuelName()
    {
        if (PrefData.GetPumpPurchased() > 0)
        {
            //_uiManager.ObjectiveTxt.transform.parent.gameObject.SetActive(false);
            FuelName.SetActive(true);
            for (int i = 0; i < _uiManager.Station.Length; i++)
            {
                _uiManager.Station[i].text = PlayerPrefs.GetString("PumpName") + " Station";
            }
            // _uiManager.StationNameInput.text = PlayerPrefs.GetString("PumpName");

        }

    }

    public void CarSelled()
    {
        CheckInGameAdState(false);
        AdsManager.Instance.ShowInterstitial("CarSelled");
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
        CheckInGameAdState(false);
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

    public void CallRewardFreePump()
    {
        CheckInGameAdState(false);
        AdsManager.Instance.ShowRewarded(RewardedPumpPurchase, "PumpPurchase");
    }

    public bool CheckInGameAdState(bool load)
    {
        LoadInGameAd = load;
        return LoadInGameAd;
    }

    IEnumerator ShowAd()
    {
        yield return new WaitForSeconds(40);
        _uiManager.Joystick.SetActive(false);
        _uiManager.LoadingAdPopUp.SetActive(true);
        yield return new WaitForSeconds(2);
        if (CheckInGameAdState(LoadInGameAd))
        {
            AdsManager.Instance.ShowInterstitial("_30SecGameAd");
            CheckInGameAdState(LoadInGameAd);
        }
        _uiManager.LoadingAdPopUp.SetActive(false);
        _uiManager.Joystick.SetActive(true);
        LoadInGameAd = true;
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
        //AdsManager.Instance.ShowInterstitial("PumpNameSet");
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void PickPickFuelPump()
    {
        FuelSystem.GetFuelIndex();  ///////  ---------------- >>>>>>>   Getting Value From FuelSystem Object;

        playerManager.GetComponent<CharacterController>().enabled = false;
        playerManager.transform.SetParent(PlayerFuelingPos);
        playerManager.transform.position = PlayerFuelingPos.position;
        playerManager.transform.rotation = PlayerFuelingPos.rotation;
        Debug.Log("Call");
        _uiManager.Joystick.SetActive(false);
        objectDetect.DetectObject.transform.SetParent(playerManager.PumpHandler.transform);
        objectDetect.DetectObject.transform.position = playerManager.PumpHandler.transform.position;
        objectDetect.DetectObject.transform.rotation = playerManager.PumpHandler.transform.rotation;
        PumpPick = true;
    }

    public void FillFuel()
    {
        //fuelMeterDisplay.StartFuelMeter();
        playerManager.GetComponent<CharacterController>().enabled = true;
        _uiManager.putPumpinCar.SetActive(false);
        _uiManager.Joystick.SetActive(true);
        objectDetect.enabled = false;
        objectDetect.DetectObject.transform.SetParent(objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea);
        objectDetect.DetectObject.transform.position =
            objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea.transform.position;
        objectDetect.DetectObject.transform.rotation =
            objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea.transform.rotation;
        StartCoroutine(TankFilled());

    }

    IEnumerator TankFilled()
    {
        float fuelTime = FuelSystem.GetFuelTime();

        // Tween the fill amount of the fuelFillImage from 0 to 1 over the fuelTime duration
        _uiManager.CarFuelObj.SetActive(true);
        _uiManager.fuelFillImage.DOFillAmount(1f, fuelTime).SetEase(Ease.Linear);

        yield return new WaitForSeconds(fuelTime);

        // Reset the fill amount and show the FuelFilledPopUp
        _uiManager.fuelFillImage.fillAmount = 0f;

        _uiManager.FuelFilledPopUp.SetActive(true);
        _uiManager.FuelFilledPopUp.transform.DOScale(Vector3.one, 0.5f);
    }


    //IEnumerator TankFilled()
    //{
    //    yield return new WaitForSeconds(FuelSystem.GetFuelTime());
    //    _uiManager.FuelFilledPopUp.SetActive(true);
    //    _uiManager.FuelFilledPopUp.transform.DOScale(Vector3.one, 0.5f);
    //}

    public void UpgradePump()
    {
        if (PrefData.GetCash() >= _upgradeItems[PrefData.GetPumpUpgrade()].UpgradeAmount)
        {
            TaskCounter = 0;
            playerManager.gameObject.SetActive(false);
            _uiManager.UpdateCash(_upgradeItems[PrefData.GetPumpUpgrade()].UpgradeAmount);
            _uiManager.UpgradePumpPanel.SetActive(false);
            CheckInGameAdState(false);
            AdsManager.Instance.ShowInterstitial("UpgradePump");
            PrefData.SetPumpUpgrade(true, 1);
            ActiveUpgradeEnvAssets();
            TaskCounterUpdate();
            _uiManager.Canvas.SetActive(false);
            _uiManager.MainUpgradePumpObject.SetActive(false);
            _uiManager.UpgradePumpBtn.SetActive(false);
            StartCoroutine(ReloadScene());
        }
        else
        {
            MobileToast.Show("Not Enough Money", false);
        }
    }
    IEnumerator ReloadScene()
    {
        yield return new WaitForSeconds(4);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void Okay() // after fuel filled pop up close
    {
        _uiManager.CarFuelObj.SetActive(false);
        if (!_upgradeItems[PrefData.GetPumpUpgrade()].TrashTask)
        {
            TaskCounter++;
            if (TaskCounter >= _upgradeItems[PrefData.GetPumpUpgrade()].ToDoForUpgrade)
            {
                ShowUpgradePumpPopUp();
            }
        }
        TaskCounterUpdate();
        playerManager.GetComponent<CharacterController>().enabled = true;
        playerManager.transform.SetParent(null);

        _uiManager.ControlBtns.SetActive(true);
        objectDetect.DetectObject.transform.SetParent(null);
        _uiManager.UpdateCash(FuelSystem.GetFuelEarnAmount(), true);
        Instantiate(_uiManager.EarnMoney, _uiManager.Canvas.transform);
        objectDetect.DetectObject.transform.SetPositionAndRotation(OldGasPumpReturnPos.position, OldGasPumpReturnPos.rotation);
        objectDetect.CarDetectRef.GetComponent<CarEssentials>().StartMoveCar();
        objectDetect.enabled = true;
        if (PrefData.GetTask() == 3 && PrefData.GetPumpUpgrade() >= 3)
        {
            PrefData.SetTask(false, 4);
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
        PumpPick = false;
        _uiManager.FuelFilledPopUp.transform.DOScale(Vector3.zero, 0.5f);
        StartCoroutine(DisableFuelFilledPopUp());
    }

    IEnumerator DisableFuelFilledPopUp()
    {
        yield return new WaitForSeconds(0.75f);
        _uiManager.FuelFilledPopUp.SetActive(false);
        if (!PumpPick)
        {
            _uiManager.ControlBtns.SetActive(true);
        }
        AdsManager.Instance.ShowInterstitial("FuelFilled");
        CheckInGameAdState(false);
    }

    private void OnDisable()
    {
        ES3AutoSaveMgr.Current.Save();
        if (Application.isPlaying && refCoroutine != null)
        {
            
            StopCoroutine(refCoroutine);
        }
    }

    #region ------------------ Tab-Working -------------------------

    public void OpenTab()
    {
        _uiManager.ObjectiveTxt.gameObject.SetActive(false);
        _uiManager.ExtraEarnOption.SetActive(false);
        PrefData.SetTask(false, 5);
        _uiManager.TabBtn.SetActive(false);
        _uiManager.ControlBtns.SetActive(false);
        MobilePhone.SetActive(true);
    }
    public void OpenStore()
    {
        ItemIndex = 0;
        _uiManager.ObjectiveTxt.gameObject.SetActive(false);
        CloseCompleteOrderPanel(false);
        _uiManager.StorePanel.SetActive(true);
        _uiManager.StorePanel.GetComponent<DOTweenAnimation>().DOPlayForward();
        StoreData.LoadStoreData(_uiManager.ItemAmountTxt, _uiManager.ItemNameTxt, _uiManager.ItemImage, _uiManager.AddButton);
    }
    public void CloseStore()
    {
        Debug.Log("Return");
        _uiManager.StorePanel.GetComponent<DOTweenAnimation>().DOPlayBackwards();
    }
    public void CloseTab()
    {
        CheckInGameAdState(false);

        AdsManager.Instance.ShowInterstitial("MobileClosed");
        _uiManager.ObjectiveTxt.gameObject.SetActive(false);
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
        StoreData.BuyItem(ItemIndex, _uiManager.GetFreeCoinsPanel, _uiManager.OrderCompletePanel, false);
    }
    public void RewardBaseBuyItem()
    {
        CheckInGameAdState(false);
        AdsManager.Instance.ShowRewarded(BuyItemOnReward, "OnlineItemBuy");
    }
    public bool BuybyReward;
    void BuyItemOnReward()
    {
        BuybyReward = true;
        StoreData.BuyItem(ItemIndex, _uiManager.GetFreeCoinsPanel, _uiManager.OrderCompletePanel, true);
    }
    public void AddItemInCart(int index)
    {
        ItemIndex = StoreData.ItemAddInCart(index, _uiManager.MainItemTotal, _uiManager.BuyBtn, _uiManager.RewardBuyBtn, _uiManager.AddButton);
        StoreData.DisplayMainScreen(_uiManager.MainItemShipping, _uiManager.MainItemName, _uiManager.MainItemAmount, _uiManager.MainItemImage, ItemIndex, false, _uiManager.MainItemTotal, _uiManager.AddButton);
    }
    public void ResetMainOrderScreen() => StoreData.DisplayMainScreen(_uiManager.MainItemShipping, _uiManager.MainItemName, _uiManager.MainItemAmount, _uiManager.MainItemImage, ItemIndex, true, _uiManager.MainItemTotal, _uiManager.AddButton);
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
        CustomerManager.instance.MachineUnlock(ItemIndex);
        StoreData.SpawnItem(ItemIndex, playerManager.ItemHandHeld);
        if (extarEarnItems[ItemIndex].Spawnable)
        {
            for (int i = 0; i < extarEarnItems.Length; i++)
            {
                if (!extarEarnItems[ItemIndex].SpaceCheck[i].IsFilled)
                {
                    Instantiate(extarEarnItems[ItemIndex].ItemObjects, extarEarnItems[ItemIndex].SpaceCheck[i].transform.localPosition, extarEarnItems[ItemIndex].SpaceCheck[i].transform.localRotation);
                    extarEarnItems[ItemIndex].SpaceCheck[i].IsFilled = true;
                    //return SpaceCheck[i].transform;
                    break;
                }
            }
        }
        else
        {
            extarEarnItems[ItemIndex].ItemObjects.SetActive(true);
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

    #region -------- TaskHandler -----------
    [Space(20)]
    [Header(" ------  Counter --------")]
    public GameObject TaskObjective;
    public Text TaskObjectiveTxt;
    public int TaskCounter;
    public Text TaskText;
    bool block;
    public void TaskCounterUpdate()
    {
        if (PrefData.GetPumpUpgrade() < 3)
        {
            if (PlayerPrefs.GetInt("TaskTutorial") == 0)
            {
                PlayerPrefs.SetInt("TaskTutorial", 1);
                TaskTutorial.SetActive(true);

            }
            else
            {
                TaskTutorial.SetActive(false);
            }

            TaskObjectiveTxt.text = _upgradeItems[PrefData.GetPumpUpgrade()].TaskToDo;
            TaskObjective.SetActive(true);
            TaskText.text = TaskCounter + "/" + _upgradeItems[PrefData.GetPumpUpgrade()].ToDoForUpgrade;
            if (_upgradeItems[PrefData.GetPumpUpgrade()].TrashTask && !block)
            {
                block = true;
                for (int i = 0; i < TrashBags.Length; i++)
                {
                    TrashBags[i].gameObject.SetActive(true);
                    TrashBags[i].hudNavigationElement.enabled = true;
                }

            }
        }
    }



    #endregion


}
#if UNITY_EDITOR
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
#endif