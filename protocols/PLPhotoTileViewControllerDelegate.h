/* Generated by EzioChiu.
 */

@protocol PLPhotoTileViewControllerDelegate <NSObject>

@required

- (void)photoTileViewController:(PLPhotoTileViewController *)arg1 didAppear:(bool)arg2;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg1 didDisappear:(bool)arg2;
- (void)photoTileViewController:(PLPhotoTileViewController *)arg1 willAppear:(bool)arg2;
- (void)photoTileViewControllerCancelImageRequests:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerDidEndGesture:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerDoubleTap:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerSingleTap:(PLPhotoTileViewController *)arg1;
- (void)photoTileViewControllerWillBeginGesture:(PLPhotoTileViewController *)arg1;

@optional

- (bool)isPhotoTileParentPageControllerAnimating:(PLPhotoTileViewController *)arg1;
- (bool)photoTileViewControllerAllowsEditing:(PLPhotoTileViewController *)arg1;
- (bool)photoTileViewControllerCanShowCenterOverlay:(PLPhotoTileViewController *)arg1;
- (UIView *)photoTileViewControllerCustomCenterOverlay:(PLPhotoTileViewController *)arg1;
- (<UILayoutSupport> *)photoTileViewControllerTopLayoutGuide:(PLPhotoTileViewController *)arg1;

@end
