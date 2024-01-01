using System.Collections;
using UnityEngine;
using TMPro;
namespace AR
{
    public class MarketManager : MonoBehaviour
    {
        [Header("SCRIPTS")]
        public static MarketManager instance;

        [Header("GAME OBJECTS")]
        [HideInInspector] public GameObject objectInHand;
        [SerializeField] GameObject[] objectOnCounter;
        [SerializeField] GameObject priceTextObj;
        [SerializeField] GameObject UserCounterTrigger;

        [Header("INTEGERS")]
        public int SodaPrice;
        public int CoffeePrice;
        public int IceCreamPrice;
        public int ChipsPrice;

        [Header("TEXT")]
        public TextMeshPro itemName;
        public TextMeshPro itemPrice;

        [Header("BOOLEANS")]
        public bool isOnCounter;
        public bool isShopOpen;

        void Awake()
        {
            instance = this;
            if (PrefData.GetTask() >= 5)
                UserCounterTrigger.SetActive(true);
            else
                UserCounterTrigger.SetActive(false);
        }
        public void OpenShop()
        {
            isShopOpen = true;
            CustomerManager.instance.SpawnCustomer();
        }

        public void Billing()
        {
            objectInHand.SetActive(false);
            priceTextObj.SetActive(true);
            StartCoroutine(ShoppingComplete());
        }

        #region ObjectsToPutOnCounter
        public void BoughtSoda()
        {
            objectOnCounter[0].SetActive(true); //SodaOnCounter
            itemName.text = objectOnCounter[0].name;
            itemPrice.text = "<color=green>" + SodaPrice.ToString() + "$</color>";
        }
        public void BoughtChips()
        {
            objectOnCounter[1].SetActive(true); //ChipsOnCounter
            itemName.text = objectOnCounter[1].name;
            itemPrice.text = "<color=green>" + ChipsPrice.ToString() + "$</color>";
        }
        public void BoughtCoffee()
        {
            objectOnCounter[2].SetActive(true); //CoffeeOnCounter
            itemName.text = objectOnCounter[2].name;
            itemPrice.text = "<color=green>" + CoffeePrice.ToString() + "$</color>";
        }
        public void BoughtIceCream()
        {
            objectOnCounter[3].SetActive(true); //IceCreamOnCounter
            itemName.text = objectOnCounter[3].name;
            itemPrice.text = "<color=green>" + IceCreamPrice.ToString() + "$</color>";
        }
        #endregion
        IEnumerator ShoppingComplete()
        {
            if (isOnCounter)
            {
                yield return new WaitForSeconds(3);
                foreach (GameObject obj in objectOnCounter)
                {
                    obj.SetActive(false);
                }
            }
        }
    }
}