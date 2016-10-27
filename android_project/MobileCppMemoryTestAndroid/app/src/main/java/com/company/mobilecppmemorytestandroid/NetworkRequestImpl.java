package com.company.mobilecppmemorytestandroid;

import com.company.mobilecppmemorytest.NetworkRequest;
import com.company.mobilecppmemorytest.NetworkRequestCallback;
import com.company.mobilecppmemorytest.NetworkRequestResponse;

import java.io.IOException;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

/**
 * Created by bruno.coelho on 17/03/16.
 */
public class NetworkRequestImpl extends NetworkRequest {

    @Override
    public void httpGetRequest(String stringUrl, final NetworkRequestCallback callback) {

        Request request = new Request.Builder()
                .url(stringUrl)
                .build();

        new OkHttpClient().newCall(request).enqueue(new Callback() {
            @Override
            public void onFailure(Call call, IOException e) {
                e.printStackTrace();
                if (callback != null) {
                    callback.onResponse(new NetworkRequestResponse(false, "", 0));
                }
            }

            @Override
            public void onResponse(Call call, Response response) throws IOException {

                if (!response.isSuccessful()) {
                    if (callback != null) {
                        callback.onResponse(new NetworkRequestResponse(false, "", response.code()));
                    }


                }
                else if (callback != null) {
                    callback.onResponse(new NetworkRequestResponse(true, response.body().string(), response.code()));
                }

            }
        });

    }
}
