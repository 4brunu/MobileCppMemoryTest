// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from logger.djinni

#include "NativeLogger.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeLogger::NativeLogger() : ::djinni::JniInterface<::mobilecppmemorytest::Logger, NativeLogger>() {}

NativeLogger::~NativeLogger() = default;

NativeLogger::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeLogger::JavaProxy::~JavaProxy() = default;

void NativeLogger::JavaProxy::log(const std::string & c_stringLog) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLogger>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_log,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_stringLog)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
