/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadHandlerDelegate, SSDownloadManagerObserver> {
    long long  _ctLast;
    NSTimer * _deferredStartTimer;
    long long  _downloadIdent;
    SSDownloadHandler * _handler;
    NSAsyncSSDownloadManager * _manager;
    NSMutableArray * _pendingOps;
    NSCountedSet * _runloops;
    struct __CFRunLoopSource { } * _source;
    bool  _terminated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_enableLogging;
+ (id)sharedDownloadManagerForMediaKind:(id)arg1 persistenceIdentifier:(id)arg2;

- (void)_createNewDownload;
- (long long)_getDownloadIdent;
- (void)_invalidate;
- (void)_invokeInvocation:(id)arg1 withConnection:(id)arg2;
- (void)_managerFailedToStartInTime;
- (void)_postTerminalInvocation:(id)arg1;
- (void)_preTerminalInvocation:(id)arg1;
- (void)_sendTerminalDidFinishToDelegate:(id)arg1;
- (void)_sendTerminalErrorToDelegate:(id)arg1;
- (void)_sourcePerform;
- (void)_updateClientWithCurrentWrites:(id)arg1;
- (void)_updateDownloadState:(id)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;
- (bool)downloadHandler:(id)arg1 pauseSession:(id)arg2;
- (void)downloadHandlerDidDisconnect:(id)arg1;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; bool x3; long long x4; }*)arg1;
- (void)invokeForDelegate:(id /* block */)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setHandlerForDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end