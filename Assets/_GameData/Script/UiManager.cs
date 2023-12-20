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
    [Space(20)]

    [Header("------- FillBars -------")]
    public Image FillBar;

    [Header("----- PopUps -------")]
    public GameObject SellPanel;
    public GameObject BuyFuelStation;
    public GameObject TrashCollectedPopUp;
    public GameObject TrashDispatchPopUp;
    public GameObject PumpNamePanel;
    public GameObject EarnMoney;
    public GameObject LoadingAdPopUp;
    public GameObject GetFreeCoinsPanel;
    [Space(20)]
    [Header("------ Text ------")]
    public Text CashText;
    public Text Station;
    public Text GasStationMeter;

    public InputField StationNameInput;
    [Space(20)]
    [Header("--------- Tab_Working_Assets ---------")]
    public GameObject TabBtn;
    public Text[] ItemNameTxt;
    public Text[] ItemAmountTxt;
    public Image[] ItemImage;

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
        CashText.text = ConvertNumber(PrefData.GetCash()) + "$";
    }

    string ConvertNumber(float value)
    {
        float numberToConvert = value;
        string convertedNumber = NumberConverter.ConvertNumberToShortFormat(numberToConvert);
        Debug.Log(convertedNumber); // Output: "1k"
        return convertedNumber;
    }

}

