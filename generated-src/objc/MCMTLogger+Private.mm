// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from logger.djinni

#import "MCMTLogger+Private.h"
#import "MCMTLogger.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class Logger::ObjcProxy final
: public ::mobilecppmemorytest::Logger
, public ::djinni::ObjcProxyCache::Handle<ObjcType>
{
public:
    using Handle::Handle;
    void log(const std::string & c_stringLog) override
    {
        @autoreleasepool {
            [Handle::get() log:(::djinni::String::fromCpp(c_stringLog))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto Logger::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto Logger::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).Handle::get();
}

}  // namespace djinni_generated
