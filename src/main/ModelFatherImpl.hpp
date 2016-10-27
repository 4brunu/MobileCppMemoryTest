//
//  ModelFatherImpl.hpp
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

#include "ModelFather.hpp"

namespace mobilecppmemorytest {
    
    class NetworkRequest;
    class Logger;
    
    class ModelFatherImpl : public ModelFather {
        
    public:
        
        // Constructor
        ModelFatherImpl(const std::shared_ptr<NetworkRequest> & networkRequest, const std::shared_ptr<Logger> & logger);
        
        void simulateWork(const std::shared_ptr<FatherCallback> & fatherCallback);
        
    private:
        
        void networkCall(const std::shared_ptr<FatherCallback> & fatherCallback);
        
        void workDone(std::string string);
        
        std::shared_ptr<NetworkRequest> networkRequest;
        std::shared_ptr<Logger> logger;
        
    };
    
}
