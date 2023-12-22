using System.Collections;
using UnityEngine;
using UnityEngine.AI;
namespace AR
{
    public class Soda : Destinaton
    {
        [Header("Scripts")]
        NPC npc;

        [Header("Animators")]
        Animator npcAnim;
        [SerializeField] Animator freezerAnim;

        [Header("AI")]
        NavMeshAgent npcAgent;

        //[Header("GameObjects")]
        //public GameObject[] drinksInFridge;

        //[Header("Integers")]
        //public int totalDrinks;

        //private void Start()
        //{
        ////    totalDrinks = drinksInFridge.Length;
        //}
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("NPC"))
            {
                freezerAnim.Play("FreezerDoorOpen");
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

            //if (totalDrinks > 0)
            //{
                yield return new WaitForSeconds(2);
                ThinkingToPicking();

                yield return new WaitForSeconds(1f);
             //   totalDrinks--;
               // drinksInFridge[Random.Range(0, drinksInFridge.Length)].SetActive(false);
                npc.SodaCan.SetActive(true);
                npc.CheckPurchasedItem(PurchasedItem.Soda);

                yield return new WaitForSeconds(1f);
                PickingToIdle();

                yield return new WaitForSeconds(2f);
                IdleToWalk();

                npcAgent.isStopped = false;
                npc.SetCustomerState(CustomerState.GoingForBilling);
                CustomerManager.instance._customersInQueue.Add(npc.gameObject);
                npc.UpdateCustomerState();
                _isAssigned = false;
            //}
           // else
          //  {
                //yield return new WaitForSeconds(2);
                //ThinkingToWalk();
                //npcAgent.isStopped = false;
                //npcAgent.SetDestination(CustomerManager.instance._finalPoint.position);
                //npc.SetCustomerState(CustomerState.WalkingOut);
                //npc.UpdateCustomerState();
           // }
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("NPC"))
            {
                freezerAnim.Play("FreezerDoorClose");
            }
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
