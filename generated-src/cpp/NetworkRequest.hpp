// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network.djinni

#pragma once

#include <memory>
#include <string>

namespace mobilecppmemorytest {

class NetworkRequestCallback;

class NetworkRequest {
public:
    virtual ~NetworkRequest() {}

    virtual void httpGetRequest(const std::string & stringUrl, const std::shared_ptr<NetworkRequestCallback> & callback) = 0;
};

}  // namespace mobilecppmemorytest
