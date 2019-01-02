/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchSequence : NSObject {
    _ATXDataStore * _datastore;
    NSString * _previousAppActionLaunch;
    bool  _previousAppDeleted;
    NSString * _previousLaunch;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    NSMutableDictionary * _subsequentAppActionLaunchCountMap;
    double  _subsequentAppActionLaunchTotalCount;
    NSMutableDictionary * _subsequentLaunchCountMap;
    double  _subsequentLaunchTotalCount;
}

@property (nonatomic, readonly) bool previousAppDeleted;
@property (nonatomic, readonly) double subsequentAppActionLaunchTotalCount;
@property (nonatomic, readonly) double subsequentLaunchTotalCount;

- (void).cxx_destruct;
- (void)_deleteDataForAppActionLocked:(id)arg1;
- (void)_deleteDataForBundleLocked:(id)arg1;
- (void)addSubsequentAppActionLaunch:(id)arg1;
- (void)addSubsequentLaunch:(id)arg1;
- (void)dealloc;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (void)deleteAllInformation;
- (void)deleteDataForAppAction:(id)arg1;
- (void)deleteDataForAppActions:(id)arg1;
- (void)deleteDataForBundle:(id)arg1;
- (void)deleteDataForBundles:(id)arg1;
- (id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2;
- (id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(bool)arg3;
- (id)initWithPreviousAppActionLaunch:(id)arg1 subsequentAppActionLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(bool)arg4;
- (id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2;
- (id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(bool)arg3;
- (id)initWithPreviousLaunch:(id)arg1 subsequentLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(bool)arg4;
- (double)launchCountForAppAction:(id)arg1;
- (double)launchCountForBundle:(id)arg1;
- (double)likelihoodForAppAction:(id)arg1;
- (double)likelihoodForBundleId:(id)arg1;
- (bool)previousAppDeleted;
- (void)save;
- (void)saveAppAction;
- (double)subsequentAppActionLaunchTotalCount;
- (double)subsequentLaunchTotalCount;

@end