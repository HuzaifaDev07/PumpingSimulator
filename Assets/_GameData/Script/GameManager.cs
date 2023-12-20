using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

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
        }
        else
        {
            for (int i = 0; i < TrashBags.Length; i++)
            {
                TrashBags[i].gameObject.SetActive(false);
            }

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
        _uiManager.UpdateCash(4500, true);
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
        objectDetect.DetectObject.transform.SetParent(playerManager.ItemHandHeld.transform);
        PumpPick = true;
    }

    public void FillFuel()
    {

        fuelMeterDisplay.StartFuelMeter();
        _uiManager.putPumpinCar.SetActive(false);
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

        yield return new WaitForSeconds(FuelSystem.GetFuelTime());
        _uiManager.Joystick.SetActive(true);
        _uiManager.UpdateCash(FuelSystem.GetFuelEarnAmount(), true);
        Instantiate(_uiManager.EarnMoney, _uiManager.Canvas.transform);
        objectDetect.DetectObject.transform.position = PumpReturnPos.position;
        objectDetect.DetectObject.transform.rotation = PumpReturnPos.rotation;
        objectDetect.CarDetectRef.GetComponent<CarEssentials>().StartMoveCar();
        objectDetect.enabled = true;
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
        _uiManager.TabBtn.SetActive(false);
        _uiManager.ControlBtns.SetActive(false);
        MobilePhone.SetActive(true);
    }

    public void OpenStore()
    {
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
        StoreData.BuyItem(ItemIndex, _uiManager.GetFreeCoinsPanel);
    }

    public void RewardBaseBuyItem()
    {
        AdsManager.Instance.ShowInterstitial(BuyItemOnReward, "OnlineItemBuy");
    }
    void BuyItemOnReward()
    {
        StoreData.BuyItem(ItemIndex, _uiManager.GetFreeCoinsPanel);
    }
    public void AddItemInCart(int index)
    {
        ItemIndex = StoreData.ItemAddInCart(index, _uiManager.MainItemTotal, _uiManager.BuyBtn, _uiManager.RewardBuyBtn);
        StoreData.DisplayMainScreen(_uiManager.MainItemShipping, _uiManager.MainItemName, _uiManager.MainItemAmount, _uiManager.MainItemImage, ItemIndex);
    }
    #endregion
    #region ------------------------- Inventory -------------------------


    public void ShowInventory()
    {
        _uiManager.InventoryPanel.SetActive(true);
        _uiManager.InventoryPanel.GetComponent<DOTweenAnimation>().DOPlayForward();
    }

    public void ClosedInventory()
    {
        _uiManager.InventoryPanel.GetComponent<DOTweenAnimation>().DOPlayBackwards();
        _uiManager.InventoryPanel.SetActive(false);
    }

    public void SpawnItem(int ItemIndex)
    {
        StoreData.SpawnItem(ItemIndex, playerManager.ItemHandHeld);
    }
    #endregion

}
