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
    [Space(20)]
    [Header("------ Text ------")]
    public Text CashText;
    public Text Station;

    public InputField StationNameInput;

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
        CashText.text = PrefData.GetCash().ToString();

    }
    /// <summary>
    ///  Subract Cash On Buy Object
    /// </summary>
    /// <param name="amount"></param>
    public void UpdateCash(int amount)
    {
        PrefData.SetCash(false, PrefData.GetCash() - amount);
        CashText.text = PrefData.GetCash().ToString();
    }
    /// <summary>
    /// Just Update Cash Amount
    /// </summary>
    public void UpdateCash()
    {
        CashText.text = PrefData.GetCash().ToString() + "$";
    }
}

