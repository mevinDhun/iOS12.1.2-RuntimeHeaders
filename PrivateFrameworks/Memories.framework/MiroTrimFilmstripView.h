/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTrimFilmstripView : UIView <MiroTrimmer> {
    <MiroClip> * _clip;
    UIView * _contentContainer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    NSArray * _contentEdgeInsetsConstraints;
    int  _currentDragType;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLayedOutSize;
    int  _currentZoomOperation;
    MiroTrimmerDebugView * _debugOverlay;
    int  _deferredSeekTime;
    <MiroTrimmerDelegate> * _delegate;
    FrameGenerator * _frameGenerator;
    bool  _isTrimmed;
    double  _lastSeekWallClockTime;
    NSLayoutConstraint * _leftContentEdgeInsetConstraint;
    UIView * _leftDisabledView;
    UIImageView * _leftHandleView;
    NSLayoutConstraint * _leftSelectionHandlePositionConstraint;
    AVPlayer * _player;
    bool  _playerBusySeeking;
    id  _playerPeriodicTimeObserver;
    NSLayoutConstraint * _playheadPositionConstraint;
    UIView * _playheadView;
    int  _projectFrameRate;
    NSLayoutConstraint * _rightContentEdgeInsetConstraint;
    UIView * _rightDisabledView;
    UIImageView * _rightHandleView;
    NSLayoutConstraint * _rightSelectionHandlePositionConstraint;
    float  _selectionEndTime;
    float  _selectionStartTime;
    UIView * _selectionView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _slipDragPreviousLocation;
    UIView * _thumbnailContainer;
    NSArray * _thumbnailImageViews;
    id  _trimBoundaryTimeObserver;
    double  _trimHandleWidth;
    double  _zoomFactor;
    int  _zoomPinnedTime;
}

@property (nonatomic, retain) <MiroClip> *clip;
@property (nonatomic, retain) UIView *contentContainer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, retain) NSArray *contentEdgeInsetsConstraints;
@property (nonatomic) int currentDragType;
@property (nonatomic) struct CGSize { double x1; double x2; } currentLayedOutSize;
@property (nonatomic) int currentZoomOperation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MiroTrimmerDebugView *debugOverlay;
@property (nonatomic) int deferredSeekTime;
@property (nonatomic) <MiroTrimmerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FrameGenerator *frameGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTrimmed;
@property (nonatomic) double lastSeekWallClockTime;
@property (nonatomic, retain) NSLayoutConstraint *leftContentEdgeInsetConstraint;
@property (nonatomic, retain) UIView *leftDisabledView;
@property (nonatomic, retain) UIImageView *leftHandleView;
@property (nonatomic, retain) NSLayoutConstraint *leftSelectionHandlePositionConstraint;
@property (nonatomic, retain) AVPlayer *player;
@property bool playerBusySeeking;
@property (nonatomic, retain) id playerPeriodicTimeObserver;
@property (nonatomic, retain) NSLayoutConstraint *playheadPositionConstraint;
@property (nonatomic, retain) UIView *playheadView;
@property (nonatomic) int projectFrameRate;
@property (nonatomic, retain) NSLayoutConstraint *rightContentEdgeInsetConstraint;
@property (nonatomic, retain) UIView *rightDisabledView;
@property (nonatomic, retain) UIImageView *rightHandleView;
@property (nonatomic, retain) NSLayoutConstraint *rightSelectionHandlePositionConstraint;
@property (nonatomic) float selectionEndTime;
@property (nonatomic) float selectionStartTime;
@property (nonatomic, retain) UIView *selectionView;
@property (nonatomic) struct CGPoint { double x1; double x2; } slipDragPreviousLocation;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *thumbnailContainer;
@property (nonatomic, retain) NSArray *thumbnailImageViews;
@property (nonatomic, retain) id trimBoundaryTimeObserver;
@property (nonatomic) double trimHandleWidth;
@property (nonatomic) double zoomFactor;
@property (nonatomic) int zoomPinnedTime;

+ (void)initialize;

