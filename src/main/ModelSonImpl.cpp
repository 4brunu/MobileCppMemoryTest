//
//  ModelSonImpl.cpp
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

#include "ModelSonImpl.hpp"
#include "SonCallback.hpp"
#include "networking/NetworkRequestCallbackWrapper.hpp"
#include "Logger.hpp"

namespace mobilecppmemorytest {
    
    
    std::shared_ptr<ModelSon> ModelSon::create(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger) {
        
        return std::make_shared<ModelSonImpl>(networkRequest, logger);
        
    }
    
    ModelSonImpl::ModelSonImpl(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger) {
        this->networkRequest = networkRequest;
        this->logger = logger;
    }
    
    void ModelSonImpl::simulateWork(const std::shared_ptr<SonCallback> & sonCallback) {
        
        networkCall(sonCallback);
        
    }
    
    void ModelSonImpl::networkCall(const std::shared_ptr<SonCallback> & sonCallback) {
        
        this->networkRequest->httpGetRequest("http://jsonplaceholder.typicode.com/posts/1",
                                             NetworkRequestCallbackWrapper::callback([this, sonCallback](NetworkRequestResponse response)
                                                                             {
                                                                                 
                                                                                 workDone(response.data);
                                                                                 
                                                                                 sonCallback->onResult(response.data);
                                                                                 
                                                                             }
                                                                             ));
        
    }
    
    
    
    void ModelSonImpl::workDone(std::string string) {
        
        this->logger->log("ModelSonImpl.workDone");
        
    }

}
