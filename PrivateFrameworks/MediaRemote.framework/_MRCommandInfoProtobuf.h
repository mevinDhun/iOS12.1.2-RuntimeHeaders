/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {
    bool  _active;
    int  _canScrub;
    int  _command;
    bool  _enabled;
    struct { 
        unsigned int canScrub : 1; 
        unsigned int command : 1; 
        unsigned int maximumRating : 1; 
        unsigned int minimumRating : 1; 
        unsigned int numAvailableSkips : 1; 
        unsigned int preferredPlaybackRate : 1; 
        unsigned int presentationStyle : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int skipFrequency : 1; 
        unsigned int skipInterval : 1; 
        unsigned int upNextItemCount : 1; 
        unsigned int active : 1; 
        unsigned int enabled : 1; 
        unsigned int supportsSharedQueue : 1; 
    }  _has;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    float  _maximumRating;
    float  _minimumRating;
    int  _numAvailableSkips;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _preferredIntervals;
    float  _preferredPlaybackRate;
    int  _presentationStyle;
    int  _repeatMode;
    int  _shuffleMode;
    int  _skipFrequency;
    int  _skipInterval;
    NSMutableArray * _supportedCustomQueueIdentifiers;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedInsertionPositions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPlaybackQueueTypes;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedRates;
    bool  _supportsSharedQueue;
    int  _upNextItemCount;
}

@property (nonatomic) bool active;
@property (nonatomic) int canScrub;
@property (nonatomic) int command;
@property (nonatomic) bool enabled;
@property (nonatomic) bool hasActive;
@property (nonatomic) bool hasCanScrub;
@property (nonatomic) bool hasCommand;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) bool hasLocalizedShortTitle;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic) bool hasMaximumRating;
@property (nonatomic) bool hasMinimumRating;
@property (nonatomic) bool hasNumAvailableSkips;
@property (nonatomic) bool hasPreferredPlaybackRate;
@property (nonatomic) bool hasPresentationStyle;
@property (nonatomic) bool hasRepeatMode;
@property (nonatomic) bool hasShuffleMode;
@property (nonatomic) bool hasSkipFrequency;
@property (nonatomic) bool hasSkipInterval;
@property (nonatomic) bool hasSupportsSharedQueue;
@property (nonatomic) bool hasUpNextItemCount;
@property (nonatomic, retain) NSString *localizedShortTitle;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic) float maximumRating;
@property (nonatomic) float minimumRating;
@property (nonatomic) int numAvailableSkips;
@property (nonatomic, readonly) double*preferredIntervals;
@property (nonatomic, readonly) unsigned long long preferredIntervalsCount;
@property (nonatomic) float preferredPlaybackRate;
@property (nonatomic) int presentationStyle;
@property (nonatomic) int repeatMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) int skipFrequency;
@property (nonatomic) int skipInterval;
@property (nonatomic, retain) NSMutableArray *supportedCustomQueueIdentifiers;
@property (nonatomic, readonly) int*supportedInsertionPositions;
@property (nonatomic, readonly) unsigned long long supportedInsertionPositionsCount;
@property (nonatomic, readonly) int*supportedPlaybackQueueTypes;
@property (nonatomic, readonly) unsigned long long supportedPlaybackQueueTypesCount;
@property (nonatomic, readonly) float*supportedRates;
@property (nonatomic, readonly) unsigned long long supportedRatesCount;
@property (nonatomic) bool supportsSharedQueue;
@property (nonatomic) int upNextItemCount;

+ (Class)supportedCustomQueueIdentifierType;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (bool)active;
- (void)addPreferredInterval:(double)arg1;
- (void)addSupportedCustomQueueIdentifier:(id)arg1;
- (void)addSupportedInsertionPositions:(int)arg1;
- (void)addSupportedPlaybackQueueType:(int)arg1;
- (void)addSupportedRate:(float)arg1;
- (int)canScrub;
- (void)clearPreferredIntervals;
- (void)clearSupportedCustomQueueIdentifiers;
- (void)clearSupportedInsertionPositions;
- (void)clearSupportedPlaybackQueueTypes;
- (void)clearSupportedRates;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasActive;
- (bool)hasCanScrub;
- (bool)hasCommand;
- (bool)hasEnabled;
- (bool)hasLocalizedShortTitle;
- (bool)hasLocalizedTitle;
- (bool)hasMaximumRating;
- (bool)hasMinimumRating;
- (bool)hasNumAvailableSkips;
- (bool)hasPreferredPlaybackRate;
- (bool)hasPresentationStyle;
- (bool)hasRepeatMode;
- (bool)hasShuffleMode;
- (bool)hasSkipFrequency;
- (bool)hasSkipInterval;
- (bool)hasSupportsSharedQueue;
- (bool)hasUpNextItemCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (float)maximumRating;
- (void)mergeFrom:(id)arg1;
- (float)minimumRating;
- (int)numAvailableSkips;
- (double)preferredIntervalAtIndex:(unsigned long long)arg1;
- (double*)preferredIntervals;
- (unsigned long long)preferredIntervalsCount;
- (float)preferredPlaybackRate;
- (int)presentationStyle;
- (bool)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (void)setActive:(bool)arg1;
- (void)setCanScrub:(int)arg1;
- (void)setCommand:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasActive:(bool)arg1;
- (void)setHasCanScrub:(bool)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasMaximumRating:(bool)arg1;
- (void)setHasMinimumRating:(bool)arg1;
- (void)setHasNumAvailableSkips:(bool)arg1;
- (void)setHasPreferredPlaybackRate:(bool)arg1;
- (void)setHasPresentationStyle:(bool)arg1;
- (void)setHasRepeatMode:(bool)arg1;
- (void)setHasShuffleMode:(bool)arg1;
- (void)setHasSkipFrequency:(bool)arg1;
- (void)setHasSkipInterval:(bool)arg1;
- (void)setHasSupportsSharedQueue:(bool)arg1;
- (void)setHasUpNextItemCount:(bool)arg1;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaximumRating:(float)arg1;
- (void)setMinimumRating:(float)arg1;
- (void)setNumAvailableSkips:(int)arg1;
- (void)setPreferredIntervals:(double*)arg1 count:(unsigned long long)arg2;
- (void)setPreferredPlaybackRate:(float)arg1;
- (void)setPresentationStyle:(int)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipInterval:(int)arg1;
- (void)setSupportedCustomQueueIdentifiers:(id)arg1;
- (void)setSupportedInsertionPositions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedPlaybackQueueTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedRates:(float*)arg1 count:(unsigned long long)arg2;
- (void)setSupportsSharedQueue:(bool)arg1;
- (void)setUpNextItemCount:(int)arg1;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (int)skipFrequency;
- (int)skipInterval;
- (id)supportedCustomQueueIdentifierAtIndex:(unsigned long long)arg1;
- (id)supportedCustomQueueIdentifiers;
- (unsigned long long)supportedCustomQueueIdentifiersCount;
- (int*)supportedInsertionPositions;
- (int)supportedInsertionPositionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedInsertionPositionsCount;
- (int)supportedPlaybackQueueTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedPlaybackQueueTypes;
- (unsigned long long)supportedPlaybackQueueTypesCount;
- (float)supportedRateAtIndex:(unsigned long long)arg1;
- (float*)supportedRates;
- (unsigned long long)supportedRatesCount;
- (bool)supportsSharedQueue;
- (int)upNextItemCount;
- (void)writeTo:(id)arg1;

@end