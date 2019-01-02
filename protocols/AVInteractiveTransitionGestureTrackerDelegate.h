/* Generated by EzioChiu.
 */

@protocol AVInteractiveTransitionGestureTrackerDelegate <NSObject>

@required

- (void)gestureTracker:(AVInteractiveTransitionGestureTracker *)arg1 didBeginTrackingGesture:(long long)arg2;
- (void)gestureTracker:(AVInteractiveTransitionGestureTracker *)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint { double x1; double x2; })arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint { double x1; double x2; })arg5;
- (bool)gestureTracker:(AVInteractiveTransitionGestureTracker *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (void)gestureTrackerDidCancelTracking:(AVInteractiveTransitionGestureTracker *)arg1;
- (void)gestureTrackerDidFinishTracking:(AVInteractiveTransitionGestureTracker *)arg1;
- (bool)gestureTrackerShouldTrackPanToDismiss:(AVInteractiveTransitionGestureTracker *)arg1;
- (bool)gestureTrackerShouldTrackPinchToDismiss:(AVInteractiveTransitionGestureTracker *)arg1;
- (bool)gestureTrackerShouldTrackPinchToPresent:(AVInteractiveTransitionGestureTracker *)arg1;

@end
