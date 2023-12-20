package com.kokozone.device;

import android.util.Log;
import android.content.Context;
import com.unity3d.player.UnityPlayer;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import com.google.android.gms.ads.identifier.AdvertisingIdClient.Info;

public class KZMonetization {
    private static final String TAG = "KZMonetization";
    public static String getAdvertisingId(Context context) {
        try{
            Info adInfo = AdvertisingIdClient.getAdvertisingIdInfo(context);
            String id = adInfo.getId();

            if (id == null || id.equals("00000000-0000-0000-0000-000000000000"))
            {
                Log.e(TAG, "Invalid Advertising ID Received!");
                return null;
            }
            else
            {
                Log.d(TAG, "Advertising ID Received...");
                return id;
            }

        }
        catch (Exception e) {
            Log.e(TAG, "Failed to get Advertising ID!");
            e.printStackTrace();
        }

        return null;
    }
}