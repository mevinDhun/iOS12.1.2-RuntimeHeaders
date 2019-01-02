/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCAAnimationCache : NSObject {
    bool  _anchorPointAnimationExists;
    struct CGPoint { double x1; double x2; } * _anchorPointCache;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPointInitialValue;
    bool  _anchorPointZAnimationExists;
    double * _anchorPointZCache;
    double  _anchorPointZInitialValue;
    CAAnimation * _animation;
    double  _animationDuration;
    bool  _borderColorAnimationExists;
    struct CGColor { } * _borderColorInitialValue;
    bool  _borderWidthAnimationExists;
    double * _borderWidthCache;
    double  _borderWidthInitialValue;
    bool  _boundsAnimationExists;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _boundsCache;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsInitialValue;
    long long  _cacheValuesCount;
    bool  _contentsAnimationExists;
    struct CGImage { } * _contentsInitialValue;
    bool  _doubleSidedAnimationExists;
    bool * _doubleSidedCache;
    bool  _doubleSidedInitialValue;
    bool  _hiddenAnimationExists;
    bool * _hiddenCache;
    bool  _hiddenInitialValue;
    NSDictionary * _initialValues;
    CALayer * _layer;
    bool  _opacityAnimationExists;
    double * _opacityCache;
    double  _opacityInitialValue;
    NSDictionary * _overrideInitialValuesDict;
    bool  _positionAnimationExists;
    struct CGPoint { double x1; double x2; } * _positionCache;
    struct CGPoint { 
        double x; 
        double y; 
    }  _positionInitialValue;
    bool  _transformAnimationExists;
    struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } * _transformCache;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _transformInitialValue;
    bool  _transformRotationAnimationExists;
    double * _transformRotationCache;
    double  _transformRotationInitialValue;
    bool  _transformRotationXAnimationExists;
    double * _transformRotationXCache;
    double  _transformRotationXInitialValue;
    bool  _transformRotationYAnimationExists;
    double * _transformRotationYCache;
    double  _transformRotationYInitialValue;
    bool  _transformRotationZAnimationExists;
    double * _transformRotationZCache;
    double  _transformRotationZInitialValue;
    bool  _transformScaleXAnimationExists;
    double * _transformScaleXCache;
    double  _transformScaleXInitialValue;
    bool  _transformScaleXYAnimationExists;
    double * _transformScaleXYCache;
    double  _transformScaleXYInitialValue;
    bool  _transformScaleYAnimationExists;
    double * _transformScaleYCache;
    double  _transformScaleYInitialValue;
    bool  _transformTranslationAnimationExists;
    struct CGPoint { double x1; double x2; } * _transformTranslationCache;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transformTranslationInitialValue;
    bool  _transformTranslationXAnimationExists;
    double * _transformTranslationXCache;
    double  _transformTranslationXInitialValue;
    bool  _transformTranslationYAnimationExists;
    double * _transformTranslationYCache;
    double  _transformTranslationYInitialValue;
    bool  _transformTranslationZAnimationExists;
    double * _transformTranslationZCache;
    double  _transformTranslationZInitialValue;
    bool  _zPositionAnimationExists;
    double * _zPositionCache;
    double  _zPositionInitialValue;
}

