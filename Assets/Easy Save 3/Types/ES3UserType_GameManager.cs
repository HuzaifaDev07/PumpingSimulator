using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("StoreData")]
	public class ES3UserType_GameManager : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3UserType_GameManager() : base(typeof(GameManager)){ Instance = this; priority = 1;}


		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (GameManager)obj;
			
			writer.WritePropertyByRef("StoreData", instance.StoreData);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (GameManager)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "StoreData":
						instance.StoreData = reader.Read<OnlineStoreData>();
						break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_GameManagerArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_GameManagerArray() : base(typeof(GameManager[]), ES3UserType_GameManager.Instance)
		{
			Instance = this;
		}
	}
}