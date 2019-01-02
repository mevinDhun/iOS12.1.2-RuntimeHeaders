/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDispatchOnce : NSObject {
    id /* block */  _booleanHandler;
    struct atomic_flag { 
        bool _Value; 
    }  _didFire;
    id /* block */  _objectHandler;
    NSObject<OS_dispatch_queue> * _queue;
    ICDispatchOnce * _strongSelf;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

- (void).cxx_destruct;
- (void)_invalidate;
- (void)failWithError:(id)arg1;
- (void)finishWithBooleanResult:(bool)arg1 error:(id)arg2;
- (void)finishWithObjectResult:(id)arg1 error:(id)arg2;
- (id)initWithBooleanHandler:(id /* block */)arg1;
- (id)initWithObjectHandler:(id /* block */)arg1;
- (void)startWithTimeout:(double)arg1;
- (void)startWithTimeout:(double)arg1 queue:(id)arg2;

@end