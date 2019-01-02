/* Generated by EzioChiu.
 */

@protocol BiometricKitXpcProtocol <NSObject>

@required

- (void)cancel:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)completeEnrollment:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)connect:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)detectPresenceWithOptions:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)diagnostics:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 11: int, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, NSDictionary *, void*
- (void)disconnect:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)dropUnlockToken:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)enableBackgroundFdet:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)enableMatchAutoRetry:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)enroll:(void *)arg1 user:(void *)arg2 options:(void *)arg3 client:(void *)arg4 replyBlock:(void *)arg5; // needs 5 arg types, found 10: int, unsigned int, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)enrollContinue:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)fieldDiagnosticsControl:(void *)arg1 inData:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 10: unsigned int, NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)fileRadarWithLogs:(void *)arg1 description:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)forceBioLockoutForUser:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned int, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)getAugmentationEligibilityForIdentity:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: BiometricKitIdentity *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)getBioLockoutStateForUser:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, long long, void*
- (void)getBiometryAvailabilityForUser:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, long long, void*
- (void)getCalibrationDataInfo:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getCountersignedStoreToken:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)getDeviceState:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getFreeIdentityCount:(void *)arg1 user:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: int, unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getIdentitiesDatabaseHashForUser:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getIdentitiesDatabaseUUIDForUser:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)getIdentityFromUUID:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BiometricKitIdentity *, void*
- (void)getLogs:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*
- (void)getMaxIdentityCount:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getNodeTopologyForIdentity:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: BiometricKitIdentity *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getProtectedConfigurationForUser:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: unsigned int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getProvisioningState:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getSensorCalibrationStatus:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getSensorInfo:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getSystemProtectedConfiguration:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)identities:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)isAriadneSignpostsEnabled:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isFingerOn:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isXARTAvailable:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)logEventOrCode:(unsigned long long)arg1;
- (void)match:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: NSDictionary *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)notifyAppIsBackground:(bool)arg1 client:(unsigned long long)arg2;
- (void)notifyAppIsInactive:(bool)arg1 client:(unsigned long long)arg2;
- (void)pauseFaceDetectTimer:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)pullAlignmentData:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)pullCalibrationData:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)pullCaptureBuffer:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)pullDebugImageData:(void *)arg1 rotated:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 11: bool, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, unsigned int, unsigned int, void*
- (void)pullMatchPolicyInfoData:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)queryIdentityMigrationFailureForUser:(void *)arg1 clear:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 10: unsigned int, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)registerDSID:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)registerDelegate:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)registerStoreToken:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)removeAllIdentitiesForUser:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned int, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)removeIdentity:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: BiometricKitIdentity *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)resetAppleConnectCounter:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setDebugImages:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setProtectedConfiguration:(void *)arg1 user:(void *)arg2 options:(void *)arg3 client:(void *)arg4 replyBlock:(void *)arg5; // needs 5 arg types, found 10: NSDictionary *, unsigned int, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setSystemProtectedConfiguration:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: NSDictionary *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setTemplate:(void *)arg1 forIdentity:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: NSData *, BiometricKitIdentity *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setUserDSID:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)startNewMatchAttempt:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)suspendEnrollment:(void *)arg1 client:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 8: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)timestampEvent:(void *)arg1 absoluteTime:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)updateIdentity:(void *)arg1 options:(void *)arg2 client:(void *)arg3 replyBlock:(void *)arg4; // needs 4 arg types, found 9: BiometricKitIdentity *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
