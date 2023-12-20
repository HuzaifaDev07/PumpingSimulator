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

    public void BuyItem(int ItemIndex, GameObject FreeCoinObject)
    {
        Debug.Log("BuyItem");
        if (PrefData.GetCash() > storeItemData[ItemIndex].BuyAmount && storeItemData[ItemIndex].OwnedItem < storeItemData[ItemIndex].Limit)
        {
            storeItemData[ItemIndex].OwnedItem++;

            GameManager.Instance._uiManager.UpdateCash(storeItemData[ItemIndex].BuyAmount);

        }
        else
        {
            MobileToast.Show("Not enough money to buy item", false);
            FreeCoinObject.SetActive(true);
        }
    }

    public void DisplayMainScreen(Text ShippingPrice, Text itemName, Text ItemAmount, Image itemImage, int ItemIndex)
    {
        ShippingPrice.text = "<color=grey> Shipping Cost </color>: <color=black>" + storeItemData[ItemIndex].ShippingAmount + "$ </color>";
        itemName.text = storeItemData[ItemIndex].ItemName;
        ItemAmount.text = "<color=grey> Item Cost </color>: <color=black>" + storeItemData[ItemIndex].BuyAmount + "$</color>";
        itemImage.sprite = storeItemData[ItemIndex].Icon;
    }


    public int ItemAddInCart(int ItemIndex, Text TotalAmount, GameObject BuyBtn, GameObject RewardBuyBtn)
    {
        if (PrefData.GetCash() >= TotalItemAmount)
        {
            TotalItemAmount += storeItemData[ItemIndex].BuyAmount + storeItemData[ItemIndex].ShippingAmount;
            TotalAmount.text = "Total : " + TotalItemAmount + "$";
            BuyBtn.SetActive(true);
            RewardBuyBtn.SetActive(false);
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
        }
    }

    public void SpawnItem(int ItemIndex, Transform handPos)
    {
        GameObject obj = Instantiate(storeItemData[ItemIndex].Object);
        obj.transform.SetParent(handPos.transform);
        obj.transform.localPosition = Vector3.zero;
        obj.transform.localRotation = Quaternion.identity;
        obj.transform.localScale = new Vector3(0.09f, 0.09f, 0.09f);

    }

}
