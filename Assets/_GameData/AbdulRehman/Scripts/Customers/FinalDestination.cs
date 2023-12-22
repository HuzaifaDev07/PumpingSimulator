using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace AR
{
    public class FinalDestination : MonoBehaviour
    {
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("NPC"))
            {
                Destroy(other.gameObject);
            }
        }
    }
}