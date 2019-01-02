/* Generated by EzioChiu.
 */

@protocol NFLFeedComponentLayout <NSObject, NSCopying>

@required

- (unsigned long long)columnSpan;
- (NSSet *)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(NFLFeedSettings *)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (NSArray *)tileInfosUsed;

@end
