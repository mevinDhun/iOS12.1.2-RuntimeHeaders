/* Generated by EzioChiu.
 */

@protocol AAEventProcessorType

@required

- (void)processEvent:(AAProcessEvent *)arg1;
- (void)registerAccessQueue:(OS_dispatch_queue *)arg1;

@optional

- (void)didEndSession:(AASession *)arg1 endDate:(NSDate *)arg2;
- (void)didEnterGroup:(AAGroup *)arg1;
- (void)didLeaveGroup:(AAGroup *)arg1;
- (void)didStartSession:(AASession *)arg1;
- (void)didUpdateSession:(AASession *)arg1 submitEventQueues:(bool)arg2;
- (bool)resumeBackgroundProcessingForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
