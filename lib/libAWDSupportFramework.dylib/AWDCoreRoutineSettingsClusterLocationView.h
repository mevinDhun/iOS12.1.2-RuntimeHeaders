/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineSettingsClusterLocationView : PBCodable <NSCopying> {
    int  _countInCluster;
    int  _deletionCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int countInCluster : 1; 
        unsigned int deletionCount : 1; 
    }  _has;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) int countInCluster;
@property (nonatomic) int deletionCount;
@property (nonatomic) bool hasCountInCluster;
@property (nonatomic) bool hasDeletionCount;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countInCluster;
- (void)dealloc;
- (int)deletionCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountInCluster;
- (bool)hasDeletionCount;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setCountInCluster:(int)arg1;
- (void)setDeletionCount:(int)arg1;
- (void)setHasCountInCluster:(bool)arg1;
- (void)setHasDeletionCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
