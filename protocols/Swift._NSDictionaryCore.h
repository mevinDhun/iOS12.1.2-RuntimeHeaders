/* Generated by EzioChiu.
 */

@protocol Swift._NSDictionaryCore <Swift._NSCopying, Swift._NSFastEnumeration>

@required

- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(long long)arg3;
- (id)initWithObjects:(const id*)arg1 forKeys:(void*)arg2 count:(long long)arg3;
- (<_TtPs13_NSEnumerator_> *)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
