package com.example.ndkfft;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;

public class MainService extends Service {
	// Binder given to clients
    private final IBinder mBinder = new LocalBinder();
    
    public class LocalBinder extends Binder {
        MainService getService() {
            // Return this instance of LocalService so clients can call public methods
            return MainService.this;
        }
    }

	@Override
	public IBinder onBind(Intent intent) {
		// TODO Auto-generated method stub
		return mBinder;
	}
	
	public int callNDK() {
		return 1;
	}

}
