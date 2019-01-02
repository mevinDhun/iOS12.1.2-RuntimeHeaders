/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSelection : TSKSelection {
    TSCHChartDrawableInfo * mInfo;
    NSArray * mPaths;
}

@property (nonatomic, readonly, retain) TSCHChartDrawableInfo *chartInfo;
@property (nonatomic, readonly, copy) TSCHSelectionPath *firstPath;
@property (nonatomic, readonly) unsigned long long pathCount;
@property (nonatomic, readonly, copy) TSCHSelectionPathType *pathType;
@property (nonatomic, readonly, copy) NSSet *pathTypes;
@property (nonatomic, readonly, copy) NSArray *paths;
@property (nonatomic, readonly) bool returnChartFrameForAutoscroll;

+ (Class)archivedSelectionClass;
+ (id)emptySelectionWithChartInfo:(id)arg1;
+ (id)selectionWithChartInfo:(id)arg1 paths:(id)arg2;

- (void).cxx_destruct;
- (id)chartInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)firstPath;
- (unsigned long long)hash;
- (id)initFromArchive:(const struct ChartSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableSelectionArchive {} *x5; struct Reference {} *x6; struct RepeatedPtrField<TSCH::ChartSelectionPathArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;
- (id)initWithPaths:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pathCount;
- (id)pathType;
- (id)pathTypes;
- (id)paths;
- (bool)returnChartFrameForAutoscroll;
- (void)saveToArchive:(struct ChartSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableSelectionArchive {} *x5; struct Reference {} *x6; struct RepeatedPtrField<TSCH::ChartSelectionPathArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1 archiver:(id)arg2;
- (id)selectionByAddingPathsFromArray:(id)arg1;
- (id)selectionByRemovingPathsFromArray:(id)arg1;

@end
