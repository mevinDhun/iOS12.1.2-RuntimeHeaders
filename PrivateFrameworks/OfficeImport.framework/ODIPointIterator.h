/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIPointIterator : NSObject

+ (bool)addPoint:(id)arg1 state:(/* Warning: unhandled struct encoding: '{ODIPointIteratorState=iIii@}' */ struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (bool)isDoneForState:(/* Warning: unhandled struct encoding: '{ODIPointIteratorState=iIii@}' */ struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg1;
+ (bool)isPoint:(id)arg1 ofType:(int)arg2;
+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(bool)arg3;
+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(bool)arg3;
+ (void)processChildAxisFromPoint:(id)arg1 state:(/* Warning: unhandled struct encoding: '{ODIPointIteratorState=iIii@}' */ struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(/* Warning: unhandled struct encoding: '{ODIPointIteratorState=iIii@}' */ struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (void)processSelfAxisFromPoint:(id)arg1 state:(/* Warning: unhandled struct encoding: '{ODIPointIteratorState=iIii@}' */ struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;

@end