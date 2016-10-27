// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from son.djinni

#import "MCMTSonCallback+Private.h"
#import "MCMTSonCallback.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class SonCallback::ObjcProxy final
: public ::mobilecppmemorytest::SonCallback
, public ::djinni::ObjcProxyCache::Handle<ObjcType>
{
public:
    using Handle::Handle;
    void onResult(const std::string & c_result) override
    {
        @autoreleasepool {
            [Handle::get() onResult:(::djinni::String::fromCpp(c_result))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto SonCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto SonCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).Handle::get();
}

}  // namespace djinni_generated