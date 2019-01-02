/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTBFFOnBoardingVideoView : UIView {
    bool  _displayingVideo;
    UIImageView * _imageView;
    UIImage * _placeholderImage;
    AVPlayer * _videoPlayer;
    AVPlayerViewController * _videoViewController;
}

@property bool displayingVideo;
@property (retain) UIImageView *imageView;
@property (nonatomic) UIImage *placeholderImage;
@property (retain) AVPlayer *videoPlayer;
@property (retain) AVPlayerViewController *videoViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)displayingVideo;
- (id)imageView;
- (id)initWithPlaceholderImage:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderImage;
- (void)setDisplayingVideo:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)showVideo:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)transitionToVideo;
- (id)videoPlayer;
- (void)videoReachedEnd:(id)arg1;
- (id)videoViewController;

@end
