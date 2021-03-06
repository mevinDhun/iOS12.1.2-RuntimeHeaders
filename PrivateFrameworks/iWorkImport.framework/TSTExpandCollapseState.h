/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTExpandCollapseState : TSKSosBase <NSCopying> {
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
        struct UUIDData<TSP::UUIDData> {} *__begin_; 
        struct UUIDData<TSP::UUIDData> {} *__end_; 
        struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
            struct UUIDData<TSP::UUIDData> {} *__value_; 
        } __end_cap_; 
    }  _collapsedGroupUIDs;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
        struct UUIDData<TSP::UUIDData> {} *__begin_; 
        struct UUIDData<TSP::UUIDData> {} *__end_; 
        struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
            struct UUIDData<TSP::UUIDData> {} *__value_; 
        } __end_cap_; 
    }  _expandedGroupUIDs;
    TSUUUIDSet * _uidsCollapsed;
    TSUUUIDSet * _uidsExpanded;
}

@property (nonatomic, readonly) TSUUUIDSet *uidsCollapsed;
@property (nonatomic, readonly) TSUUUIDSet *uidsExpanded;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithArchive:(const struct ExpandCollapseStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::UUID> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1;
- (id)initWithCollapsed:(id)arg1 expanded:(id)arg2;
- (id)makeInverse;
- (void)saveToArchive:(struct ExpandCollapseStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::UUID> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1;
- (id)uidsCollapsed;
- (id)uidsExpanded;

@end
