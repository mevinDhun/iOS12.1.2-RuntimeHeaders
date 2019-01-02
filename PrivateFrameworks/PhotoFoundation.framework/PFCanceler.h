/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCanceler : NSObject <PFCanceler> {
    bool  _isCanceled;
    struct PFAsyncDispatchMulticaster { Class x1; } * _multicaster;
    NSObject<OS_dispatch_queue> * _serializer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsNotifyOnCancel;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (id)init;
- (bool)isCanceled;
- (void)removeObserver:(id)arg1;

@end