/* Generated by EzioChiu.
 */

@protocol NCPreviewInteractionPresenterDelegate <NSObject>

@optional

- (UIView *)containerViewForPreviewInteractionPresenter:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidBeginInteraction:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidCommitToPresentation:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidDismiss:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidPresent:(NCPreviewInteractionPresenter *)arg1;
- (bool)previewInteractionPresenterShouldBegin:(NCPreviewInteractionPresenter *)arg1;

@end
