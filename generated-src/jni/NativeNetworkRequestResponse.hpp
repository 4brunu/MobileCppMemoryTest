// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network.djinni

#pragma once

#include "NetworkRequestResponse.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeNetworkRequestResponse final {
public:
    using CppType = ::mobilecppmemorytest::NetworkRequestResponse;
    using JniType = jobject;

    using Boxed = NativeNetworkRequestResponse;

    ~NativeNetworkRequestResponse();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeNetworkRequestResponse();
    friend ::djinni::JniClass<NativeNetworkRequestResponse>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/company/mobilecppmemorytest/NetworkRequestResponse") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ZLjava/lang/String;I)V") };
    const jfieldID field_mSucceed { ::djinni::jniGetFieldID(clazz.get(), "mSucceed", "Z") };
    const jfieldID field_mData { ::djinni::jniGetFieldID(clazz.get(), "mData", "Ljava/lang/String;") };
    const jfieldID field_mHttpStatusCode { ::djinni::jniGetFieldID(clazz.get(), "mHttpStatusCode", "I") };
};

}  // namespace djinni_generated
