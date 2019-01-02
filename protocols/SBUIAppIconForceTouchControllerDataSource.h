/* Generated by EzioChiu.
 */

@protocol SBUIAppIconForceTouchControllerDataSource <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 iconViewFrameForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIView *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 newIconViewCopyForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;

@optional

- (NSString *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationBundleIdentifierForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSURL *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationBundleURLForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSArray *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationShortcutItemsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (NSString *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (double)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 iconImageCornerRadiusForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 iconImageInsetsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (SBFParallaxSettings *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 parallaxSettingsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (struct CGPoint { double x1; double x2; })appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 zoomDownCenterForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIView *)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 zoomDownViewForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;

@end
