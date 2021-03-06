// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from father.djinni

#include "NativeFatherCallback.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeFatherCallback::NativeFatherCallback() : ::djinni::JniInterface<::mobilecppmemorytest::FatherCallback, NativeFatherCallback>() {}

NativeFatherCallback::~NativeFatherCallback() = default;

NativeFatherCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeFatherCallback::JavaProxy::~JavaProxy() = default;

void NativeFatherCallback::JavaProxy::onResult(const std::string & c_result) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeFatherCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onResult,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_result)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
