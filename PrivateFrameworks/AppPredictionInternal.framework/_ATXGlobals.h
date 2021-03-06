/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXGlobals : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)actionExperienceHighConfidenceAppActionCountThreshold;
- (double)actionExperienceHighConfidenceThreshold;
- (int)actionExperienceMediumConfidenceAppActionCountThreshold;
- (double)actionExperienceMediumConfidenceThreshold;
- (int)actionPredictionFirstStageBeamWidth;
- (double)actionPredictionInternalBuildSessionLogSamplingRate;
- (double)actionPredictionInternalBuildShadowLogSamplingRate;
- (double)actionPredictionSessionLogSamplingRate;
- (int)actionPredictionSessionLoggingBottomBlockMaxItemsToLog;
- (double)actionPredictionSessionLoggingDurationResolutionSec;
- (double)actionPredictionShadowLogSamplingRate;
- (double)airplaneModeLaunchDecayHalflife;
- (bool)allowBehavioralPredictionsOnLockscreen;
- (double)appActionAirplaneModeLaunchDecayHalflife;
- (double)appActionCoreMotionLaunchDecayHalflife;
- (double)appActionDayOfWeekLaunchDecayHalflife;
- (double)appActionLaunchDecayHalflife;
- (double)appActionLaunchSequenceDecayHalflife;
- (double)appActionTrendingLaunchDecayHalflife;
- (double)appActionUnlockTimeDecayHalflife;
- (double)appActionWifiSSIDLaunchDecayHalflife;
- (int)appConnectionMinAverageLaunches;
- (int)appConnectionMinTotalLaunches;
- (double)appConnectionSessionObjectLogSamplingRate;
- (double)appLaunchDecayHalflife;
- (id)approvedSiriKitIntents;
- (id)blacklistedAppActions;
- (id)blacklistedAppActionsForPredictions;
- (id)blacklistedAppActionsForPrimaryShortcuts;
- (id)blacklistedAppActionsForShortcuts;
- (id)blacklistedAppActionsHelper:(id)arg1;
- (id)blacklistedAppsForLockscreenPredictions;
- (double)clippingThresholdForGaussianDist;
- (double)coreMotionLaunchDecayHalflife;
- (int)currentLocationUpdateInterval;
- (double)dayOfWeekLaunchDecayHalflife;
- (double)defaultPredictionRefreshRate;
- (int)donationWeighingScheme;
- (double)donationWeighingStrength;
- (int)extraAppsToLog;
- (int)extraIntentsToLog;
- (int)extraSASAppsToLog;
- (double)heuristicsBaseScore;
- (int)heuristicsEngagementPriorAlpha;
- (int)heuristicsEngagementPriorBeta;
- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (double)launchSequenceDecayHalflife;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (int)lockscreenMaxValidCacheAge;
- (int)maxDistanceToDropOffLocationInMetersForRequestRideIntent;
- (int)maxHeuristicAppActionCount;
- (int)maxMagicalMomentsPredictions;
- (int)maxNumberOfActionTypesPerApp;
- (int)maxValidATXActionResponseCacheAgeSec;
- (int)maximumParameterCombinations;
- (double)maximumSlotFeedbackDatabaseEntryAge;
- (double)maximumSlotResolutionDatabaseEntryAge;
- (int)maximumSpotlightPredictions;
- (id)messageContentBlacklist;
- (int)messageContentTimeElapsed;
- (int)minDistanceToDropOffLocationInMetersForRequestRideIntent;
- (int)minimumTimespanForOnceOffActions;
- (double)notificationsCustomerSamplingRate;
- (double)notificationsHistoryDecayHalflife;
- (double)notificationsInternalSamplingRate;
- (double)notificationsPromotingEngageRateStd;
- (double)notificationsPromotingEngageRateThreshold;
- (double)notificationsQuietingEngageRateStd;
- (double)notificationsQuietingEngageRateThreshold;
- (double)notificationsQuietingProbabilityThreshold;
- (bool)notificationsQuietingUseLogisticRegression;
- (double)notificationsSeedSamplingRate;
- (double)nsuaDonationWeight;
- (int)numberOfActionsToKeepForLogging;
- (int)numberOfRandomAppActionTypesToKeepForLogging;
- (int)numberOfRandomSlotsToKeepForLogging;
- (int)numberOfTopSASAppsToLog;
- (bool)onlyUseEligibleForPrediction;
- (double)penaltyForMultipleActionsPerApp;
- (double)predictionsForMultiStageLoggingLimit;
- (double)predictionsPerAppActionLimit;
- (int)previousAppActionCompareCount;
- (int)previousLOIExpirationTime;
- (id)sasEnabledIntents;
- (id)sasOOBEHighConfidenceApps;
- (int)sessionLoggingAppSequenceLength;
- (bool)sessionLoggingCurrentLOITypeEnable;
- (double)sessionLoggingDistanceAccuracy;
- (bool)sessionLoggingGymDistanceEnable;
- (bool)sessionLoggingHomeDistanceEnable;
- (double)sessionLoggingLatLongAccuracy;
- (bool)sessionLoggingLatLongEnable;
- (bool)sessionLoggingSchoolDistanceEnable;
- (bool)sessionLoggingWorkDistanceEnable;
- (double)sessionObjectLogSamplingRate;
- (double)shadowLogSamplingRate;
- (int)siriExperienceHighConfidenceIntentCountThreshold;
- (int)siriExperienceHighConfidenceLaunchCountThreshold;
- (double)siriExperienceHighConfidenceThreshold;
- (int)siriExperienceMediumConfidenceIntentCountThreshold;
- (int)siriExperienceMediumConfidenceLaunchCountThreshold;
- (double)siriExperienceMediumConfidenceThreshold;
- (double)slotResolutionDayOfWeekLaunchDecayHalflife;
- (double)slotResolutionLaunchDecayHalflife;
- (double)slotResolutionLocationLaunchDecayHalflife;
- (double)slotResolutionMotionTypeLaunchDecayHalflife;
- (double)slotResolutionPreviousLocationLaunchDecayHalflife;
- (double)slotResolutionRatioSmoothingThreshold;
- (double)slotResolutionTimeOfDayLaunchDecayHalflife;
- (double)smartAppSelectionSessionObjectLogSamplingRate;
- (double)smartAppSelectionShadowLogSamplingRate;
- (double)smoothedBudgetForTimeOfDayStd;
- (double)smoothedCountForCoarseTimeOfDayStd;
- (double)smoothedCountForTimeOfDayStd;
- (double)spotlightLaunchDecayHalflife;
- (int)spotlightMaxValidCacheAge;
- (double)trendingLaunchDecayHalflife;
- (double)unlockTimeDecayHalflife;
- (double)wifiSSIDLaunchDecayHalflife;

@end
