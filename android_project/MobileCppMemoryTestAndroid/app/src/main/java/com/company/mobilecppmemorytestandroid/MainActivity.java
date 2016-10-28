package com.company.mobilecppmemorytestandroid;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

import com.company.mobilecppmemorytest.FatherCallback;
import com.company.mobilecppmemorytest.Logger;
import com.company.mobilecppmemorytest.ModelFather;
import com.company.mobilecppmemorytest.NetworkRequest;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("mobilecppmemorytest");
    }

    private ModelFather modelFather;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        NetworkRequest networkRequest = new NetworkRequestImpl();

        Logger logger = new LoggerImpl();

        modelFather = ModelFather.create(networkRequest, logger);

        modelFather.simulateWork(new FatherCallback() {
            @Override
            public void onResult(String result) {
                Log.d("MainActivity", "MainActivity.onResult");
            }
        });


    }

}
