/* Generated by EzioChiu.
 */

@protocol SBUIPowerDownViewDelegate <NSObject>

@required

- (void)powerDownViewAnimateOutCompleted:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewRequestCancel:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewRequestPowerDown:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewWillAnimateIn:(UIView<SBUIPowerDownViewInterface> *)arg1;
- (void)powerDownViewWillAnimateOut:(UIView<SBUIPowerDownViewInterface> *)arg1;

@end