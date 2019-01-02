/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedSlideView : NSObject <KNCanvasDelegate, TSDConnectedInfoReplacing> {
    NSMutableSet * _activeAnimatedBuilds;
    SEL  _ambientBuildEndCallbackSelector;
    id  _ambientBuildEndCallbackTarget;
    NSMutableSet * _ambientBuildRenderers;
    SEL  _ambientBuildStartCallbackSelector;
    id  _ambientBuildStartCallbackTarget;
    unsigned long long  _animationsActive;
    unsigned long long  _animationsStarted;
    NSMapTable * _buildsToStartAfterAmbientBuildStartsMap;
    TSDCanvas * _canvas;
    NSLock * _canvasLock;
    unsigned long long  _currentEventIndex;
    NSMutableArray * _delayedAnimations;
    SEL  _eventAnimationActiveCallbackSelector;
    id  _eventAnimationActiveCallbackTarget;
    SEL  _eventEndCallbackSelector;
    id  _eventEndCallbackTarget;
    SEL  _eventImmediateEndCallbackSelector;
    id  _eventImmediateEndCallbackTarget;
    NSIndexSet * _eventIndexesToAnimate;
    SEL  _eventStartCallbackSelector;
    id  _eventStartCallbackTarget;
    NSMapTable * _eventToSlideTextureMap;
    bool  _hasEventStarted;
    bool  _isDoneAnimating;
    bool  _isInDelayBeforeActiveBuild;
    bool  _isInDelayBeforeActiveTransition;
    bool  _isSerialized;
    bool  _isSlideBuildable;
    KNAnimatedSlideModel * _model;
    bool  _playsAutomaticTransitions;
    bool  _sInDelayBeforeActiveTransition;
    KNPlaybackSession * _session;
    NSLock * _setTextureLock;
    bool  _shouldStopAnimations;
    KNSlide * _slide;
    KNSlideNode * _slideNode;
    unsigned long long  _slideNumber;
    NSMapTable * _textureDescriptionAndSetForRepMap;
    bool  _transitionHasFinishedCallbackPending;
    double  _transitionStartTime;
    bool  _triggerQueued;
}

@property (nonatomic, readonly, copy) NSMutableSet *activeAnimatedBuilds;
@property (nonatomic, readonly) NSArray *allInfos;
@property (nonatomic, readonly) unsigned long long buildEventCount;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (retain) NSLock *canvasLock;
@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (nonatomic) unsigned long long currentEventIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSIndexSet *eventIndexesToAnimate;
@property (nonatomic) bool hasEventStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAmbientAnimationAnimating;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, readonly) bool isDoneAnimating;
@property (nonatomic, readonly) bool isInDelayBeforeActiveTransition;
@property (nonatomic, readonly) bool isNonAmbientAnimationActive;
@property (nonatomic, readonly) bool isNonAmbientAnimationAnimating;
@property (nonatomic, readonly) KNAnimatedSlideModel *model;
@property (nonatomic, readonly) NSSet *movieRenderers;
@property (nonatomic, readonly) KNAnimatedSlideView *nextASV;
@property (nonatomic) bool playsAutomaticTransitions;
@property (nonatomic, readonly) KNPlaybackSession *session;
@property (retain) NSLock *setTextureLock;
@property (nonatomic, readonly) bool shouldPreCache;
@property (nonatomic, readonly) bool shouldPrepareAnimationsAsynchronously;
@property (nonatomic, readonly) KNSlide *slide;
@property (nonatomic, readonly) KNSlideNode *slideNode;
@property (readonly) unsigned long long slideNumber;
@property (readonly) Class superclass;
@property (nonatomic) bool triggerQueued;

+ (void)initialize;
+ (void)registerUserDefaults;

