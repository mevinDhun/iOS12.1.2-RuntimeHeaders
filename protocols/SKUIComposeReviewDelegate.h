/* Generated by EzioChiu.
 */

@protocol SKUIComposeReviewDelegate <UINavigationControllerDelegate>

@optional

- (void)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 didFailWithDialog:(ISDialog *)arg2;
- (void)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 didSubmitWithEdit:(bool)arg2;
- (void)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 presentDialog:(ISDialog *)arg2;
- (bool)composeReviewViewController:(SKUIComposeReviewViewController *)arg1 shouldSubmitReview:(SKUIReviewMetadata *)arg2;
- (void)composeReviewViewControllerDidCancel:(SKUIComposeReviewViewController *)arg1;
- (void)composeReviewViewControllerDidSubmit:(SKUIComposeReviewViewController *)arg1;

@end
