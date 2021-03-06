// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from son.djinni

#pragma once

#include "SonCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeSonCallback final : ::djinni::JniInterface<::mobilecppmemorytest::SonCallback, NativeSonCallback> {
public:
    using CppType = std::shared_ptr<::mobilecppmemorytest::SonCallback>;
    using CppOptType = std::shared_ptr<::mobilecppmemorytest::SonCallback>;
    using JniType = jobject;

    using Boxed = NativeSonCallback;

    ~NativeSonCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeSonCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeSonCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeSonCallback();
    friend ::djinni::JniClass<NativeSonCallback>;
    friend ::djinni::JniInterface<::mobilecppmemorytest::SonCallback, NativeSonCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::mobilecppmemorytest::SonCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onResult(const std::string & result) override;

    private:
        friend ::djinni::JniInterface<::mobilecppmemorytest::SonCallback, ::djinni_generated::NativeSonCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/company/mobilecppmemorytest/SonCallback") };
    const jmethodID method_onResult { ::djinni::jniGetMethodID(clazz.get(), "onResult", "(Ljava/lang/String;)V") };
};

}  // namespace djinni_generated
