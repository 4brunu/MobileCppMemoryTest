// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network.djinni

#pragma once

namespace mobilecppmemorytest {

struct NetworkRequestResponse;

class NetworkRequestCallback {
public:
    virtual ~NetworkRequestCallback() {}

    virtual void onResponse(const NetworkRequestResponse & networkRequestResponse) = 0;
};

}  // namespace mobilecppmemorytest