- (void).cxx_destruct;
- (id)activeAnimatedBuilds;
- (void)addActiveAnimatedBuild:(id)arg1;
- (id)allInfos;
- (unsigned long long)buildEventCount;
- (void)buildHasFinishedAnimating:(id)arg1;
- (id)canvas;
- (id)canvasLock;
- (void)clearActiveAnimatedBuilds;
- (unsigned long long)currentEventIndex;
- (void)dealloc;
- (id)description;
- (id)documentRoot;
- (id)eventIndexesToAnimate;
- (void)generateTextures;
- (bool)hasEventStarted;
- (bool)hasTransitionAtEventIndex:(long long)arg1;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)infosCurrentlyVisible;
- (id)infosVisibleAtEvent:(unsigned long long)arg1 ignoreBuildVisibility:(bool)arg2;
- (id)init;
- (id)initForSlideNode:(id)arg1 session:(id)arg2;
- (void)interruptAndReset;
- (bool)isAmbientAnimationAnimating;
- (bool)isAnimating;
- (bool)isAtFirstEvent;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isDoneAnimating;
- (bool)isInDelayBeforeActiveTransition;
- (bool)isInfoAKeynoteMasterObject:(id)arg1;
- (bool)isNonAmbientAnimationActive;
- (bool)isNonAmbientAnimationAnimating;
- (bool)isPrintingCanvas;
- (bool)isRenderingForKPF;
- (id)model;
- (id)movieRenderers;
- (id)newSlideTextureForEvent:(unsigned long long)arg1;
- (id)nextASV;
- (id)nonCachedTextureSetForRep:(id)arg1 description:(id)arg2 shouldRender:(bool)arg3;
- (void)p_addAmbientBuildRenderer:(id)arg1;
- (void)p_addInfoToLayerTree:(id)arg1 rep:(id)arg2 renderer:(id)arg3 builtInfos:(id)arg4;
- (id)p_addParentLayerForInfo:(id)arg1;
- (void)p_ambientBuildEnded:(id)arg1;
- (void)p_ambientBuildStarted:(id)arg1;
- (void)p_animateBuild:(id)arg1;
- (void)p_animateBuild:(id)arg1 afterDelay:(double)arg2;
- (void)p_animateBuild:(id)arg1 isAmbientBuild:(bool)arg2;
- (void)p_animateCurrentEventIgnoringDelays:(bool)arg1;
- (void)p_animateTransition:(id)arg1;
- (void)p_clearAmbientBuildRenderers;
- (void)p_evictCacheAmbientBuildTexturesForTransition:(id)arg1;
- (id)p_initializeTextureSetForRep:(id)arg1 info:(id)arg2 eventIndex:(unsigned long long)arg3 ignoreBuildVisibility:(bool)arg4 isRenderingToContext:(bool)arg5;
- (void)p_loadPerformanceAnalysisFrameWork;
- (void)p_makeMetalLayerVisible;
- (double)p_minimumDelay;
- (void)p_notifyAmbientBuildEndWithObject:(id)arg1;
- (void)p_notifyAmbientBuildStartWithObject:(id)arg1;
- (void)p_notifyEventAnimationActiveWithObject:(id)arg1;
- (void)p_notifyEventEndWithObject:(id)arg1;
- (void)p_notifyEventImmediateEndWithObject:(id)arg1;
- (void)p_notifyEventStart;
- (void)p_performAnimationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 performAsynchronously:(bool)arg5;
- (void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg1;
- (void)p_removeAmbientBuildRenderer:(id)arg1;
- (void)p_removeDelayedAnimation:(id)arg1;
- (void)p_renderCurrentEvent;
- (void)p_renderSlideContentWithCALayers;
- (void)p_renderSlideContentWithMetal;
- (void)p_setupSlideMetalRendererShouldReset:(bool)arg1;
- (void)p_setupTransitionStartTime;
- (bool)p_shouldAddInfoToTree:(id)arg1;
- (bool)p_shouldSkipActionBuild:(id)arg1 onDrawable:(id)arg2;
- (void)p_stopAllAmbientBuildRenderers;
- (id)p_textureSetForRep:(id)arg1 shouldRender:(bool)arg2;
- (void)pauseAnimations;
- (bool)playAutomaticEvents;
- (bool)playsAutomaticTransitions;
- (void)prepareAnimations;
- (void)registerForAmbientBuildEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeActiveAnimatedBuild:(id)arg1;
- (void)renderCurrentEvent;
- (void)renderIntoContext:(struct CGContext { }*)arg1 eventIndex:(unsigned long long)arg2 ignoreBuildVisibility:(bool)arg3;
- (void)renderTextures;
- (id)repsCurrentlyVisible;
- (void)reset;
- (void)resetAmbientBuildTextures;
- (void)resumeAnimationsIfPaused;
- (void)serializeTextures;
- (id)session;
- (void)setCanvasLock:(id)arg1;
- (void)setCurrentEventIndex:(unsigned long long)arg1;
- (void)setEventIndexesToAnimate:(id)arg1;
- (void)setHasEventStarted:(bool)arg1;
- (void)setPlaysAutomaticTransitions:(bool)arg1;
- (void)setSetTextureLock:(id)arg1;
- (void)setTexture:(id)arg1 forRep:(id)arg2 forDescription:(id)arg3;
- (id)setTextureLock;
- (void)setTriggerQueued:(bool)arg1;
- (bool)shouldPreCache;
- (bool)shouldPrepareAnimationsAsynchronously;
- (bool)shouldShowInstructionalText;
- (bool)shouldSuppressBackgrounds;
- (id)slide;
- (id)slideNode;
- (unsigned long long)slideNumber;
- (void)stopAnimations;
- (void)tearDown;
- (void)tearDownTransition;
- (id)textureSetForRep:(id)arg1 description:(id)arg2 shouldRender:(bool)arg3;
- (void)transitionHasFinishedAnimating:(id)arg1;
- (void)transitionHasImmediatelyFinishedAnimating:(id)arg1;
- (void)triggerNextEvent;
- (void)triggerNextEventIgnoringDelay:(bool)arg1;
- (bool)triggerQueued;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(bool)arg1;

@end