- (void).cxx_destruct;
- (double)_constantForLeftContentEdgeInsetConstraint;
- (double)_constantForRightContentEdgeInsetConstraint;
- (void)_deferredSeek;
- (void)_deferredSeekToTime:(int)arg1;
- (void)_handleLongPress:(id)arg1;
- (long long)_numberOfThumbnails;
- (void)_seekToTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)_setPlayheadHidden:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (int)_timePerThumbnail;
- (void)_touchesEnded;
- (void)_updateContentEdgeInsetsConstraints;
- (void)_updateFilmstripFromLayout:(bool)arg1;
- (void)_updateFilmstripFromLayout:(bool)arg1 thumbnailViewsToRemoveAfterAnimation:(id*)arg2;
- (void)_updatePlayheadPosition;
- (void)_updateSelectionWithStartFrame:(float)arg1 endFrame:(float)arg2;
- (void)_updateTrimmerAppearanceSelected:(bool)arg1 animated:(bool)arg2;
- (id)clip;
- (id)contentContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)contentEdgeInsetsConstraints;
- (int)currentDragType;
- (struct CGSize { double x1; double x2; })currentLayedOutSize;
- (int)currentZoomOperation;
- (void)dealloc;
- (id)debugOverlay;
- (int)deferredSeekTime;
- (id)delegate;
- (id)frameGenerator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTrimmed;
- (double)lastSeekWallClockTime;
- (void)layoutSubviews;
- (id)leftContentEdgeInsetConstraint;
- (id)leftDisabledView;
- (id)leftHandleView;
- (id)leftSelectionHandlePositionConstraint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (bool)playerBusySeeking;
- (id)playerPeriodicTimeObserver;
- (id)playheadPositionConstraint;
- (id)playheadView;
- (int)projectFrameRate;
- (id)rightContentEdgeInsetConstraint;
- (id)rightDisabledView;
- (id)rightHandleView;
- (id)rightSelectionHandlePositionConstraint;
- (float)selectionEndTime;
- (float)selectionStartTime;
- (id)selectionView;
- (void)setClip:(id)arg1;
- (void)setContentContainer:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentEdgeInsetsConstraints:(id)arg1;
- (void)setCurrentDragType:(int)arg1;
- (void)setCurrentLayedOutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentZoomOperation:(int)arg1;
- (void)setDebugOverlay:(id)arg1;
- (void)setDeferredSeekTime:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameGenerator:(id)arg1;
- (void)setIsTrimmed:(bool)arg1;
- (void)setLastSeekWallClockTime:(double)arg1;
- (void)setLeftContentEdgeInsetConstraint:(id)arg1;
- (void)setLeftDisabledView:(id)arg1;
- (void)setLeftHandleView:(id)arg1;
- (void)setLeftSelectionHandlePositionConstraint:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerBusySeeking:(bool)arg1;
- (void)setPlayerPeriodicTimeObserver:(id)arg1;
- (void)setPlayheadPositionConstraint:(id)arg1;
- (void)setPlayheadView:(id)arg1;
- (void)setProjectFrameRate:(int)arg1;
- (void)setRightContentEdgeInsetConstraint:(id)arg1;
- (void)setRightDisabledView:(id)arg1;
- (void)setRightHandleView:(id)arg1;
- (void)setRightSelectionHandlePositionConstraint:(id)arg1;
- (void)setSelectionEndTime:(float)arg1;
- (void)setSelectionStartTime:(float)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setSlipDragPreviousLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setThumbnailContainer:(id)arg1;
- (void)setThumbnailImageViews:(id)arg1;
- (void)setTrimBoundaryTimeObserver:(id)arg1;
- (void)setTrimHandleWidth:(double)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomPinnedTime:(int)arg1;
- (struct CGPoint { double x1; double x2; })slipDragPreviousLocation;
- (id)thumbnailContainer;
- (id)thumbnailImageViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)trimBoundaryTimeObserver;
- (double)trimHandleWidth;
- (void)updateDebugMetadataOverlay;
- (double)zoomFactor;
- (int)zoomPinnedTime;

@end