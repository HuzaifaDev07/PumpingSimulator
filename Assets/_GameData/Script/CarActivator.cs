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
        CarsObjects[Random.Range(0, CarsObjects.Length)].SetActive(true);
    }
}
