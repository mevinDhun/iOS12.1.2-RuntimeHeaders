/* Generated by EzioChiu.
 */

@protocol CKPermanentEventStorePrivate

@required

- (CKKnowledgeStore *)backingStore;
- (void)deleteEventWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)deleteEventWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)historicEventsAndReturnError:(id*)arg1;
- (void)historicEventsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (void)setFirstSeen:(void *)arg1 forEventWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setFrequency:(void *)arg1 forEventWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLastDuration:(void *)arg1 forEventWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLastSeen:(void *)arg1 forEventWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setTotalDuration:(void *)arg1 forEventWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
