// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network.djinni

#import "MCMTNetworkRequestCallback+Private.h"
#import "MCMTNetworkRequestCallback.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "MCMTNetworkRequestResponse+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCMTNetworkRequestCallback ()

- (id)initWithCpp:(const std::shared_ptr<::mobilecppmemorytest::NetworkRequestCallback>&)cppRef;

@end

@implementation MCMTNetworkRequestCallback {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::mobilecppmemorytest::NetworkRequestCallback>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::mobilecppmemorytest::NetworkRequestCallback>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onResponse:(nonnull MCMTNetworkRequestResponse *)networkRequestResponse {
    try {
        _cppRefHandle.get()->onResponse(::djinni_generated::NetworkRequestResponse::toCpp(networkRequestResponse));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto NetworkRequestCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto NetworkRequestCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCMTNetworkRequestCallback>(cpp);
}

}  // namespace djinni_generated

@end
