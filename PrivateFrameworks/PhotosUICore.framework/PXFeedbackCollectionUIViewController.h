/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackCollectionUIViewController : UIViewController <PXFeedbackFormDelegate> {
    unsigned long long  _feedbackCollectionType;
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCollectionType:(unsigned long long)arg1;
- (id)longTitleText;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)viewDidLoad;
- (id)viewTitleForRadar;
- (void)viewWillDisappear:(bool)arg1;

@end
