/* Generated by EzioChiu.
 */

@protocol TSPForwardsCompatibleField

@required

- (const struct FieldInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FieldPath {} *x5; int x6; int x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { unsigned int *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x14; int x15; }*)fieldInfo;
- (bool)hasKnownValues;
- (bool)hasUnknownValues;
- (void)loadFromUnarchiver:(TSPUnarchiver *)arg1;
- (void)mergeToMessage:(struct Message { int (**x1)(); }*)arg1 reflection:(const struct Reflection { int (**x1)(); }*)arg2;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x1; }*)arg1;
- (void)saveToArchiver:(TSPArchiver *)arg1;
- (void)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; struct RepeatedField<unsigned int> { unsigned int *x_18_1_1; int x_18_1_2; int x_18_1_3; } x18; int x19; unsigned int x20; }*)arg1;

@end