/* Generated by EzioChiu.
 */

@protocol SXTransitionDataSource <NSObject>

@required

- (bool)isTransitionable;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContainerFrame;
- (UIView *)transitionContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (UIView *)transitionContentView;
- (bool)transitionViewIsVisible;
- (bool)transitionViewShouldFadeInContent;
- (bool)transitionViewUsesThumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionVisibleFrame;

@end
