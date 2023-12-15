using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiManager : MonoBehaviour
{
    public static UiManager instance;
    public GameObject FadeScreen;
    public Text ObjectiveTxt;

    [Header("----- PickUpBtns -------")]
    public GameObject TrashPickUpBtn;
    public GameObject DropTrashBtn;
    [Space(20)]
    [Header("------- FillBars -------")]
    public Image FillBar;

    [Header("----- PopUps -------")]
    public GameObject SellPanel;
    public GameObject BuyFuelStation;
    public GameObject TrashCollectedPopUp;
    public GameObject TrashDispatchPopUp;

    [Space(20)]
    [Header("------ Text ------")]
    public Text CashText;
    public Text Station;

    private void Awake()
    {
        instance = this;
    }

    public void UpdateCash(int amount, bool increase)
    {
        if (increase)
            PrefData.SetCash(true, amount);
        else
            PrefData.SetCash(false, amount);
        CashText.text = PrefData.GetCash().ToString();

    }

    public void UpdateCash()
    {
        CashText.text = PrefData.GetCash().ToString() + "$";
    }
}

