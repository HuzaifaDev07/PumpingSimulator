using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PrefData
{
    public static string GameTask = "GameTask";
    public static string Money = "money";
    public static string PumpPurchase = "PumpPurchase";
    public static string PumpUpgrade = "PumpUpgrade";




    public static int GetTask()
    {
        return PlayerPrefs.GetInt(GameTask);
    }
    /// <summary>
    /// Set Level index if boolean is true then You can add index in Current Level ....
    /// else you can set that index as level number .
    /// </summary>
    /// <returns></returns>
    public static int SetTask(bool check, int increase)
    {

        if (check)
        {
            PlayerPrefs.SetInt(GameTask, GetTask() + increase);
        }
        else
        {
            PlayerPrefs.SetInt(GameTask, increase);
        }

        return GetTask();

    }

    public static int GetCash()
    {
        return PlayerPrefs.GetInt(Money);
    }
    /// <summary>
    /// Set Level index if boolean is true then You can add index in Current Level ....
    /// else you can set that index as level number .
    /// </summary>
    /// <returns></returns>
    public static int SetCash(bool check, int increase)
    {

        if (check)
        {
            PlayerPrefs.SetInt(Money, GetCash() + increase);
        }
        else
        {
            PlayerPrefs.SetInt(Money, increase);
        }

        return GetCash();

    }


    public static int GetPumpPurchased()
    {
        return PlayerPrefs.GetInt(PumpPurchase);
    }
    /// <summary>
    /// Set Level index if boolean is true then You can add index in Current Level ....
    /// else you can set that index as level number .
    /// </summary>
    /// <returns></returns>
    public static int SetPumpPurchased(bool check, int increase)
    {

        if (check)
        {
            PlayerPrefs.SetInt(PumpPurchase, GetPumpPurchased() + increase);
        }
        else
        {
            PlayerPrefs.SetInt(PumpPurchase, increase);
        }

        return GetPumpPurchased();

    }


    public static int GetPumpUpgrade()
    {
        return PlayerPrefs.GetInt(PumpUpgrade);
    }
    /// <summary>
    /// Set Level index if boolean is true then You can add index in Current Level ....
    /// else you can set that index as level number .
    /// </summary>
    /// <returns></returns>
    public static int SetPumpUpgrade(bool check, int increase)
    {

        if (check)
        {
            PlayerPrefs.SetInt(PumpUpgrade, GetPumpUpgrade() + increase);
        }
        else
        {
            PlayerPrefs.SetInt(PumpUpgrade, increase);
        }

        return GetPumpUpgrade();

    }

}
