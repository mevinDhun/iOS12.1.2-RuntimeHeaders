/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListSectionHeaderView : UICollectionReusableView <NCLegibilitySettingsAdjusting, NCToggleControlDelegate, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    NCToggleControl * _clearButton;
    <NCNotificationListSectionHeaderViewDelegate> * _delegate;
    NCNotificationListHeaderTitleView * _headerTitleView;
    _UILegibilitySettings * _legibilitySettings;
    double  _overrideAlpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overrideCenter;
    NSString * _preferredContentSizeCategory;
    NSString * _sectionIdentifier;
    bool  _shouldOverrideForReveal;
    NSString * _title;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, readonly) UIControl *clearButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationListHeaderTitleView *headerTitleView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double overrideAlpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } overrideCenter;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) bool shouldOverrideForReveal;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })_clearButtonPreferredSize;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (double)headerHeightWithWidth:(double)arg1 title:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_configureClearButtonIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_handleClearAll:(id)arg1;
- (void)_handleClearButtonPrimaryActionTriggered:(id)arg1;
- (void)_handleClearButtonTouchUpInside:(id)arg1;
- (void)_layoutClearButton;
- (void)_layoutHeaderTitleView;
- (id)_legibilitySettings;
- (void)_resetClearButtonStateAnimated:(bool)arg1;
- (void)_resetRevealOverrides;
- (void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backgroundGroupName;
- (id)clearButton;
- (id)containerViewForToggleControlPreviewInteractionPresentedContent:(id)arg1;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (id)headerTitleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (double)overrideAlpha;
- (struct CGPoint { double x1; double x2; })overrideCenter;
- (id)preferredContentSizeCategory;
- (void)prepareForReuse;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (id)sectionIdentifier;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTitleView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOverrideAlpha:(double)arg1;
- (void)setOverrideCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setShouldOverrideForReveal:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldOverrideForReveal;
- (id)title;
- (void)toggleControlDidBeginPreviewInteraction:(id)arg1;
- (void)toggleControlDidDismssPreviewInteractionPresentedContent:(id)arg1;
- (void)toggleControlDidPresentPreviewInteractionPresentedContent:(id)arg1;

@end