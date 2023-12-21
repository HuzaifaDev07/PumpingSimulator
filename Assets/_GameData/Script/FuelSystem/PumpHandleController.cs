using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PumpHandleController : MonoBehaviour
{
    private IEnumerator Start()
    {
        yield return new WaitForSeconds(2f);
        if (GameManager.NotEnoughFuel)
        {
            transform.tag = "Untagged";
        }
        else
        {
            transform.tag = "PumpHandle";
        }
    }
}
