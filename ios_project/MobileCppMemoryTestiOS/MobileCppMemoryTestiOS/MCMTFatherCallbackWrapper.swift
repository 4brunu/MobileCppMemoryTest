//
//  FatherCallbackWrapper.swift
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 28/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

import Foundation

class MCMTFatherCallbackWrapper: MCMTFatherCallback {
    
    private var callback: ((String) -> Void)?
    
    init(callback: ((String) -> Void)?) {
        self.callback = callback
    }
    
    @objc func onResult(_ value: String) {
        self.callback?(value)
    }
    
}
