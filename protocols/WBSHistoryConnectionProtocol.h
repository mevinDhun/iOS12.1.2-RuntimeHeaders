/* Generated by EzioChiu.
 */

@protocol WBSHistoryConnectionProtocol

@required

- (void)beginHistoryAccessSession:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSHistoryAccessSessionProtocol> *, NSError *, void*
- (void)beginURLCompletionSession:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSURLCompletionSessionProtocol> *, NSError *, void*
- (void)debugGetDatabaseURLWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)ensureConnected:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getServiceInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getVisitedLinksWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)groupVisitsIntoSessionsBetweenStartDate:(void *)arg1 endDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)queryMemoryFootprint:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSMemoryFootprint *, NSError *, void*

@end
