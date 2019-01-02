/* Generated by EzioChiu.
 */

@protocol EKEditItemViewControllerDelegate <NSObject>

@required

- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerShouldShowDetachAlert;

@optional

- (EKEvent *)editItemEventToDetach;
- (bool)editItemViewControllerSave:(EKEditItemViewController *)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(bool)arg1;

@end
