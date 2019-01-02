/* Generated by EzioChiu.
 */

@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>

@required

- (long long)backgroundStyle;
- (NSArray *)elementOverrides;
- (bool)isHidden;
- (SBLockScreenLegibilitySettings *)legibilitySettings;
- (long long)notificationBehavior;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRegion;
- (long long)presentationStyle;
- (unsigned long long)restrictedCapabilities;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setElementOverrides:(NSArray *)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLegibilitySettings:(SBLockScreenLegibilitySettings *)arg1;
- (void)setNotificationBehavior:(long long)arg1;
- (void)setPresentationRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setRestrictedCapabilities:(unsigned long long)arg1;

@end
