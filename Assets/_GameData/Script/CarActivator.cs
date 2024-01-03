using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarActivator : MonoBehaviour
{
    public static CarActivator instance;
    [SerializeField] GameObject[] CarsObjects;
    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        ActiveRandomCar();
    }
    public void ActiveRandomCar()
    {
        int rand = Random.Range(0, CarsObjects.Length);
        CarsObjects[rand].GetComponent<CarEssentials>().splineMove.Stop();
        StartCoroutine(ActiveCars(rand));
    }
    IEnumerator ActiveCars(int rand)
    {
     
        yield return new WaitForSeconds(Random.Range(3, 8));
        CarsObjects[rand].GetComponent<CarEssentials>().splineMove.StartMove();
        CarsObjects[rand].SetActive(true);
    }
}
