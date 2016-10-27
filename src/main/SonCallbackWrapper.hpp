//
//  SonCallbackWrapper.hpp
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

#include "SonCallback.hpp"
#include <functional>

namespace mobilecppmemorytest {
    
    class SonCallbackWrapper : public SonCallback {
        
    public:
        SonCallbackWrapper(std::function<void(std::string)> callback);
        
        static std::shared_ptr<SonCallback> callback(std::function<void(std::string)> callback) {
            
            return std::make_shared<SonCallbackWrapper>(callback);
            
        }
        
    private:
        
        std::function<void(std::string)> m_callback;
        
        void onResult(const std::string & result);

    };
    
}
