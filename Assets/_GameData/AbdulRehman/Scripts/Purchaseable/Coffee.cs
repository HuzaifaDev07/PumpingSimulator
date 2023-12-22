using System.Collections;
using UnityEngine;
using UnityEngine.AI;
namespace AR
{
    public class Coffee : Destinaton
    {
        [Header("Scripts")]
        NPC npc;

        [Header("Animator")]
        Animator npcAnim;

        [Header("AI")]
        NavMeshAgent npcAgent;

        // [Header("Integers")]
        //   public int totalCoffee = 100;
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("NPC"))
            {
                npc = other.GetComponent<NPC>();
                npcAnim = other.GetComponent<Animator>();
                npcAgent = other.GetComponent<NavMeshAgent>();
                npcAgent.isStopped = true;
                npc.SetCustomerState(CustomerState.Buying);
                npc.UpdateCustomerState();
                WalkToIdle();
                StartCoroutine(Delay());
            }
        }
        IEnumerator Delay()
        {
            yield return new WaitForSeconds(1);
            IdleToThinking();

            //    if (totalCoffee > 0)
            //   {
            yield return new WaitForSeconds(2);
            ThinkingToPicking();

            yield return new WaitForSeconds(1f);
            //  totalCoffee -= 5;
            npc.Coffee.SetActive(true);
            npc.CheckPurchasedItem(PurchasedItem.Coffee);

            yield return new WaitForSeconds(1f);
            PickingToIdle();

            yield return new WaitForSeconds(2f);
            IdleToWalk();

            npcAgent.isStopped = false;
            npc.SetCustomerState(CustomerState.GoingForBilling);
            CustomerManager.instance._customersInQueue.Add(npc.gameObject);
            npc.UpdateCustomerState();
            _isAssigned = false;
            //  }
            //else
            //{
            //    yield return new WaitForSeconds(2);
            //    ThinkingToWalk();
            //    npcAgent.isStopped = false;
            //    npcAgent.SetDestination(CustomerManager.instance._finalPoint.position);
            //    npc.SetCustomerState(CustomerState.WalkingOut);
            //    npc.UpdateCustomerState();
            //}
        }
        #region CustomerAnimations
        void WalkToIdle()
        {
            npcAnim.SetBool("IsIdle", true);
            npcAnim.SetBool("IsWalking", false);
        }
        void ThinkingToWalk()
        {
            npcAnim.SetBool("IsThinking", false);
            npcAnim.SetBool("IsWalking", true);
        }
        void PickingToIdle()
        {
            npcAnim.SetBool("IsIdle", true);
            npcAnim.SetBool("IsPicking", false);
        }
        void IdleToWalk()
        {
            npcAnim.SetBool("IsIdle", false);
            npcAnim.SetBool("IsWalking", true);
        }
        void ThinkingToPicking()
        {
            npcAnim.SetBool("IsThinking", false);
            npcAnim.SetBool("IsPicking", true);
        }
        void IdleToThinking()
        {
            npcAnim.SetBool("IsIdle", false);
            npcAnim.SetBool("IsThinking", true);
        }
        #endregion
    }
}