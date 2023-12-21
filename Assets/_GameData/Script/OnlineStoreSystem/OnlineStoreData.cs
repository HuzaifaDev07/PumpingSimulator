using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;



[System.Serializable]
public class StoreItemData
{
    public string ItemName; ////// --------------------------- <<<<<<<<<<<<<<  just For Representation...
    public GameObject Object;  ////// --------------------------- <<<<<<<<<<<<<<  Object To Spawn...
    public int BuyAmount;  ////// --------------------------- <<<<<<<<<<<<<<  Object To BuyAmount...
    public int Limit;  ////// --------------------------- <<<<<<<<<<<<<<  Limit To buy...
    public int OwnedItem;
    public int UsedItem;
    public int ShippingAmount;
    public Sprite Icon;
}


[CreateAssetMenu(fileName = "Online_Store_Data")]
public class OnlineStoreData : ScriptableObject
{
    public StoreItemData[] storeItemData;
    [SerializeField] int TotalItemAmount;
    public void LoadStoreData(Text[] AmountShow, Text[] ItemName, Image[] ItemImage)
    {
        for (int i = 0; i < AmountShow.Length; i++)
        {
            AmountShow[i].text = "Price: <color=red>" + storeItemData[i].BuyAmount.ToString() + "</color>";
            ItemName[i].text = storeItemData[i].ItemName;
            ItemImage[i].sprite = storeItemData[i].Icon;
        }
    }

    public void BuyItem(int ItemIndex, GameObject FreeCoinObject, GameObject ThanksPanel)
    {
        Debug.Log("BuyItem");
        if (PrefData.GetCash() > storeItemData[ItemIndex].BuyAmount)
        {
            storeItemData[ItemIndex].OwnedItem++;
            GameManager.Instance._uiManager.UpdateCash(storeItemData[ItemIndex].BuyAmount);
            ThanksPanel.SetActive(true);
            GameManager.Instance.ResetMainOrderScreen();
            UpdateOwnedItemData(ItemIndex, false);
        }
        else
        {
            MobileToast.Show("Not enough money to buy item", false);
            FreeCoinObject.SetActive(true);
        }
    }
    /// <summary>
    /// "Purchase" Bool Check for Reset BuyItems.....
    /// </summary>
    /// <param name="ShippingPrice"></param>
    /// <param name="itemName"></param>
    /// <param name="ItemAmount"></param>
    /// <param name="itemImage"></param>
    /// <param name="ItemIndex"></param>
    /// <param name="PurchaseCheck"></param>
    public void DisplayMainScreen(Text ShippingPrice, Text itemName, Text ItemAmount, Image itemImage, int ItemIndex, bool PurchaseCheck, Text TotalAmount)
    {
        if (!PurchaseCheck)
        {
            ShippingPrice.text = "<color=grey> Shipping Cost </color>: <color=black>" + storeItemData[ItemIndex].ShippingAmount + "$ </color>";
            itemName.text = storeItemData[ItemIndex].ItemName;
            ItemAmount.text = "<color=grey> Item Cost </color>: <color=black>" + storeItemData[ItemIndex].BuyAmount + "$</color>";
            itemImage.sprite = storeItemData[ItemIndex].Icon;
        }
        else
        {
            ShippingPrice.text = "<color=grey> Shipping Cost </color>: <color=black>" + null + "$ </color>";
            TotalAmount.text = "<color=grey> Shipping Cost </color>: <color=black>" + null + "$ </color>";
            itemName.text = null;
            ItemAmount.text = "<color=grey> Item Cost </color>: <color=black>" + null + "$</color>";
            itemImage.sprite = null;
        }
    }


    public int ItemAddInCart(int ItemIndex, Text TotalAmount, GameObject BuyBtn, GameObject RewardBuyBtn)
    {
        if (PrefData.GetCash() >= TotalItemAmount)
        {
            TotalItemAmount += storeItemData[ItemIndex].BuyAmount + storeItemData[ItemIndex].ShippingAmount;
            TotalAmount.text = "Total : " + TotalItemAmount + "$";
            BuyBtn.SetActive(true);
            RewardBuyBtn.SetActive(false);
            storeItemData[ItemIndex].UsedItem = storeItemData[ItemIndex].OwnedItem;

        }
        else
        {
            BuyBtn.SetActive(false);
            RewardBuyBtn.SetActive(true);
            MobileToast.Show("Not Enough Money", false);
        }
        return ItemIndex;
    }


    public void ResetData()
    {
        for (int i = 0; i < storeItemData.Length; i++)
        {
            storeItemData[i].OwnedItem = 0;
            storeItemData[i].UsedItem = 0;

        }
        TotalItemAmount = 0;
    }

    public void SpawnItem(int ItemIndex, Transform handPos)
    {
        UpdateOwnedItemData(ItemIndex, true);
        //GameObject obj = Instantiate(storeItemData[ItemIndex].Object);
        //obj.transform.SetParent(handPos.transform);
        //obj.transform.localPosition = Vector3.zero;
        //obj.transform.localRotation = Quaternion.identity;
        //obj.transform.localScale = new Vector3(0.09f, 0.09f, 0.09f);
        GameManager.Instance.ClosedInventory();
        GameManager.Instance.CloseTab();

    }

    public void ShowOwnedItem(GameObject[] ItemObjectsUI, Text[] OwnedItemTxt)
    {
        for (int i = 0; i < storeItemData.Length; i++)
        {
            if (storeItemData[i].UsedItem > 0)
            {
                ItemObjectsUI[i].SetActive(true);
                OwnedItemTxt[i].text = storeItemData[i].UsedItem.ToString() + "x";
                if (storeItemData[i].UsedItem == 0)
                {
                    ItemObjectsUI[i].SetActive(false);
                }
                UpdateOwnedItemData(i, false);
            }
            else
                ItemObjectsUI[i].SetActive(false);
        }
    }

    void UpdateOwnedItemData(int index, bool reduceUsedItem)
    {
        storeItemData[index].UsedItem = storeItemData[index].OwnedItem;
        if (reduceUsedItem)
            storeItemData[index].UsedItem -= 1;
        storeItemData[index].OwnedItem = storeItemData[index].UsedItem;
        Debug.Log(storeItemData[index].UsedItem + " Used Item");
        //storeItemData[index].OwnedItem = storeItemData[index].UsedItem;


    }


}
