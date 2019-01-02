/* Generated by EzioChiu.
 */

@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>

@required

- (void)_overrideBiometricMatchingEnabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)_resumeBiometricMatchingAdvisory:(bool)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (bool)confirmedNotInPocket;
- (void)didEndTransitionToState:(long long)arg1;
- (SBUIProudLockContainerViewController *)overrideProudLockContainerViewController;
- (struct { bool x1; bool x2; double x3; bool x4; double x5; double x6; double x7; double x8; bool x9; bool x10; bool x11; unsigned long long x12; })proudLockConfiguration;
- (void)setConfirmedNotInPocket:(bool)arg1;
- (void)setOverrideProudLockContainerViewController:(SBUIProudLockContainerViewController *)arg1;
- (void)setProudLockConfiguration:(struct { bool x1; bool x2; double x3; bool x4; double x5; double x6; double x7; double x8; bool x9; bool x10; bool x11; unsigned long long x12; })arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)willEndTransitionToState:(long long)arg1;

@optional

- (void)_noteAppearingForSmartCoverUnlock:(bool)arg1;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(bool)arg1;

@end
