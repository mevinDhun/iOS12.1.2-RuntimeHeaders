/* Generated by EzioChiu.
 */

@protocol TSPKnownFieldRuleProvider <NSObject>

@required

- (void)enumerateKnownFieldRulesUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*, struct FieldInfoRuleAttributes { int x1; unsigned long long x2; id x3; unsigned long long x4; bool *x5; void*x6; void*x7; void*x8; }*
- (bool)isContentUnknown;

@end
