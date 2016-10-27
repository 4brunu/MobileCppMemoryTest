package com.company.mobilecppmemorytestandroid;

import android.util.Log;

import com.company.mobilecppmemorytest.Logger;

/**
 * Created by bruno.coelho on 27/10/2016.
 */

public class LoggerImpl extends Logger {

    @Override
    public void log(String stringLog) {
        Log.d("LoggerImpl", "logger -> " + stringLog);
    }
}
