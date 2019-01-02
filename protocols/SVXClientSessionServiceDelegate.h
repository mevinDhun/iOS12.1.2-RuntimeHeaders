/* Generated by EzioChiu.
 */

@protocol SVXClientSessionServiceDelegate <NSObject>

@required

- (void)sessionService:(id <SVXClientSessionServicing>)arg1 didBecomeActiveWithActivationContext:(SVXActivationContext *)arg2;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 didNotStartSoundWithID:(long long)arg2 error:(NSError *)arg3;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 didResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg2;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 didStopSoundWithID:(long long)arg2 error:(NSError *)arg3;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 willBecomeActiveWithActivationContext:(SVXActivationContext *)arg2;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 willPresentFeedbackWithDialogIdentifier:(NSString *)arg2;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionService:(id <SVXClientSessionServicing>)arg1 willStartSoundWithID:(long long)arg2;

@optional

- (void)sessionServiceDidResignActive:(id <SVXClientSessionServicing>)arg1;

@end
