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
    public Sprite Icon;
}


[CreateAssetMenu(fileName = "Online_Store_Data")]
public class OnlineStoreData : ScriptableObject
{
    public StoreItemData[] storeItemData;

    public void LoadStoreData(Text[] AmountShow, Text[] ItemName, Image[] ItemImage)
    {
        for (int i = 0; i < AmountShow.Length; i++)
        {
            AmountShow[i].text = storeItemData[i].BuyAmount.ToString();
            ItemName[i].text = storeItemData[i].ItemName;
            ItemImage[i].sprite = storeItemData[i].Icon;
        }
    }

    public void BuyItem(int ItemIndex, Transform handPos, GameObject FreeCoinObject)
    {
        Debug.Log("BuyItem");
        if (PrefData.GetCash() > storeItemData[ItemIndex].BuyAmount && storeItemData[ItemIndex].OwnedItem < storeItemData[ItemIndex].Limit)
        {
            storeItemData[ItemIndex].OwnedItem++;
            GameObject obj = Instantiate(storeItemData[ItemIndex].Object);
            GameManager.Instance._uiManager.UpdateCash(storeItemData[ItemIndex].BuyAmount);
            obj.transform.SetParent(handPos.transform);
            obj.transform.localPosition = Vector3.zero;
            obj.transform.localRotation = Quaternion.identity;
            obj.transform.localScale = new Vector3(0.09f, 0.09f, 0.09f);
        }
        else
        {
            MobileToast.Show("Not enough money to buy item", false);
            FreeCoinObject.SetActive(true);
        }
    }
}
