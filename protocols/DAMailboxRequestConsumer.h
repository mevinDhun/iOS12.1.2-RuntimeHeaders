/* Generated by EzioChiu.
 */

@protocol DAMailboxRequestConsumer <DAActionConsumer>

@optional

- (void)resultsForMailbox:(NSString *)arg1 newTag:(NSString *)arg2 actions:(NSArray *)arg3 responses:(NSArray *)arg4 percentComplete:(double)arg5 moreAvailable:(bool)arg6;
- (void)resultsForMailbox:(NSString *)arg1 newTag:(NSString *)arg2 actions:(NSArray *)arg3 responses:(NSArray *)arg4 percentComplete:(double)arg5 moreAvailable:(bool)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8;

@end
