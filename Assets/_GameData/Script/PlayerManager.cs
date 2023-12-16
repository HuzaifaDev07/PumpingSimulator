using SWS;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    public ObjectDetect objectDetect;
    UiManager _UiManager;

    [Header("------ ObjectPickTransforms ------")]
    public Transform ItemHandHeld;
    public bool handFilled;

    [Space(20)]
    [Header("------ Particles -------")]
    public GameObject DispatchParticle;
    public GameObject ConfettiParticle;

    [Space(20)]
    [Header("------ Audios -------")]
    public AudioSource Audios;
    public AudioClip GreetingSound;
    public AudioClip ThanksSound;
    public AudioClip AchivementSound;
    public AudioClip BuySound;




    private void Start()
    {
        _UiManager = UiManager.instance;
    }


    public void PickUpTrash()
    {
        handFilled = true;
        _UiManager.TrashPickUpBtn.SetActive(false);
        objectDetect.DetectObject.GetComponent<Rigidbody>().isKinematic = true;
        objectDetect.DetectObject.GetComponent<Collider>().enabled = false;
        objectDetect.DetectObject.transform.localScale = new Vector3(.5f, .5f, .5f);
        objectDetect.DetectObject.transform.SetParent(ItemHandHeld.transform);
        objectDetect.DetectObject.transform.localPosition = Vector3.zero;
        GameManager.Instance.Dustbin.hudNavigationElement.enabled = true;
    }

    public void DispatchTrash()
    {
        GameManager.Instance.Dustbin.hudNavigationElement.enabled = false;
        handFilled = false;
        DispatchParticle.SetActive(true);
        _UiManager.DropTrashBtn.SetActive(false);
        FillTrashDispatcher();
        objectDetect.DetectObject.SetActive(false);
    }


    public void FillTrashDispatcher()
    {
        _UiManager.FillBar.fillAmount += 0.3f;
    }


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.gameObject.name);
        if (other.CompareTag("Seller"))
        {
            other.GetComponent<SellerController>().DisableController(transform);
            Audios.clip = GreetingSound;
            Audios.Play();
        }

        if (other.CompareTag("Station"))
        {
            other.gameObject.SetActive(false);
            _UiManager.BuyFuelStation.SetActive(true);
        }
    }

}
