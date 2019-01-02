/* Generated by EzioChiu.
 */

@protocol AMSUserNotificationStrategy

@required

- (NSArray *)activeNotifications;
- (<AMSUserNotificationCenterDelegate> *)delegate;
- (id)initWithOriginalCenter:(AMSUserNotificationCenter *)arg1 bundleId:(NSString *)arg2 runningInDaemon:(bool)arg3;
- (AMSUserNotificationCenter *)originalCenter;
- (AMSBinaryPromise *)postNotification:(AMSUserNotification *)arg1;
- (AMSBinaryPromise *)removeNotification:(AMSUserNotification *)arg1;
- (void)setDelegate:(id <AMSUserNotificationCenterDelegate>)arg1;

@end
