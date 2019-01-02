/* Generated by EzioChiu.
 */

@protocol MTTimerIntentSupport <NSObject>

@required

- (double)duration;
- (NSDate *)lastModifiedDate;
- (double)remainingTime;
- (unsigned long long)state;
- (NSUUID *)timerID;
- (NSString *)title;

@end
