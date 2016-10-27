//
//  NetworkRequestCallbackWrapper.cpp
//  MobileCPPiOS
//
//  Created by Bruno Coelho on 16/03/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include "NetworkRequestCallbackWrapper.hpp"
#include <iostream>

namespace mobilecppmemorytest {
        
    NetworkRequestCallbackWrapper::NetworkRequestCallbackWrapper(std::function<void(NetworkRequestResponse)> callback) {
        this->m_callback = callback;
    }
        
    void NetworkRequestCallbackWrapper::onResponse(const NetworkRequestResponse & networkRequestResponse) {
        
        std::cout << "NetworkRequestCallbackWrapper::onResponse" << std::endl;
        
        this->m_callback(networkRequestResponse);
        
    }
    
}
