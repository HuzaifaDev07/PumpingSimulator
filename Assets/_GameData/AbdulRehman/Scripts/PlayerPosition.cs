using System.Collections;
using UnityEngine;
namespace AR
{
    public class PlayerPosition : MonoBehaviour
    {
        public Counter counter;
        [SerializeField] BoxCollider counterCollider;
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("GameController"))
            {
                MarketManager.instance.isOnCounter = true;
                counter.DealCustomers();
                DisableCollider();
            }
        }

        public void DisableCollider()
        {
            counterCollider.enabled = false;
            StartCoroutine(ReEnableCollider());
        }
        IEnumerator ReEnableCollider()
        {
            yield return new WaitForSeconds(1);
            counterCollider.enabled = true;
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("GameController"))
            {
                MarketManager.instance.isOnCounter = false;
            }
        }
    }
}
