/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResult : PBCodable <NSCopying> {
    unsigned int  _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int liveTravelTime : 1; 
        unsigned int status : 1; 
    }  _has;
    unsigned int  _historicTravelTime;
    unsigned int  _liveTravelTime;
    GEOPlaceSearchResponse * _placeSearchResponse;
    NSMutableArray * _sortedETAs;
    int  _status;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic) bool hasLiveTravelTime;
@property (nonatomic, readonly) bool hasPlaceSearchResponse;
@property (nonatomic) bool hasStatus;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) unsigned int liveTravelTime;
@property (nonatomic, retain) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic, retain) NSMutableArray *sortedETAs;
@property (nonatomic) int status;

+ (Class)sortedETAType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addSortedETA:(id)arg1;
- (void)clearSortedETAs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (bool)hasDistance;
- (bool)hasHistoricTravelTime;
- (bool)hasLiveTravelTime;
- (bool)hasPlaceSearchResponse;
- (bool)hasStatus;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (bool)isEqual:(id)arg1;
- (unsigned int)liveTravelTime;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchResponse;
- (bool)readFrom:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasLiveTravelTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setLiveTravelTime:(unsigned int)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (void)setSortedETAs:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)sortedETAAtIndex:(unsigned long long)arg1;
- (id)sortedETAs;
- (unsigned long long)sortedETAsCount;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end