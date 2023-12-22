using System.Collections;
using UnityEngine;
using UnityEngine.AI;
namespace AR
{
    public class StoppingPoint : MonoBehaviour
    {
        GameObject npc;
        public GameObject _customerToAssign;

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject == _customerToAssign)
            {
                npc = other.gameObject;
                StartCoroutine(SmoothRotation());
                var customerNavmeshAgent = other.GetComponent<NavMeshAgent>();
                customerNavmeshAgent.isStopped = true;
                other.GetComponent<Animator>().SetBool("IsIdle", true);
                other.GetComponent<Animator>().SetBool("IsWalking", false);
            }
        }
        IEnumerator SmoothRotation()
        {
            {
                float startTime = Time.time;
                Quaternion startRotation = npc.transform.rotation;
                Quaternion endRotation = Quaternion.Euler(0, 270, 0);

                while (Time.time - startTime < 0.5f)
                {
                    float t = (Time.time - startTime) / 0.5f;
                    npc.transform.rotation = Quaternion.Lerp(startRotation, endRotation, t);
                    yield return null;
                }
                npc.transform.rotation = endRotation;
            }
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.gameObject == _customerToAssign)
            {
                _customerToAssign = null;
            }
        }
    }
}