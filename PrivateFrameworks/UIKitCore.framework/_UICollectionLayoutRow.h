/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutRow : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _aggregateFrameSizes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    long long  _expectedItemCount;
    NSMutableArray * _frames;
    NSMutableArray * _insets;
    int  _layoutAxis;
    double  _layoutDimension;
    double  _minimumInterItemSpacing;
    bool  _vertical;
}

@property (nonatomic) struct CGSize { double x1; double x2; } aggregateFrameSizes;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) long long expectedItemCount;
@property (nonatomic, retain) NSMutableArray *frames;
@property (nonatomic, retain) NSMutableArray *insets;
@property (nonatomic) int layoutAxis;
@property (nonatomic) double layoutDimension;
@property (nonatomic) double minimumInterItemSpacing;
@property (nonatomic) bool vertical;

- (void).cxx_destruct;
- (void)_addFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_alignFramesForOrthogonalAxisCenteredWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisFromBottomWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisFromTrailingEdgeWithDimension:(double)arg1;
- (void)_alignFramesFromBottomWithDimension:(double)arg1;
- (void)_alignFramesFromTrailingEdgeWithDimension:(double)arg1;
- (void)_alignFramesJustifiedWithDimension:(double)arg1;
- (bool)_edgeSpaceIncludesVariableSpacing:(double)arg1;
- (double)_effectiveEdgeSpaceForValue:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveInsetsForInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)_fixedSpacingForEdgeSpaces:(id)arg1;
- (id)_frameEdgeSpacingsForInsetsForAxis:(int)arg1;
- (double)_layoutDimensionForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct CGPoint { double x1; double x2; })_nextFrameOffsetForInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (long long)_numberOfVariableSpacedEdgesForEdgeSpaces:(id)arg1;
- (void)_spaceFramesEvenlyWithDimension:(double)arg1;
- (void)_spaceFramesOrthogonallyEvenlyWithDimension:(double)arg1;
- (double)_spaceUsedForLayoutDimension;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })addFrameOfSize:(struct CGSize { double x1; double x2; })arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct CGSize { double x1; double x2; })aggregateFrameSizes;
- (void)alignFramesForOrthogonalAxisWithAlignmentOption:(long long)arg1 dimension:(double)arg2;
- (void)alignFramesWithAlignmentOption:(long long)arg1 dimension:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameWithOffset:(struct CGSize { double x1; double x2; })arg1;
- (long long)currentFrameCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (long long)expectedItemCount;
- (id)frames;
- (id)framesWithOffset:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithAxis:(int)arg1 itemCount:(long long)arg2 containerDimensions:(struct CGSize { double x1; double x2; })arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 minimumInterItemSpacing:(double)arg5;
- (id)insets;
- (bool)isRowFull;
- (bool)isSpaceAvailableForFrameOfSize:(struct CGSize { double x1; double x2; })arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (int)layoutAxis;
- (double)layoutDimension;
- (double)minimumInterItemSpacing;
- (void)setAggregateFrameSizes:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExpectedItemCount:(long long)arg1;
- (void)setFrames:(id)arg1;
- (void)setInsets:(id)arg1;
- (void)setLayoutAxis:(int)arg1;
- (void)setLayoutDimension:(double)arg1;
- (void)setMinimumInterItemSpacing:(double)arg1;
- (void)setVertical:(bool)arg1;
- (void)spaceFramesEvenlyForLayoutAxis:(int)arg1 withDimension:(double)arg2;
- (bool)vertical;

@end