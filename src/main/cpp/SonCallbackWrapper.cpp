//
//  SonCallbackWrapper.cpp
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

#include "SonCallbackWrapper.hpp"
#include <iostream>

namespace mobilecppmemorytest {
    
    SonCallbackWrapper::SonCallbackWrapper(std::function<void(std::string)> callback) {
        this->m_callback = callback;
    }
    
    void SonCallbackWrapper::onResult(const std::string & result) {
        
        std::cout << "SonCallbackWrapper::onResult" << std::endl;
        
        this->m_callback(result);
        
    }
    
}