@property (nonatomic, readonly) bool anchorPointAnimationExists;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPointInitialValue;
@property (nonatomic, readonly) bool anchorPointZAnimationExists;
@property (nonatomic, readonly) double anchorPointZInitialValue;
@property (nonatomic, readonly) CAAnimation *animation;
@property (nonatomic, readonly) bool borderColorAnimationExists;
@property (nonatomic, readonly) struct CGColor { }*borderColorInitialValue;
@property (nonatomic, readonly) bool borderWidthAnimationExists;
@property (nonatomic, readonly) double borderWidthInitialValue;
@property (nonatomic, readonly) bool boundsAnimationExists;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsInitialValue;
@property (nonatomic, readonly) bool contentsAnimationExists;
@property (nonatomic, readonly) struct CGImage { }*contentsInitialValue;
@property (nonatomic, readonly) bool doubleSidedAnimationExists;
@property (nonatomic, readonly) bool doubleSidedInitialValue;
@property (nonatomic, readonly) bool hiddenAnimationExists;
@property (nonatomic, readonly) bool hiddenInitialValue;
@property (nonatomic, readonly) NSDictionary *initialValues;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) bool opacityAnimationExists;
@property (nonatomic, readonly) double opacityInitialValue;
@property (nonatomic, readonly) bool positionAnimationExists;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } positionInitialValue;
@property (nonatomic, readonly) bool transformAnimationExists;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transformInitialValue;
@property (nonatomic, readonly) bool transformRotationAnimationExists;
@property (nonatomic, readonly) double transformRotationInitialValue;
@property (nonatomic, readonly) bool transformRotationXAnimationExists;
@property (nonatomic, readonly) double transformRotationXInitialValue;
@property (nonatomic, readonly) bool transformRotationYAnimationExists;
@property (nonatomic, readonly) double transformRotationYInitialValue;
@property (nonatomic, readonly) bool transformRotationZAnimationExists;
@property (nonatomic, readonly) double transformRotationZInitialValue;
@property (nonatomic, readonly) bool transformScaleXAnimationExists;
@property (nonatomic, readonly) double transformScaleXInitialValue;
@property (nonatomic, readonly) bool transformScaleXYAnimationExists;
@property (nonatomic, readonly) double transformScaleXYInitialValue;
@property (nonatomic, readonly) bool transformScaleYAnimationExists;
@property (nonatomic, readonly) double transformScaleYInitialValue;
@property (nonatomic, readonly) bool transformTranslationAnimationExists;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } transformTranslationInitialValue;
@property (nonatomic, readonly) bool transformTranslationXAnimationExists;
@property (nonatomic, readonly) double transformTranslationXInitialValue;
@property (nonatomic, readonly) bool transformTranslationYAnimationExists;
@property (nonatomic, readonly) double transformTranslationYInitialValue;
@property (nonatomic, readonly) bool transformTranslationZAnimationExists;
@property (nonatomic, readonly) double transformTranslationZInitialValue;
@property (nonatomic, readonly) bool zPositionAnimationExists;
@property (nonatomic, readonly) double zPositionInitialValue;

- (bool)anchorPointAnimationExists;
- (struct CGPoint { double x1; double x2; })anchorPointCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint { double x1; double x2; })anchorPointInitialValue;
- (bool)anchorPointZAnimationExists;
- (double)anchorPointZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)anchorPointZInitialValue;
- (id)animation;
- (bool)borderColorAnimationExists;
- (struct CGColor { }*)borderColorInitialValue;
- (bool)borderWidthAnimationExists;
- (double)borderWidthCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)borderWidthInitialValue;
- (bool)boundsAnimationExists;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInitialValue;
- (bool)contentsAnimationExists;
- (struct CGImage { }*)contentsInitialValue;
- (void)dealloc;
- (bool)doubleSidedAnimationExists;
- (bool)doubleSidedCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (bool)doubleSidedInitialValue;
- (bool)hiddenAnimationExists;
- (bool)hiddenCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (bool)hiddenInitialValue;
- (id)initWithLayer:(id)arg1 animation:(id)arg2 overrideInitialValues:(id)arg3 cacheAnimationValues:(bool)arg4;
- (id)initialValues;
- (id)layer;
- (bool)opacityAnimationExists;
- (double)opacityCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)opacityInitialValue;
- (bool)p_setupAndCacheAnimationValues:(bool)arg1 verifyOnly:(bool)arg2;
- (bool)positionAnimationExists;
- (struct CGPoint { double x1; double x2; })positionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint { double x1; double x2; })positionInitialValue;
- (bool)transformAnimationExists;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformInitialValue;
- (bool)transformRotationAnimationExists;
- (double)transformRotationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationInitialValue;
- (bool)transformRotationXAnimationExists;
- (double)transformRotationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationXInitialValue;
- (bool)transformRotationYAnimationExists;
- (double)transformRotationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationYInitialValue;
- (bool)transformRotationZAnimationExists;
- (double)transformRotationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationZInitialValue;
- (bool)transformScaleXAnimationExists;
- (double)transformScaleXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformScaleXInitialValue;
- (bool)transformScaleXYAnimationExists;
- (double)transformScaleXYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformScaleXYInitialValue;
- (bool)transformScaleYAnimationExists;
- (double)transformScaleYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformScaleYInitialValue;
- (bool)transformTranslationAnimationExists;
- (struct CGPoint { double x1; double x2; })transformTranslationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint { double x1; double x2; })transformTranslationInitialValue;
- (bool)transformTranslationXAnimationExists;
- (double)transformTranslationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformTranslationXInitialValue;
- (bool)transformTranslationYAnimationExists;
- (double)transformTranslationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformTranslationYInitialValue;
- (bool)transformTranslationZAnimationExists;
- (double)transformTranslationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformTranslationZInitialValue;
- (bool)verifyCache;
- (bool)zPositionAnimationExists;
- (double)zPositionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)zPositionInitialValue;

@end
