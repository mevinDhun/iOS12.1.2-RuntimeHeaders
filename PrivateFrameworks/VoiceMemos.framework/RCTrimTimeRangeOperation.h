/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTrimTimeRangeOperation : NSOperation {
    bool  _canSimulateTrimmingProgress;
    id /* block */  _progressUpdateBlock;
    float  _simulatedProgress;
    struct { 
        double beginTime; 
        double endTime; 
    }  _timeRange;
    bool  _trimMode;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double exportedDuration;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) bool progressShouldContinueUpdating;
@property (nonatomic, copy) id /* block */ progressUpdateBlock;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) struct { double x1; double x2; } timeRange;
@property (nonatomic, readonly) bool trimMode;

- (void).cxx_destruct;
- (void)_postFinalProgressUpdateNotification;
- (float)_progress;
- (id)initWithTimeRange:(struct { double x1; double x2; })arg1 trimMode:(long long)arg2;
- (void)main;
- (double)progress;
- (bool)progressShouldContinueUpdating;
- (id /* block */)progressUpdateBlock;
- (void)setCanSimulateTrimmingProgress:(bool)arg1;
- (void)setProgressUpdateBlock:(id /* block */)arg1;
- (void)simulateTrimmingProgress;
- (void)start;
- (struct { double x1; double x2; })timeRange;
- (bool)trimMode;
- (void)updateExportSessionProgressWithInterval:(double)arg1;

@end
