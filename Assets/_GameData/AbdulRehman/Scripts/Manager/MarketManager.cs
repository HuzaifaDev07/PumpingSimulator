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

        [Header("INTEGERS")]
        public int SodaPrice;
        public int CoffeePrice;
        public int IceCreamPrice;
        public int ChipsPrice;

        [Header("TEXT")]
        public TextMeshPro PriceText;

        [Header("BOOLEANS")]
        public bool isOnCounter;
        public bool isShopOpen;

        void Awake()
        {
            instance = this;
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
            PriceText.text = SodaPrice.ToString() + "$";
        }
        public void BoughtChips()
        {
            objectOnCounter[1].SetActive(true); //ChipsOnCounter
            PriceText.text = ChipsPrice.ToString() + "$";
        }
        public void BoughtCoffee()
        {
            objectOnCounter[2].SetActive(true); //CoffeeOnCounter
            PriceText.text = CoffeePrice.ToString() + "$";
        }
        public void BoughtIceCream()
        {
            objectOnCounter[3].SetActive(true); //IceCreamOnCounter
            PriceText.text = IceCreamPrice.ToString() + "$";
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