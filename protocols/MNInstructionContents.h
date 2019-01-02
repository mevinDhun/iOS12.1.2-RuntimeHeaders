/* Generated by EzioChiu.
 */

@protocol MNInstructionContents

@required

- (long long)context;
- (bool)hasServerContent;
- (NSString *)instruction;
- (NSArray *)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (NSArray *)instructionWithShorterAlternatives;
- (NSString *)roadName;
- (void)setRoadName:(NSString *)arg1;
- (void)setSuppressFallback:(bool)arg1;
- (void)setSuppressNames:(bool)arg1;
- (NSString *)stringForDistance:(double)arg1;
- (bool)suppressFallback;
- (bool)suppressNames;

@end
