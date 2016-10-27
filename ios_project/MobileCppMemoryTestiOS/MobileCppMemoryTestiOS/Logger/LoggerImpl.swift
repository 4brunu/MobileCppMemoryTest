//
//  LoggerImpl.swift
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

import Foundation

class LoggerImpl: NSObject, MCMTLogger {
    
    func log(_ stringLog: String) {
        print("logger -> \(stringLog)")
    }
    
}
