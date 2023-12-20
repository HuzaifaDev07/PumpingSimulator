using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class FuelMeterDisplay : MonoBehaviour
{
    public float typingSpeed = 0.05f; // Adjust the typing speed
    [HideInInspector] public string fullText; // The complete text to be typed out
    private Text textComponent;
    Coroutine refCoroutine;
    private void Start()
    {
        textComponent = GetComponent<Text>();
    }

    public void StartFuelMeter()
    {
        textComponent.text = "";
        refCoroutine = StartCoroutine(UpdateMoney());
    }

    int currentMoney = 0;
    IEnumerator UpdateMoney()
    {
        int targetMoney = 100; // Set your target money amount

        while (currentMoney < targetMoney)
        {
            currentMoney += 4; // You can adjust the increment amount

            if (currentMoney > targetMoney)
                currentMoney = targetMoney;

            textComponent.text = "%" + currentMoney.ToString("N0") + " \n " + GameManager.Instance.FuelSystem.GetFuelEarnAmount() + "$"; // Format with commas for better readability

            yield return new WaitForSeconds(typingSpeed);
        }
        StopCoroutine(refCoroutine);
    }
}
