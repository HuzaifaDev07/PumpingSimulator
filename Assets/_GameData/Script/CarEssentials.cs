using SWS;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarEssentials : MonoBehaviour
{
    public static CarEssentials instance;
    public Transform PumpPlaceArea;
    public AudioSource audioSfx;
    public AudioClip Horn;

    public splineMove splineMove;

    Collider col;
    [SerializeField] Collider MyCollider;
    private void Awake()
    { instance = this; }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("FuelPlace"))
        {
            //MyCollider.GetComponent<Collider>().enabled = false;
            col = other.GetComponent<Collider>();
            col.enabled = false;
            splineMove.Pause();
            audioSfx.PlayOneShot(Horn);
        }
    }

    public void StartMoveCar()
    {
        splineMove.Resume();
        StartCoroutine(OpenCol());
    }

    IEnumerator OpenCol()
    {
        yield return new WaitForSeconds(2f);
        col.enabled = true;
        // CarActivator.instance.ActiveRandomCar();
        this.gameObject.SetActive(false);
    }
    private void OnDisable()
    {
        if (!Application.isPlaying)
        {
            instance = null;
        }
    }
}
