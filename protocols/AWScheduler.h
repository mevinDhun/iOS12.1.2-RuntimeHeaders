/* Generated by EzioChiu.
 */

@protocol AWScheduler

@required

- (void)addClient:(void *)arg1 clientConfig:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: <AWFrameworkClient> *, AWAttentionAwarenessConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AWRemoteClient> *, NSError *, void*
- (void)getDebugPreferences:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getSupportedEventsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getUnitTestSamplerWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AWUnitTestSampler> *, void*
- (void)outputPowerLogWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setDebugPreference:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
