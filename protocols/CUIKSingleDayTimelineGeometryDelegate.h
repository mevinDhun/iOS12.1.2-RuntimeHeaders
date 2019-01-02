/* Generated by EzioChiu.
 */

@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>

@required

- (double)dateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayedRect;
- (double)hourHeight;
- (bool)originIsUpperLeft;
- (struct CGPoint { double x1; double x2; })pointForDate:(double)arg1;
- (double)timeWidth;
- (double)topPadding;

@optional

- (bool)shouldReverseLayoutDirection;

@end
