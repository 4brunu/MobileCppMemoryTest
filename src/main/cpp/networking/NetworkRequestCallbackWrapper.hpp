//
//  NetworkRequestCallbackWrapper.hpp
//  MobileCPPiOS
//
//  Created by Bruno Coelho on 16/03/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

#include "NetworkRequest.hpp"
#include "NetworkRequestCallback.hpp"
#include "NetworkRequestResponse.hpp"
#include <functional>

namespace mobilecppmemorytest {
    
    class NetworkRequestCallbackWrapper : public NetworkRequestCallback {
        
    public:
        NetworkRequestCallbackWrapper(std::function<void(NetworkRequestResponse)> callback);
        
        static std::shared_ptr<NetworkRequestCallbackWrapper> callback(std::function<void(NetworkRequestResponse)> callback) {
            
            return std::make_shared<NetworkRequestCallbackWrapper>(callback);
            
        }
        
    private:
        
        std::function<void(NetworkRequestResponse)> m_callback;
        
        void onResponse(const NetworkRequestResponse & networkRequestResponse);
        
    };
    
}
