/* Generated by EzioChiu.
 */

@protocol PLCameraEffectsRendererDelegate <NSObject>

@required

- (void)cameraEffectsRenderer:(CMKEffectsRenderer *)arg1 didFinishTransitionToShowGrid:(bool)arg2;
- (void)cameraEffectsRenderer:(CMKEffectsRenderer *)arg1 didStartTransitionToShowGrid:(bool)arg2 animated:(bool)arg3;
- (void)cameraEffectsRenderer:(CMKEffectsRenderer *)arg1 requestsPreviewLayerEnabled:(bool)arg2;
- (void)cameraEffectsRenderer:(CMKEffectsRenderer *)arg1 requestsVideoDataOutputEnabled:(bool)arg2;
- (void)cameraEffectsRenderer:(CMKEffectsRenderer *)arg1 willTransitionToShowGrid:(bool)arg2;
- (void)cameraEffectsRendererDidStartPreview:(CMKEffectsRenderer *)arg1;

@end
