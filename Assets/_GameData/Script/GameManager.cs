using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    [SerializeField] UiManager _uiManager;
    [SerializeField] PlayerManager playerManager;
    [Header("-------- Objective --------")]
    [TextArea]
    [SerializeField] string[] Objectives;

    [Space(20)]
    [Header("------- Task Objects -----")]
    public GameObject[] TasksObjects;
    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        _uiManager.UpdateCash();
        _uiManager.FadeScreen.SetActive(true);
        if (PrefData.GetTask() == 0)
        {
            ShowObjective(PrefData.GetTask());
        }
    }

    public void ShowObjective(int index)
    {
        _uiManager.ObjectiveTxt.text = Objectives[index];
        TasksObjects[PrefData.GetTask()].SetActive(true);
        if (PrefData.GetTask() != 0)
            TasksObjects[PrefData.GetTask() - 1].SetActive(false);
       
    }



    public void CarSelled()
    {
        PrefData.SetTask(true, 1);
        _uiManager.UpdateCash(4000, true);
        playerManager.ConfettiParticle.SetActive(true);
        _uiManager.SellPanel.SetActive(false);
        TasksObjects[PrefData.GetTask() - 1].SetActive(false);
        TasksObjects[PrefData.GetTask()].SetActive(true);
        playerManager.Audios.clip = playerManager.ThanksSound;
        playerManager.Audios.Play();
    }


    public void WatchAdSellCar()
    {
        PrefData.SetTask(true, 1);
        _uiManager.UpdateCash(6500, true);
        _uiManager.SellPanel.SetActive(false);
        playerManager.ConfettiParticle.SetActive(true);
        _uiManager.SellPanel.SetActive(false);
        TasksObjects[PrefData.GetTask() - 1].SetActive(false);
        TasksObjects[PrefData.GetTask()].SetActive(true);
        playerManager.Audios.clip = playerManager.ThanksSound;
        playerManager.Audios.Play();
    }

}
