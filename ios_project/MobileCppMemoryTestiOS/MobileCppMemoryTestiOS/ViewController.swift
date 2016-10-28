//
//  ViewController.swift
//  MobileCppMemoryTestiOS
//
//  Created by Bruno Coelho on 27/10/2016.
//  Copyright © 2016 Company. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    var modelFather: MCMTModelFather?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        let networkRequest = NetworkRequestImpl()
        
        let logger = LoggerImpl()
        
        modelFather = MCMTModelFather.create(networkRequest, logger: logger)
        
        modelFather?.simulateWork(MCMTFatherCallbackWrapper(callback: { (result) in
            print("ViewController.onResult")

        }))
        
    }
    
}

