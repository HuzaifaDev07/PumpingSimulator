using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class FuelingData
{
    public int FuelAmount;
    public float FillTime;
    public int FuelingEarn;
}

[CreateAssetMenu(fileName = "Fuel_Data")]

public class FuelData : ScriptableObject
{
    public FuelingData[] fuelingData;

    int FuelIndex;
    public void GetFuelIndex()
    {
        FuelIndex = Random.Range(0, fuelingData.Length);
    }

    public float GetFuelTime()
    {
        return fuelingData[FuelIndex].FillTime;
    }

    public int GetFuelEarnAmount()
    {
        return fuelingData[FuelIndex].FuelingEarn;
    }

    public int GetFuelFillAmount()
    {
        return fuelingData[FuelIndex].FuelAmount;
    }
}
