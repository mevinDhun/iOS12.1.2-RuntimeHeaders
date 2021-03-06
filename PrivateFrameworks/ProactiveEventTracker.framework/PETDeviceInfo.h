/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETDeviceInfo : NSObject {
    int  _batterySaverModeToken;
}

+ (bool)isBatterySaverEnabled;
+ (bool)isBetaBuild;
+ (bool)isDemoModeEnabled;
+ (bool)isInternalBuild;
+ (bool)isLowEndHardware;
+ (id)sharedInstance;
+ (bool)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
