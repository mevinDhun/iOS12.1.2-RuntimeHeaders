/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISaveToCameraRollActivity : UIActivity {
    long long  _imageCount;
    long long  _livePhotoCount;
    long long  _videoCount;
}

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic) long long videoCount;

+ (unsigned long long)_xpcAttributes;

- (id)_activityImage;
- (id /* block */)_backgroundPreheatBlock;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (long long)imageCount;
- (long long)livePhotoCount;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setImageCount:(long long)arg1;
- (void)setLivePhotoCount:(long long)arg1;
- (void)setVideoCount:(long long)arg1;
- (long long)videoCount;

@end