/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKSelectionDispatcher : NSObject {
    TSUWeakReference * _selectionDispatchReceiverReference;
}

@property (nonatomic) <TSKSelectionDispatchReceiver> *selectionDispatchReceiver;
@property (nonatomic, retain) TSUWeakReference *selectionDispatchReceiverReference;

- (void)beginTransformingCurrentSelectionPaths;
- (void)dealloc;
- (void)dispatchSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)endTransformingCurrentSelectionPaths;
- (id)newRootSelectionTransformerForSelectionPath:(id)arg1;
- (id)selectionDispatchReceiver;
- (id)selectionDispatchReceiverReference;
- (void)setSelectionDispatchReceiver:(id)arg1;
- (void)setSelectionDispatchReceiverReference:(id)arg1;
- (void)transformCurrentSelectionPathsUsingOperationTransformer:(id)arg1;

@end
