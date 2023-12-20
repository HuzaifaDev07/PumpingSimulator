using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class FuelPopUp : MonoBehaviour
{
    [SerializeField] Text AmountEarn;

    private void Start()
    {
        AmountEarn.text = "Earn +" + GameManager.Instance.FuelSystem.GetFuelEarnAmount().ToString() + "$";
    }
}
