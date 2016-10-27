//
//  ModelFatherImpl.cpp
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

#include "ModelFatherImpl.hpp"
#include "FatherCallback.hpp"
#include "networking/NetworkRequestCallbackWrapper.hpp"
#include "Logger.hpp"
#include "ModelSonImpl.hpp"
#include "SonCallbackWrapper.hpp"

namespace mobilecppmemorytest {
    
    
    std::shared_ptr<ModelFather> ModelFather::create(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger) {
        
        return std::make_shared<ModelFatherImpl>(networkRequest, logger);
        
    }
    
    ModelFatherImpl::ModelFatherImpl(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger) {
        this->networkRequest = networkRequest;
        this->logger = logger;
    }
    
    void ModelFatherImpl::simulateWork(const std::shared_ptr<FatherCallback> & fatherCallback) {
        
        std::shared_ptr<ModelSonImpl> modelSonImpl = std::make_shared<ModelSonImpl>(this->networkRequest, this->logger);
        
        modelSonImpl->simulateWork(SonCallbackWrapper::callback([this, fatherCallback](std::string result)
                                                                {
                                                                    
                                                                    networkCall(fatherCallback);
                                                                    
                                                                }));
        
    }
    
    void ModelFatherImpl::networkCall(const std::shared_ptr<FatherCallback> & fatherCallback) {
        
        this->networkRequest->httpGetRequest("http://jsonplaceholder.typicode.com/posts/1",
                                             NetworkRequestCallbackWrapper::callback([this, fatherCallback](NetworkRequestResponse response)
                                                                             {
                                                                                 
                                                                                 workDone(response.data);
                                                                                 
                                                                                 fatherCallback->onResult(response.data);
                                                                                 
                                                                             }
                                                                             ));

        
    }
    
    
    
    void ModelFatherImpl::workDone(std::string string) {
        
        this->logger->log("ModelSonImpl.workDone");
        
    }

}
