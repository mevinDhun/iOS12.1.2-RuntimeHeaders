/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarActionsModel : NSObject <AVTAvatarEditorViewControllerDelegate> {
    AVTAvatarRecord * _avatarRecord;
    AVTViewSessionProvider * _avtViewSessionProvider;
    bool  _buttonsDisabled;
    NSArray * _currentInlineActionButtons;
    AVTAvatarRecordDataSource * _dataSource;
    <AVTAvatarActionsModelDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    bool  _isCreatingAvatar;
}

@property (nonatomic, retain) AVTAvatarRecord *avatarRecord;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic) bool buttonsDisabled;
@property (nonatomic, retain) NSArray *currentInlineActionButtons;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarActionsModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inlineActionButtons;
@property (nonatomic) bool isCreatingAvatar;
@property (readonly) Class superclass;

+ (bool)actionIsDestructive:(long long)arg1;
+ (id)buttonForActionType:(long long)arg1 withActionBlock:(id /* block */)arg2;
+ (id)localizedTitleForActionType:(long long)arg1;

- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avatarRecord;
- (id)avtViewSessionProvider;
- (bool)buttonsDisabled;
- (bool)canPerformActionType:(long long)arg1;
- (id)createBarButtonItem;
- (id)currentInlineActionButtons;
- (id)dataSource;
- (id)delegate;
- (void)didTapCreateNew:(id)arg1;
- (void)didTapDelete;
- (void)didTapDuplicate;
- (void)didTapEdit;
- (id)environment;
- (id)generateInlineActionButtons;
- (id)initWithAvatarRecord:(id)arg1 dataSource:(id)arg2 avtViewSessionProvider:(id)arg3 environment:(id)arg4;
- (id)inlineActionButtons;
- (bool)isCreatingAvatar;
- (void)presentEditor:(id)arg1 forCreating:(bool)arg2;
- (void)setAvatarRecord:(id)arg1;
- (void)setButtonsDisabled:(bool)arg1;
- (void)setCurrentInlineActionButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCreatingAvatar:(bool)arg1;
- (void)updateForChangedContentCategorySize;

@end