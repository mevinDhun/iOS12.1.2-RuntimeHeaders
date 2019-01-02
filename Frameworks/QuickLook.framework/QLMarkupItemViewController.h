/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMarkupItemViewController : QLItemViewController <MarkupViewControllerDelegate, PDFViewDelegate> {
    bool  _hasChangesToRedo;
    bool  _hasChangesToUndo;
    long long  _lastSavedEditNumber;
    QLMUViewController * _markupViewController;
    QLDelegateProxy * _pdfDocumentDelegateProxy;
    NSNumber * _shouldAllowEditingContents;
    bool  _showingSignatureView;
    double  _topInset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasChangesToRedo;
@property (nonatomic) bool hasChangesToUndo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) QLMUViewController *markupViewController;
@property (nonatomic, retain) QLDelegateProxy *pdfDocumentDelegateProxy;
@property (nonatomic, retain) NSNumber *shouldAllowEditingContents;
@property (readonly) Class superclass;
@property double topInset;

- (void).cxx_destruct;
- (void)_saveChanges;
- (void)_saveChangesWithHostCompletionHandler:(id /* block */)arg1;
- (void)_updateToolbarVisibilityAnimated:(bool)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (bool)canPinchToDismiss;
- (bool)canShowToolBar;
- (void)controllerWantsToShowShareSheet:(id)arg1;
- (void)documentDidUnlock:(id)arg1;
- (void)enableMarkupMode:(bool)arg1;
- (bool)hasChangesToRedo;
- (bool)hasChangesToUndo;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)markupViewController;
- (bool)needsToSaveChanges;
- (id)pdfDocumentDelegateProxy;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)prepareForActionSheetPresentation;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)registeredKeyCommands;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setHasChangesToRedo:(bool)arg1;
- (void)setHasChangesToUndo:(bool)arg1;
- (void)setMarkupViewController:(id)arg1;
- (void)setPdfDocumentDelegateProxy:(id)arg1;
- (void)setShouldAllowEditingContents:(id)arg1;
- (void)setTopInset:(double)arg1;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)shouldAllowEditingContents;
- (void)showingSignatureView:(bool)arg1;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (double)topInset;
- (void)updateMarkupEdgeInsets:(bool)arg1 resetScrollViewZoomScaleToMinimum:(bool)arg2;

@end