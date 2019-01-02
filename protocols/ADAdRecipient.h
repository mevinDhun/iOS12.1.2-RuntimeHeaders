/* Generated by EzioChiu.
 */

@protocol ADAdRecipient <NSObject, AdAnalyzable>

@required

- (NSString *)adResponseId;
- (UIView *)adSpaceView;
- (void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
- (void)adlibManagedVideoAdDidImpress;
- (void)adlibManagedVideoAdDidPausePlay;
- (void)adlibManagedVideoAdDidResumePlay;
- (void)adlibManagedVideoAdDidTapForMoreInfo;
- (void)adlibManagedVideoAdDidTapVideo;
- (void)adlibManagedVideoAdDidToggleToMute:(bool)arg1;
- (bool)displayed;
- (int)internalAdType;
- (long long)lastErrorCode;
- (ADLayoutOptions *)layoutOptions;
- (long long)options;
- (void)pauseBannerMedia;
- (UIViewController *)presentingViewController;
- (void)privacyButtonWasTapped;
- (bool)reUsed;
- (void)resumeBannerMedia;
- (int)screenfuls;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (void)setAdResponseId:(NSString *)arg1;
- (void)setDisplayed:(bool)arg1;
- (void)setLastErrorCode:(long long)arg1;
- (void)setLayoutOptions:(ADLayoutOptions *)arg1;
- (void)setReUsed:(bool)arg1;
- (void)setScreenfuls:(int)arg1;
- (void)setSlotPosition:(int)arg1;
- (bool)shouldTestVisibilityAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)slotPosition;
- (void)storyboardViewControllerDidPresent;

@optional

- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint { double x1; double x2; })arg1 withMRAIDAction:(ADMRAIDAction *)arg2;
- (void)setViewSizeInPortrait:(struct CGSize { double x1; double x2; })arg1 inLandscape:(struct CGSize { double x1; double x2; })arg2;

@end
