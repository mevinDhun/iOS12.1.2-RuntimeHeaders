/* Generated by EzioChiu.
 */

@protocol KNSlideCollection <NSObject>

@required

- (bool)containsSlideNode:(KNSlideNode *)arg1;
- (KNSlideNode *)defaultSlideNodeForNewSelection;
- (KNSlideNode *)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSlideNode:(KNSlideNode *)arg1;
- (NSArray *)orderedSlideNodesInSelection:(KNSlideCollectionSelection *)arg1;

@end
