using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiManager : MonoBehaviour
{
    public static UiManager instance;
    public GameObject FadeScreen;
    public Text ObjectiveTxt;
    public GameObject Canvas;
    public GameObject Joystick;
    public GameObject ControlBtns;

    [Header("----- PickUpBtns -------")]
    public GameObject TrashPickUpBtn;
    public GameObject DropTrashBtn;
    public GameObject PumpHoldBtn;
    public GameObject putPumpinCar;
    public GameObject UpgradeBtn;
    [Space(20)]

    [Header("------- FillBars -------")]
    public Image FillBar;
    public Image fuelFillImage; // Reference to the UI Image component representing the fill 
    public GameObject CarFuelObj; // Reference to the UI Image component representing the fill 
    [Header("----- PopUps -------")]
    public GameObject SellPanel;
    public GameObject BuyFuelStation;
    public GameObject TrashCollectedPopUp;
    public GameObject TrashDispatchPopUp;
    public GameObject PumpNamePanel;
    public GameObject EarnMoney;
    public GameObject LoadingAdPopUp;
    public GameObject GetFreeCoinsPanel;
    public GameObject ExtraEarnOption;
    public GameObject EarnCoinFromToilet;
    public GameObject EarnCoinFromMarket;
    public GameObject FuelFilledPopUp;
    public GameObject objectivePannel;
    public GameObject fadeScreen;
    public GameObject okButton;
    public GameObject UpgradePumpPanel;
    public GameObject MainUpgradePumpObject;
    public GameObject UpgradePumpBtn;
    public GameObject AddMarketPanel;
    public GameObject[] UpgradePumpOwnAndNext;
    // public GameObject ObjectivePannel;
    [Space(20)]
    [Header("------ Text ------")]
    public Text CashText;
    public Text[] Station;
    public Text GasStationMeter;
    public Text MarketItemText;
    public Text UpgradePumpObject;

    public InputField StationNameInput;
    [Space(20)]
    [Header("--------- Tab_Working_Assets ---------")]
    public GameObject TabBtn;
    public GameObject StorePanel;
    public GameObject BuyBtn;
    public GameObject RewardBuyBtn;
    public GameObject OrderCompletePanel;
    public Image MainItemImage;
    public Text MainItemAmount;
    public Text MainItemShipping;
    public Text MainItemName;
    public Text MainItemTotal;
    public Text[] ItemNameTxt;
    public Text[] ItemAmountTxt;
    public Image UpgradeItemImg;
    public Sprite[] UpgradeItemSprites;
    public Image[] ItemImage;
    public Button[] AddButton;

    [Space(20)]
    [Header("------------ InventoryAssets ------------")]
    public GameObject InventoryPanel;
    public GameObject InventoryNotification;
    public GameObject[] OwnedItems;
    public Text[] OwnedItemsTxt;

    [Space(20)]
    [Header("------------ Fuel_Decreaser ------------")]
    public GameObject FuelBuyPanel;
    public GameObject FuelLowPanel;

    private void Awake()
    {
        instance = this;
    }
    /// <summary>
    /// Increase Cash Amount 
    /// </summary>
    /// <param name="amount"></param>
    /// <param name="increase"></param>
    public void UpdateCash(int amount, bool increase)
    {
        if (increase)
            PrefData.SetCash(true, amount);
        else
            PrefData.SetCash(false, amount);
        CashText.text = ConvertNumber(PrefData.GetCash());
    }
    /// <summary>
    ///  Subract Cash On Buy Object
    /// </summary>
    /// <param name="amount"></param>
    public void UpdateCash(int amount)
    {
        PrefData.SetCash(false, PrefData.GetCash() - amount);
        CashText.text = ConvertNumber(PrefData.GetCash());
    }
    /// <summary>
    /// Just Update Cash Amount
    /// </summary>
    public void UpdateCash()
    {
        CashText.text = ConvertNumber(PrefData.GetCash());
    }

    string ConvertNumber(float value)
    {
        float numberToConvert = value;
        string convertedNumber = NumberConverter.ConvertNumberToShortFormat(numberToConvert);
        Debug.Log(convertedNumber); // Output: "1k"
        return convertedNumber;
    }
}

