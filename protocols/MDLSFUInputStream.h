/* Generated by EzioChiu.
 */

@protocol MDLSFUInputStream <NSObject>

@required

- (bool)canSeek;
- (void)close;
- (<MDLSFUInputStream> *)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
