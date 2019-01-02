/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding> {
    NSPointerArray * _bottomRowStrokes;
    NSPointerArray * _leftColumnStrokes;
    int  _maxOrder;
    NSPointerArray * _rightColumnStrokes;
    NSPointerArray * _topRowStrokes;
}

@property (nonatomic, retain) NSPointerArray *bottomRowStrokes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSPointerArray *leftColumnStrokes;
@property (nonatomic) int maxOrder;
@property (nonatomic, retain) NSPointerArray *rightColumnStrokes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSPointerArray *topRowStrokes;

- (void).cxx_destruct;
- (id)bottomRowStrokes;
- (id)cellBorderAtCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (void)enumerateStrokesInRegion:(id)arg1 usingTopStrokeBlock:(id /* block */)arg2 usingBottomStrokeBlock:(id /* block */)arg3 usingLeftStrokeBlock:(id /* block */)arg4 usingRightStrokeBlock:(id /* block */)arg5;
- (void)flattenStrokeOrder;
- (id)initForUpgradeWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1;
- (void)insertColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)insertRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)leftColumnStrokes;
- (void)loadFromUnarchiver:(id)arg1;
- (int)maxOrder;
- (void)moveColumnIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned int)arg2;
- (id)p_flattenMajorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2;
- (void)p_setBottomStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (void)p_setLeftStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (void)p_setRightStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (void)p_setStroke:(id)arg1 order:(int)arg2 inStrokesArray:(id)arg3 atIndex:(unsigned int)arg4 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg5;
- (void)p_setTopStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })p_strokeRect;
- (void)removeColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)rightColumnStrokes;
- (void)saveToArchiver:(id)arg1;
- (void)setBordersWithCellMap:(id)arg1;
- (void)setBottomRowStrokes:(id)arg1;
- (void)setCellBorder:(id)arg1 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
- (void)setLeftColumnStrokes:(id)arg1;
- (void)setMaxOrder:(int)arg1;
- (void)setRightColumnStrokes:(id)arg1;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setTopRowStrokes:(id)arg1;
- (id)strokeLayerForBottomOfRow:(unsigned int)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForTopOfRow:(unsigned int)arg1;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (id)topRowStrokes;

@end
