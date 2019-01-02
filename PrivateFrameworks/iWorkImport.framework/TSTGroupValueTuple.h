/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTGroupValueTuple : TSKSosBase <NSCopying> {
    NSArray * _groupValues;
}

@property (readonly) unsigned char numberOfLevels;

+ (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })rootUid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_GroupValueTupleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::CellValueArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)groupValueAtLevel:(unsigned char)arg1;
- (id)groupValueTupleByAppendingValue:(id)arg1;
- (id)groupValueTupleByDemotingValueAtLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2;
- (id)groupValueTupleByMergingTuple:(id)arg1 toLevel:(unsigned char)arg2;
- (id)groupValueTupleByPromotingValueAtLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2;
- (id)groupValueTupleByRemovingValueAtLevel:(unsigned char)arg1;
- (id)groupValueTupleByReplacingValue:(id)arg1 atLevel:(unsigned char)arg2;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })groupValueUid;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_GroupValueTupleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::CellValueArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 locale:(id)arg2;
- (id)initWithValueArray:(id)arg1;
- (id)initWithValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (unsigned char)numberOfLevels;
- (id)prefixTupleToLevel:(unsigned char)arg1;
- (void)updateWithDocumentRoot:(id)arg1;

@end
