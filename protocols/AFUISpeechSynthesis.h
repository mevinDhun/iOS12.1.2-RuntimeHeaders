/* Generated by EzioChiu.
 */

@protocol AFUISpeechSynthesis <NSObject>

@required

- (void)cancel;
- (void)enqueueAudioData:(void *)arg1 identifier:(void *)arg2 provisionally:(void *)arg3 eligibleAfterDuration:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: SAUIAudioData *, NSString *, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enqueuePhaticWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enqueueText:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)enqueueText:(void *)arg1 identifier:(void *)arg2 language:(void *)arg3 gender:(void *)arg4 isPhonetic:(void *)arg5 provisionally:(void *)arg6 eligibleAfterDuration:(void *)arg7 delayed:(void *)arg8 preparationIdentifier:(void *)arg9 completion:(void *)arg10 animationIdentifier:(void *)arg11 analyticsContext:(void *)arg12 speakableContextInfo:(void *)arg13; // needs 13 arg types, found 18: NSString *, NSString *, NSString *, NSString *, bool, bool, double, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*, NSString *, NSDictionary *, NSDictionary *
- (void)invalidate;
- (void)presynthesizeDialogStrings:(NSArray *)arg1 speakableContext:(NSDictionary *)arg2;
- (void)prewarmIfNeeded;
- (void)processDelayedItem:(NSString *)arg1;
- (void)skipCurrentSynthesis;

@end
