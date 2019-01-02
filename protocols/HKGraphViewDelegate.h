/* Generated by EzioChiu.
 */

@protocol HKGraphViewDelegate <NSObject>

@required

- (void)graphView:(HKGraphView *)arg1 didFinishUserScrollingToValueRange:(HKValueRange *)arg2;
- (void)graphView:(HKGraphView *)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(HKValueRange *)arg4;
- (void)graphView:(HKGraphView *)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)graphView:(HKGraphView *)arg1 didUpdateSelectedPoint:(NSArray *)arg2;
- (void)graphView:(HKGraphView *)arg1 didUpdateSeries:(HKGraphSeries *)arg2 newDataArrived:(bool)arg3;
- (void)graphView:(HKGraphView *)arg1 didUpdateVisibleValueRange:(HKValueRange *)arg2 changeContext:(long long)arg3;
- (void)graphView:(HKGraphView *)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (NSArray *)graphView:(HKGraphView *)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphViewDidBeginSelection:(HKGraphView *)arg1;
- (void)graphViewDidEndSelection:(HKGraphView *)arg1;
- (void)graphViewDidTapYAxis:(HKGraphView *)arg1;
- (void)graphViewSizeChanged:(HKGraphView *)arg1;
- (UIColor *)seriesSelectionLineColorForGraphView:(HKGraphView *)arg1;
- (long long)stackCountForGraphView:(HKGraphView *)arg1;

@end
