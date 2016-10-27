// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from father.djinni

#pragma once

#include "ModelFather.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeModelFather final : ::djinni::JniInterface<::mobilecppmemorytest::ModelFather, NativeModelFather> {
public:
    using CppType = std::shared_ptr<::mobilecppmemorytest::ModelFather>;
    using CppOptType = std::shared_ptr<::mobilecppmemorytest::ModelFather>;
    using JniType = jobject;

    using Boxed = NativeModelFather;

    ~NativeModelFather();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeModelFather>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeModelFather>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeModelFather();
    friend ::djinni::JniClass<NativeModelFather>;
    friend ::djinni::JniInterface<::mobilecppmemorytest::ModelFather, NativeModelFather>;

};

}  // namespace djinni_generated