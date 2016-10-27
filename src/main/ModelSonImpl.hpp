//
//  ModelSonImpl.hpp
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

#include "ModelSon.hpp"

namespace mobilecppmemorytest {
    
    class NetworkRequest;
    class Logger;
    
    class ModelSonImpl : public ModelSon {
        
    public:
        
        // Constructor
        ModelSonImpl(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger);
        
        void simulateWork(const std::shared_ptr<SonCallback> & sonCallback);
        
    private:
        
        void networkCall(const std::shared_ptr<SonCallback> & sonCallback);
        
        void workDone(std::string string);
        
        std::shared_ptr<NetworkRequest> networkRequest;
        std::shared_ptr<Logger> logger;
        
    };
    
}
