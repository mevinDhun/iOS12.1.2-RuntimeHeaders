/* Generated by EzioChiu.
 */

@protocol CARSessionObserving <NSObject>

@optional

- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)sessionDidConnect:(CARSession *)arg1;
- (void)sessionDidDisconnect:(CARSession *)arg1;
- (void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;

@end
