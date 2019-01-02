/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIDelayOperation : VUIAsynchronousOperation {
    double  _delay;
    NSDate * _fireDate;
    bool  _shouldIgnoreTolerance;
    NSObject<OS_dispatch_source> * _timerSource;
    double  _tolerance;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly, copy) NSDate *fireDate;
@property (nonatomic) bool shouldIgnoreTolerance;
@property (nonatomic, readonly) double tolerance;

+ (id)delayOperationWithDelay:(double)arg1;
+ (id)delayOperationWithFireDate:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)cancel;
- (void)dealloc;
- (double)delay;
- (void)executionDidBegin;
- (id)fireDate;
- (id)init;
- (id)initWithDelay:(double)arg1 tolerance:(double)arg2;
- (id)initWithFireDate:(id)arg1 tolerance:(double)arg2;
- (void)setShouldIgnoreTolerance:(bool)arg1;
- (bool)shouldIgnoreTolerance;
- (double)tolerance;

@end
