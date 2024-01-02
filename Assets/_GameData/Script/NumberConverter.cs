using System;
using UnityEngine;

public static class NumberConverter
{
    public static string ConvertNumberToShortFormat(float number)
    {
        long longNumber = (long)number;

        if (longNumber >= 1000000000)
        {
            return $"{longNumber / 1000000000},{Math.Abs((longNumber % 1000000000) / 10000000):D2}$b";
        }
        else if (longNumber >= 1000000)
        {
            return $"{longNumber / 1000000},{Math.Abs((longNumber % 1000000) / 10000):D2}$m";
        }
        else if (longNumber >= 1000)
        {
            return $"{longNumber / 1000},{Math.Abs((longNumber % 1000) / 10):D1}$k";
        }
        else
        {
            return longNumber.ToString("D");
        }
    }

}
