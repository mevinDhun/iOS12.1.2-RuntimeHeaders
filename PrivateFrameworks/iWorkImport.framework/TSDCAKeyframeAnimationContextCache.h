/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAKeyframeAnimationContextCache : TSDCAPropertyAnimationContextCache {
    NSArray * _keyTimes;
    NSArray * _timingFunctions;
    NSArray * _values;
}

@property (nonatomic, readonly) NSArray *keyTimes;
@property (nonatomic, readonly) NSArray *timingFunctions;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)arg1;
- (id)keyTimes;
- (double)percentAtTime:(double)arg1;
- (id)timingFunctions;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)values;

@end
