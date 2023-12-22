using UnityEngine;
using UnityEngine.AI;
namespace AR
{
    public class NPC : MonoBehaviour
    {
        [Header("AI")]
        public NavMeshAgent myAgent;
        public PurchasedItem purchasedItem;
        public CustomerState _customer;

        [Header("GameObject")]
        public GameObject SodaCan;
        public GameObject Coffee;
        public GameObject Chips;
        public GameObject IceCream;

        void Start()
        {
            myAgent = GetComponent<NavMeshAgent>();
            SetCustomerState(CustomerState.WalkingIn);
            UpdateCustomerState();
        }
        public void BuySoda(Transform destination)
        {
            myAgent.SetDestination(destination.position);
        }
        public void BuySodaAndCoffee(Transform destination)
        {
            myAgent.SetDestination(destination.position);
        }
        public void BuyAnything(Transform destination)
        {
            myAgent.SetDestination(destination.position);
        }
        public void UpdateItemType()
        {
            switch (purchasedItem)
            {
                case PurchasedItem.Soda:
                    MarketManager.instance.BoughtSoda();
                    MarketManager.instance.objectInHand = SodaCan;
                    break;
                case PurchasedItem.Chips:
                    MarketManager.instance.BoughtChips();
                    MarketManager.instance.objectInHand = Chips;
                    break;
                case PurchasedItem.Coffee:
                    MarketManager.instance.BoughtCoffee();
                    MarketManager.instance.objectInHand = Coffee;
                    break;
                case PurchasedItem.IceCream:
                    MarketManager.instance.BoughtIceCream();
                    MarketManager.instance.objectInHand = IceCream;
                    break;
            }
        }
        public void UpdateCustomerState()
        {
            switch (_customer)
            {
                case CustomerState.WalkingIn:
                    break;
                case CustomerState.Buying:
                    break;
                case CustomerState.GoingForBilling:
                    GoToCounter();
                    break;
                case CustomerState.Billing:
                    break;
                case CustomerState.WalkingOut:
                    CustomerManager.instance.SpawnCustomer();
                    break;
            }
        }
        public void SetCustomerState(CustomerState customer)
        {
            _customer = customer;
        }
        public void CheckPurchasedItem(PurchasedItem newItem)
        {
            purchasedItem = newItem;
        }
        public void GoToCounter()
        {
            if (_customer == CustomerState.GoingForBilling)
            {
                myAgent.SetDestination(CustomerManager.instance._stoppingDestinantions[CustomerManager.instance.stoppingIndex].position);
                CustomerManager.instance._stoppingPoints[CustomerManager.instance.stoppingIndex]._customerToAssign = gameObject;
                CustomerManager.instance.stoppingIndex++;
            }
        }
    }
}

