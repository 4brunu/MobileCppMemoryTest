//
//  NetworkRequestImpl.swift
//  MobileCPPiOS
//
//  Created by Bruno Coelho on 15/03/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

import Foundation

class NetworkRequestImpl: NSObject, MCMTNetworkRequest {
    
    func httpGet(_ stringUrl: String, callback: MCMTNetworkRequestCallback?) {
        
        let task = URLSession.shared
            .dataTask(with: URL(string: stringUrl)!) { (data, response, error) -> Void in
                
                var httpStatusCode = Int32(0)
                
                if let httpResponse = response as? HTTPURLResponse {
                    
                    httpStatusCode = Int32(httpResponse.statusCode)
                    
                }
                
                var result = MCMTNetworkRequestResponse(succeed: false, data: "", httpStatusCode: httpStatusCode)
                
                if  let e = error {
                    print(e)
                }
                else if let d = data , let str = String(data: d, encoding: String.Encoding.utf8){
                        result = MCMTNetworkRequestResponse(succeed: true, data: str, httpStatusCode: httpStatusCode)
                }
                
                callback?.onResponse(result)
                
        }
        
        task.resume()
        
    }
    
}
