/* Generated by EzioChiu.
 */

@protocol HKMedicalIDEditorCellHeightChangeDelegate

@required

- (void)medicalIDEditorCell:(HKMedicalIDEditorCell *)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(UIView *)arg4;
- (void)medicalIDEditorCellDidBeginEditing:(HKMedicalIDEditorCell *)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(UIView *)arg3;
- (void)medicalIDEditorCellDidChangeSelection:(HKMedicalIDEditorCell *)arg1 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(UIView *)arg3;

@end