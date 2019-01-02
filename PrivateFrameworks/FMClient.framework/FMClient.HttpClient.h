/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.HttpClient : NSObject <NSURLSessionDelegate> {
    void authenticationChallengeHandler;
    void endpoint;
    void httpSuccessCodeMax;
    void httpSuccessCodeMin;
    void session.storage;
    void statusCodeHandlerQueue;
    void statusCodeHandlers;
}

- (id /* block */).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;

@end