using UnityEngine;

public static class NumberConverter
{
    public static string ConvertNumberToShortFormat(float number)
    {
        if (number >= 1000000000)
        {
            return (number / 1000000000f).ToString("F1") + "B";
        }
        else if (number >= 1000000)
        {
            return (number / 1000000f).ToString("F1") + "M";
        }
        else if (number >= 1000)
        {
            return (number / 1000f).ToString("F1") + "k";
        }
        else
        {
            return number.ToString("F0");
        }
    }
}
