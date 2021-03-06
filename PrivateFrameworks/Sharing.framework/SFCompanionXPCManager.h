/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionXPCManager : NSObject {
    NSXPCConnection * _connection;
    bool  _interrupted;
    bool  _invalid;
    int  _listenerResumedToken;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _xpcSetupQueue;
}

@property (retain) NSXPCConnection *connection;
@property bool interrupted;
@property (getter=isInvalid) bool invalid;
@property int listenerResumedToken;
@property (retain) NSMutableArray *observers;
@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;

+ (id)advertiserClientInterface;
+ (id)advertiserInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (void)initialize;
+ (id)scannerClientInterface;
+ (id)scannerInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)sharedManager;
+ (id)unlockInterface;
+ (id)xpcManagerInterface;

- (void).cxx_destruct;
- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)appleAccountSignedIn;
- (void)appleAccountSignedOut;
- (id)connection;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (bool)interrupted;
- (bool)isInvalid;
- (int)listenerResumedToken;
- (void)notifyOfInterruption;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setListenerResumedToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setXpcSetupQueue:(id)arg1;
- (void)setupConnection;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)unlockManagerWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)xpcSetupQueue;

@end
