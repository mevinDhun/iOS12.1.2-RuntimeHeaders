/* Generated by EzioChiu.
 */

@protocol TSPArchivableContent <NSObject>

@required

- (const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)fieldPath;
- (bool)isContentUnknown;
- (bool)isDiff;
- (unsigned long long)messageVersion;

@end
