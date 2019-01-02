/* Generated by EzioChiu.
 */

@protocol TSDPlatformButtonProtocol <NSObject>

@required

+ (UIButton *)tsdPlatformButtonWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setAlternateImageNamed:(NSString *)arg1 inBundle:(NSBundle *)arg2;
- (void)setImageNamed:(NSString *)arg1 inBundle:(NSBundle *)arg2;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (bool)showsTouchWhenHighlighted;

@end
