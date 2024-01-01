using System.Collections;
using UnityEngine;
using UnityEngine.AI;
namespace AR
{
    public class Counter : MonoBehaviour
    {
        public PlayerPosition playerPos;
        NPC npcStates;
        GameObject npc;
        Animator npcAnim;
        NavMeshAgent npcAgent;
        bool isItemOnCounter;
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("NPC"))
            {
                Debug.Log(npcStates);
                npcStates = other.GetComponent<NPC>();
                npc = other.gameObject;
                StartCoroutine(SmoothRotation());
                npcAnim = other.GetComponent<Animator>();
                npcAgent = other.GetComponent<NavMeshAgent>();
                npcAgent.isStopped = true;
                npcStates.SetCustomerState(CustomerState.Billing);
                npcStates.UpdateCustomerState();

                WalkToIdle();
                if (isItemOnCounter)
                {
                    DealCustomers();
                }
                else
                {
                    StartCoroutine(PutItemsToCounter());
                    DealCustomers();
                }
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
        public void DealCustomers()
        {
            if (npcStates._customer != CustomerState.WalkingOut)
            {
                StartCoroutine(DelayDeal());
            }
        }
        /// <summary>
        /// put items to counter by customer
        /// </summary>
        /// <returns></returns>
        IEnumerator PutItemsToCounter()
        {
            yield return new WaitForSeconds(0.5f);
            IdleToPicking();

            yield return new WaitForSeconds(1f);
            PickingToIdle();
            isItemOnCounter = true;
            MarketManager.instance.Billing();
        }
        IEnumerator DelayDeal()
        {
            yield return new WaitForSeconds(1f);
            npcStates.UpdateItemType();
            MarketManager.instance.Billing();

            if (MarketManager.instance.isOnCounter)
            {
                yield return new WaitForSeconds(2f);
                IdleToPicking();

                yield return new WaitForSeconds(1);
                MarketManager.instance.objectInHand.SetActive(true);

                switch (npcStates.purchasedItem)
                {
                    case PurchasedItem.Soda:
                       // Instantiate(UiManager.instance.EarnCoinFromMarket, UiManager.instance.Canvas.transform);
                        UiManager.instance.UpdateCash(MarketManager.instance.SodaPrice, true);
                        break;
                    case PurchasedItem.Coffee:
                     //   Instantiate(UiManager.instance.EarnCoinFromMarket, UiManager.instance.Canvas.transform);
                        UiManager.instance.UpdateCash(MarketManager.instance.CoffeePrice, true);
                        break;
                    case PurchasedItem.Chips:
                      //  Instantiate(UiManager.instance.EarnCoinFromMarket, UiManager.instance.Canvas.transform);
                        UiManager.instance.UpdateCash(MarketManager.instance.ChipsPrice, true);
                        break;
                    case PurchasedItem.IceCream:
                      //  Instantiate(UiManager.instance.EarnCoinFromMarket, UiManager.instance.Canvas.transform);
                        UiManager.instance.UpdateCash(MarketManager.instance.IceCreamPrice, true);
                        break;
                }

                yield return new WaitForSeconds(1f);
                PickingToIdle();
                isItemOnCounter = false;
                yield return new WaitForSeconds(1f);
                IdleToWalk();
                CustomerManager.instance._spawnedCustomers.Remove(npcStates);

                npcAgent.isStopped = false;
                npcAgent.SetDestination(CustomerManager.instance._finalPoint.position);
                npcStates.SetCustomerState(CustomerState.WalkingOut);
                npcStates.UpdateCustomerState();
                npcStates.enabled = false;
                MarketManager.instance.itemName.text = "";
                MarketManager.instance.itemPrice.text = "";
                CustomerManager.instance._customersInQueue.Remove(npc);
                if (CustomerManager.instance.stoppingIndex > 0)
                {
                    CustomerManager.instance.stoppingIndex--;
                }
                playerPos.DisableCollider();
                yield return new WaitForSeconds(1);
                CustomerManager.instance.ReAssignDestinations();
            }
        }
        #region CustomerAnimations
        void WalkToIdle()
        {
            npcAnim.SetBool("IsIdle", true);
            npcAnim.SetBool("IsWalking", false);
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
        void IdleToPicking()
        {
            npcAnim.SetBool("IsIdle", false);
            npcAnim.SetBool("IsPicking", true);
        }
        #endregion
    }
}