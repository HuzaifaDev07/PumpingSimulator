using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    [SerializeField] UiManager _uiManager;
    [SerializeField] PlayerManager playerManager;
    [SerializeField] GameObject HudCanvas;
    [SerializeField] GameObject Cars;
    [SerializeField] Transform PlayerSpawn;
    [SerializeField] ObjectDetect objectDetect;
    [SerializeField] Transform PumpHandlePos;
    [SerializeField] Transform PumpReturnPos;

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
        else
        {
            playerManager.transform.position = PlayerSpawn.position;
            playerManager.transform.rotation = PlayerSpawn.rotation;
            ShowObjective(PrefData.GetTask());
        }
        ActiveFuelName();
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
         
            Cars.SetActive(true);
        }
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


    public void PumpPurchased()
    {
        HudCanvas.SetActive(false);
        _uiManager.ObjectiveTxt.transform.parent.gameObject.SetActive(false);
        _uiManager.UpdateCash(4500);
        FuelName.SetActive(true);
        PrefData.SetPumpPurchased(false, 1);
        playerManager.ConfettiParticle.SetActive(true);
        _uiManager.PumpNamePanel.SetActive(true);
    }

    public void PumpNameSet()
    {
        PrefData.SetTask(true, 1);
        PlayerPrefs.SetString("PumpName", _uiManager.StationNameInput.text);
        _uiManager.StationNameInput.text = PlayerPrefs.GetString("PumpName");

        HudCanvas.SetActive(true);
        _uiManager.PumpNamePanel.SetActive(false);
        _uiManager.BuyFuelStation.SetActive(false);
        ShowObjective(PrefData.GetTask());
    }

    public void PickPickFuelPump()
    {
        Debug.Log("Call");
        objectDetect.DetectObject.transform.SetParent(playerManager.ItemHandHeld.transform);
        //objectDetect.DetectObject.transform.position = Vector3.zero;
        PumpPick = true;
    }

    public void FillFuel()
    {
        objectDetect.DetectObject.transform.SetParent(objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea);
        objectDetect.DetectObject.transform.position =
            objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea.transform.position;
        objectDetect.DetectObject.transform.rotation =
            objectDetect.CarDetectRef.GetComponent<CarEssentials>().PumpPlaceArea.transform.rotation;
        StartCoroutine(TankFilled());
    }

    IEnumerator TankFilled()
    {
        yield return new WaitForSeconds(7f);
        _uiManager.UpdateCash(150, true);
        Instantiate(_uiManager.EarnMoney, _uiManager.Canvas.transform);
        objectDetect.DetectObject.transform.SetParent(PumpHandlePos);
        objectDetect.DetectObject.transform.position = PumpReturnPos.position;
        objectDetect.DetectObject.transform.rotation = PumpReturnPos.rotation;
        objectDetect.CarDetectRef.GetComponent<CarEssentials>().StartMoveCar();
        PumpPick = false;
    }


}
