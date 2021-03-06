// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network.djinni

#import "MCMTNetworkRequestResponse+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto NetworkRequestResponse::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Bool::toCpp(obj.succeed),
            ::djinni::String::toCpp(obj.data),
            ::djinni::I32::toCpp(obj.httpStatusCode)};
}

auto NetworkRequestResponse::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCMTNetworkRequestResponse alloc] initWithSucceed:(::djinni::Bool::fromCpp(cpp.succeed))
                                                          data:(::djinni::String::fromCpp(cpp.data))
                                                httpStatusCode:(::djinni::I32::fromCpp(cpp.httpStatusCode))];
}

}  // namespace djinni_generated
