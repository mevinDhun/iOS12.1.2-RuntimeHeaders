/* Generated by EzioChiu.
 */

@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>

@required

- (void)captureDevicesChangedForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStartPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStopPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraDidBecomeAvailableForUniqueID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didChangeLocalVideoAttributes:(VideoAttributes *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveErrorFromCameraUniqueID:(NSString *)arg2 error:(NSError *)arg3;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg2;

@end
