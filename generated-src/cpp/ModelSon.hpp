// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from son.djinni

#pragma once

#include <memory>

namespace mobilecppmemorytest {

class Logger;
class NetworkRequest;
class SonCallback;

class ModelSon {
public:
    virtual ~ModelSon() {}

    static std::shared_ptr<ModelSon> create(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger);

    virtual void simulateWork(const std::shared_ptr<SonCallback> & sonCallback) = 0;
};

}  // namespace mobilecppmemorytest
