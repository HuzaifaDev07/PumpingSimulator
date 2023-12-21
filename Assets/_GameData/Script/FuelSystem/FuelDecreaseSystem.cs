using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class FuelDecreaseSystem : MonoBehaviour
{
    public float maxValue = 100f; // Maximum value of the bar
    public float decreaseRate = 1f; // Rate at which the bar decreases per second

    private Image barImage;
    private float currentValue;
    Coroutine refCoroutine;
    private void Start()
    {
        barImage = GetComponent<Image>();

        // Load the previous value from PlayerPrefs
        currentValue = PlayerPrefs.GetFloat("BarValue", maxValue);
        UpdateBar();

        // Start the decreasing coroutine
        refCoroutine = StartCoroutine(DecreaseBarCoroutine());
    }

    private IEnumerator DecreaseBarCoroutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(1f); // Wait for 1 second

            // Decrease the bar value over time
            currentValue -= decreaseRate;
            UpdateBar();
        }
    }

    private void UpdateBar()
    {
        // Clamp the value to be within the valid range
        currentValue = Mathf.Clamp(currentValue, 0f, maxValue);

        // Update the UI image fill amount
        barImage.fillAmount = currentValue / maxValue;
        if (barImage.fillAmount < .4f)
        {
            UiManager.instance.FuelLowPanel.SetActive(true);
        }
        if (barImage.fillAmount <= 0)
        {
            GameManager.NotEnoughFuel = true;
            StopCoroutine(refCoroutine);
        }
    }

    private void OnApplicationQuit()
    {
        // Save the current value to PlayerPrefs when the game quits
        PlayerPrefs.SetFloat("BarValue", currentValue);
        PlayerPrefs.Save();
    }
}
