﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEditor;
using System;

public class LoadingScript : SplashBase
{
    public GameObject loadingScreen;
    public Image loadingSlider;
    public Text loadingText;

    public override void OnAccept()
    {
        Scene("Gameplay");    
    }
    public override void OnLoadingLevel(float value)
    {
        loadingSlider.fillAmount = value;
        string percent = (loadingSlider.fillAmount * 100).ToString("F0");
        loadingText.text = string.Format("<size=35>{0}%</size>", percent);
    }
    public void Scene(string leveName)
    {
        Time.timeScale = 1;
        loadingScreen.SetActive(true);
        StartCoroutine(LoadScene(leveName));
        StartCoroutine(LoadAd());
        Resources.UnloadUnusedAssets();
        Time.timeScale = 1;
    }

    IEnumerator LoadScene(string name)
    {
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(name);
        asyncOperation.allowSceneActivation = false;

        float timer = 0;
        float duration = 7;

        while (timer < 1)
        {
            timer += Time.deltaTime / duration;
            loadingSlider.fillAmount = timer; //-------set loading speed
            string percent = (loadingSlider.fillAmount * 100).ToString("F0");
            loadingText.text = string.Format("<size=35>{0}%</size>", percent);

            yield return null;
        }

        asyncOperation.allowSceneActivation = true;
    }

    IEnumerator LoadAd()
    {
        yield return new WaitForSeconds(.3f);
        if (SceneManager.GetActiveScene().buildIndex != 0)
        {
            AdsManager.Instance.ShowInterstitial("_Loading");
        }
        Time.timeScale = 1;
    }
}



