/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisID : NSObject <NSCopying> {
    unsigned long long  mOrdinal;
    int  mType;
}

@property (readonly) unsigned long long ordinal;
@property (readonly) int type;

+ (id)axisIDWithType:(int)arg1 ordinal:(unsigned long long)arg2;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debuggingName;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct ChartAxisIDArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; unsigned int x6; }*)arg1;
- (id)initWithType:(int)arg1 ordinal:(unsigned long long)arg2;
- (bool)intersectsAxisID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)ordinal;
- (void)saveToArchive:(struct ChartAxisIDArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; unsigned int x6; }*)arg1;
- (int)type;

@end
